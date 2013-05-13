// This is an example of a client implementation that uses the DLL as the interface 
// to the axn server AXNROOT (in the past we were using a static library).
// It's the part that does the connection to the server and that receives axcs objects.
// This principle example is written in a mixture of real C++ code and pseudo code. It shall
// only show the basic mechanism.
// The function 'sleep' is only a symbolic name.
// The client may also use local header files for definitions.
// 
//
// All objects (except the INIT_MSG) are sent to the main application by 'sendToDis()'.



// You only have to include the file "gbl/CAxnClientIFCreator", because it includes
// all the other neccessary header files. All the include files have to be placed at the folder "gbl".
// Include hierarchy:
// Product specific telegrams are placed in axcs.h
// axcs.h is included from axcscom.h
// Type platform specific definitions are placed in axcscom.h
// axcscom.h is included from AxnClientIF.h
// AxnClientIf.h is included from AxnClientIFCreator.h
#include "gbl/CAxnClientIFCreator"


   CAxnClientIF* pAxnClientIF; 

   ACS_BYTE  bApId = ACS_client;          // this is the AP-ID of the client as defined in axcs.h (e.g. ACS_WS2 or ACS_PMS)
                                          // this AP-ID must also be used in all objects sent by the client

void  CAxrReceiveThread::run()
{
   // the receive thread runs in an endless loop 
   // (shutdown or restart of the application is not considered in this example)
   bool  fSendToDisp = true;
  
   while (fSendToDisp == true)  
   {
      fSendToDisp = this->receive();     // Connect to the network and receive loop
   }                                     // this loop is only left in case of a fatal error
                     
   kill(getpid(),SIGTERM);               // kill the process. It has to be started automatically afterwards

}


bool CAxrReceiveThread::receive()
{
  // This method makes the connection to the axcs network.
  // If the connection is established, it waits for new objects.
  // Objects received from AXCS are send to a mailbox (sendToApplication)
   bool         fSendToDisp       = true;
   static bool  fFirstObjReceived = false;
   static bool  fSycConnected     = false;
   char         cMessage[MAX_LEN_ACS_OBJ];      // buffer for an axcs object with the max. possible length
   
     
   fSycConnected = checkConnection (fSycConnected);               // check connection to axcs
         
   if ((fSycConnected == true) && (pAxnClientIF != NULL)) // do receive only if it is connected
   {
            
      if (pAxnClientIF->recvObject ((ACS_BYTE *)cMessage) == ACS_AXN_OK)   // wait to receive an object
      {                                                                    // Receive successfull


         if (  (fFirstObjReceived == false)                                  
             && (((acs_obj_header_t *)cMessage)->id != INIT_MSG))  // the 1. object must be the INIT object
             && (((acs_obj_header_t *)cMessage)->id != DUMMY_MSG)) // or a DUMMY object
         {
            fSycConnected = false;          // flow not ok, 1. object is not the INIT message
         }                                  // a reconnect is necessary
        
         else
         {
            fFirstObjReceived = true;                 // at least one object successfully received
            if ((acs_obj_header_t *)cMessage)->id == INIT_MSG)
            {                                         
               this->sendInlist()                    // if the INIT_MSG is received the INLIST has to be sent
            }
            else fSendToDisp = sendToApplication (cMessage); // all other objects are sent to the main application
         }                                                   // this part of this example depends on the system where the client is running
      }
      
      else
      {                                          // error during receive
         fSycConnected      = false;             // after an error a reconnect is necessary 
         fFirstObjReceived  = false;                        
      }                                                         
   }
   return (fSendToDisp);                                                         

  //## end CAxrReceiveThread::receive%1056458591.body
}

bool CAxrReceiveThread::checkConnection (bool fSycConnected)
{
  //## begin CAxrReceiveThread::checkConnection%952700336.body preserve=yes
   ACS_ENUM   tAxnReturn;
   bool       fRetConnected  = fSycConnected;
   ACS_WORD   lAxcsAliveTimeFactor = 10;        // the 'alive time' is this factor multiplied with 200ms  (2 sec in this example)


   if ((fSycConnected == false) || (pAxnClientIF == NULL))
   {                                            // if the connection is not established or the instance does not exist
      if (pAxnClientIF != NULL)             
      {
          CAxnClientIFCreator::deleteAxnClientIF(pAxnClientIF) ;   // delete instance pAxnClientIF
          pAxnClientIF = NULL;
          delay(2 * 200 * lAxcsAliveTimeFactor);                   // wait 2x the 'dummy time'
      }
      pAxnClientIF = CAxnClientIFCreator::newAxnClientIF() ;       // the instance is newly created


      if (pAxnClientIF != NULL)
      {
         tAxnReturn = pAxnClientIF->connectToServer(bApId, lAxcsAliveTimeFactor); 
                                                                    // connect to AXN server dummy time * 200ms 
         if (tAxnReturn == ACS_AXN_OK)                              // =============================================
         {                                      
            fRetConnected = true;                // new connection to AXCS server ok
         }                                        
         else
         {
            fRetConnected = false;               // connection to AXCS server failed
            sleep;                               // wait 1 second
         }
      }

      else
      {                                         // if the instance could not be created
         fRetConnected = false;                 // the Process is killed and restarted automatically
         kill(getpid(),SIGTERM);                // restart the application
         sleep;                                 // wait 500ms
      }
   }
   return (fRetConnected);
   
  //## end CAxrReceiveThread::checkConnection%952700336.body
}
}

