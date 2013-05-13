/********************************************************************* 
	Rhapsody	: 7.2 
	Component	: AxnClient 
	Configuration 	: DefaultConfig 
	Model Element	: CAxnClientIF 
	File Path	: \rtc\Rtccsf\Axn\src\axnclientif\gbl\AxnClientIF.h 
  
	(c) Siemens AG Healthcare - All Rights Reserved 
*********************************************************************/

#ifndef AxnClientIF_H
#define AxnClientIF_H

//## dependency axcscom
#ifndef AXCSTYPEDEF_H
  #include "gbl/axcscom.h"
#endif

#ifndef AXN_NEUTRINO
  #ifdef AXN_LIB
    #define IMPORT_EXPORT __declspec( dllexport )
  #else /* AXN_LIB */
    #define IMPORT_EXPORT __declspec( dllimport )
  #endif /* AXN_LIB */
#else
#define IMPORT_EXPORT
#endif

//## package AxnClientIF

//## class CAxnClientIF
//## interface to the AXCS network. Create a object of the interface and 
//## use the object for sending and receiving to the AXCS network
//##
class IMPORT_EXPORT CAxnClientIF {
    ////    Constructors and destructors    ////
    
public :

    //## operation CAxnClientIF()
    CAxnClientIF();
    
    //## operation ~CAxnClientIF()
    virtual ~CAxnClientIF();
    
    ////    Operations    ////
    
    //## operation connectToServer(ACS_ENUM,ACS_WORD)
    //## ACS_AXN_OK        (ACS_ENUM)   1    the operation was succesful
    //## ACS_AXN_NOK       (ACS_ENUM)   2    the operation was not succesful
    //##
    //## parameter:
    //## ClientAPId:        MIN: 0x1         MAX: 0xFF
    //## wDummyTimeCounter  MIN: 0           MAX: 32767, 
    //##                    parameter is used for sending the dummy messages each
    //##                    wDummyTimeCounter * 200 [ms] to the Client APId
    virtual ACS_ENUM connectToServer(ACS_ENUM bClientId, ACS_WORD wDummyTimeCounter) = 0;
    
    //## operation recvObject(ACS_BYTE *)
    //## ACS_AXN_OK        (ACS_ENUM)   1    the operation was succesful
    //## ACS_AXN_NOK       (ACS_ENUM)   2    the operation was not succesful
    //## ACS_AXN_TIMEOUT   (ACS_ENUM)   3    the operation returns after timeout
    //##
    //## parameter:
    //## pcObj:            address of array[MAX_LEN_ACS_OBJ = 1460]
    virtual ACS_ENUM recvObject(ACS_BYTE * pcObj) = 0;
    
    //## operation recvObject(ACS_DWORD,ACS_BYTE*)
    //## ACS_AXN_OK        (ACS_ENUM)   1    the operation was succesful
    //## ACS_AXN_NOK       (ACS_ENUM)   2    the operation was not succesful
    //## ACS_AXN_TIMEOUT   (ACS_ENUM)   3    the operation returns after timeout
    //## 
    //## info: please do not use any longer
    virtual ACS_ENUM recvObject(ACS_DWORD l_lRecvTimeout, ACS_BYTE* pcObj) = 0;
    
    //## operation sendObject(ACS_BYTE *)
    //## ACS_AXN_OK        (ACS_ENUM)   1    the operation was succesful
    //## ACS_AXN_NOK       (ACS_ENUM)   2    the operation was not succesful
    //## parameter:
    //## pcObj:            address of array[8 - 1460], first 8 bytes must have a valid 
    //##                   filled structure of acs_obj_header_t
    virtual ACS_ENUM sendObject(ACS_BYTE * pcObj) = 0;
    
    //## operation getClientAPId()
    //## returns:
    //## ACS_ENUM           1 - 255  ClientAPId of the connected client
    virtual ACS_ENUM getClientAPId() = 0;
    
    //## operation sendObjectToServer(ACS_BYTE*)
    //## send a AXCS object
    //## ACS_AXN_OK        (ACS_ENUM)   1    the operation was succesful
    //## ACS_AXN_NOK       (ACS_ENUM)   2    the operation was not succesful
    //## parameter:
    //## pcObj:            address of array[MAX_LEN_ACS_OBJ = 1460]
    //## 
    //## info: please do not use any longer. Use sendObject instead.
    static ACS_ENUM sendObjectToServer(ACS_BYTE* pcObject);
    
};


#endif
/*********************************************************************
	File Path	: \rtc\Rtccsf\Axn\src\axnclientif\gbl\AxnClientIF.h
*********************************************************************/