void CAxrReceiveThread::sendInlist()
{
  //## begin CErhSendInlist::sendInlist%905343949.body preserve=yes
  //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  //X                                                                                                  X
  //X This function sends the inlist of the application                                                X
  //X                                                                                                  X
  //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  	
  	typedef struct inlist_t_tag
  	{
    	   inlist_enh_t1            t1;
         inlist_enh_t2            t2 [NO_OBJECTS_MAX];
  	}inlist_t;

  	inlist_t inlist;
  	ushort   usLength; 
  	
  	inlist.t1.no_objects = 0;
  	
  	inlist.t2[inlist.t1.no_objects++].object_id = SH_STPAR;        // the client wants to receive these objects
  	inlist.t2[inlist.t1.no_objects++].object_id = SH_ZOOM;         //     in this example
  	inlist.t2[inlist.t1.no_objects++].object_id = ST_SYSTEM_STATE;
    
   inlist.t1.header.length      = (ushort) (sizeof(inlist_enh_t1) + (ushort)((short)inlist.t1.no_objects * (short)sizeof(inlist.t2[0].object_id)));
  	inlist.t1.header.mode        = ACS_MODE_FUNCTIONAL;
  	inlist.t1.header.target      = ACS_NO_TARGET;
  	inlist.t1.header.group_index = ACS_ANGIO_GROUP;           
  	inlist.t1.header.sender      = bApId;                 
  	inlist.t1.header.id          = INLIST_ENH;

  	
   if (CAxnClientIF::SendObjToServer((ACS_BYTE*)&inlist) == ACS_AXN_OK)  // send object to axcs
   {                                                                     
           // sending the object was successful
   }
   else
   {
           // error while sending, local error handling. 
           // Regarding axcs nothing has to be done. 
           // The receive returns with an error and the client is reconnected again
   }
  	
  	
  //## end CErhSendInlist::sendInlist%905343949.body
}

void example::example()
{
  //## begin CErhSendInlist::sendInlist%905343949.body preserve=yes
  //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  //                                                                                                  X
  // This is an example how to sends an object e.g. SH_READY                                          X
  // The method is similar for all objects. But you alwasy have to fill out every parameter.          X
  // You can find a second example above in the method sendInlist                                     X
  //XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
  	
   sh_ready_t1 tObj;                                  // allocate memory for the object


   tObj.rstatus        = ACS_READY;                   // or ACS_NOT_READY depending on the status
   tObj.auto_recover   = ACS_NO;                      // the values depent on what you want or have to send
   tObj.dummy1         = ACS_DNIL;                    // set alwasy all dummy parameters to ACS_DNIL
   tObj.dummy2         = ACS_DNIL;

   
   // this is the header of the objecxt 
   tObj.header.length      = sizeof(sh_ready_t1);
  	tObj.header.mode        = ACS_MODE_FUNCTIONAL;      // use only ACS_MODE_FUNCTIONAL  or ACS_MODE_DIRECT
  	tObj.header.target      = ACS_NO_TARGET;            // use only ACS_NO_TARGET in case of (mode = ACS_MODE_FUNCTIONAL)
  	                                                         //     or the AP-ID of the destination in case of (mode = ACS_MODE_DIRECT)
  	tObj.header.group_index = ACS_ANGIO_GROUP;          // the project Artis uses only this group
  	tObj.header.sender      = bApId;                    // use only the AP-ID reserved for your client      
  	tObj.header.id          = SH_READY;                 // this is the object you want to send

  	
   if (CAxnClientIF::SendObjToServer((ACS_BYTE*)&tObj) == ACS_AXN_OK)  // send object to axcs
   {                                                                    
           // sending the object was successful
   }
   else
   {
           // error while sending, local error handling. 
           // Regarding axcs nothing has to be done. 
           // The receive returns with an error and the client is reconnected again
   }
  //## end 

/*
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
These are some remarks how to handle a received object.
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

In the receive thread you always have to allocate memory for the maximum length of an object
   example:
   char         cMessage[MAX_LEN_ACS_OBJ];      // buffer for an axcs object with the max. possible length

The most important parameter of an object is the ID. It is used to identify the object. 
It is part of the header of an object and always located at the same place of the structure
   example:
   ((acs_obj_header_t *)cMessage)->id

The client needs somewhere something like a swich to identify all the different objects 
and to cast the received general structure of an object to the specific one. 
It's up to the application if this is done in the receive thread of later in the main application.
   example:
   
   typedef struct turn_on_t_tag                    // a similar construction is necessary for all objects
  	{                                               // which are composed of several substructures
    	   turn_on_t1            t1;
         turn_on_t2            t2 [NO_OBJECTS_MAX];
  	}turn_on_t;
   
    switch ((acs_obj_header_t *)cMessage)->id
    {
        case TURN_ON:         
         	example::handleTurnOn((turn_on_t)cMessage);
          	break;
                       
       	case SH_PRODUCT:
         	example::handleShProduct((sh_product_t1)cMessage);
          	break;
          	
       	case SH_STPAR:
         	example::handleShStpar((sh_stpar_t1)cMessage);
          	break;
          	
         ...
         ...
    }
   
   