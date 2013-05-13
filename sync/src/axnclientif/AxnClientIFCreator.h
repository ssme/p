/********************************************************************* 
	Rhapsody	: 7.2 
	Component	: AxnClient 
	Configuration 	: DefaultConfig 
	Model Element	: CAxnClientIFCreator 
	File Path	: \rtc\Rtccsf\Axn\src\axnclientif\gbl\AxnClientIFCreator.h 
  
	(c) Siemens AG Healthcare - All Rights Reserved 
*********************************************************************/

#ifndef AxnClientIFCreator_H
#define AxnClientIFCreator_H

//## dependency CAxnClientIF
  #include "gbl\AxnClientIF.h"
//## dependency CAxnClientIFImpl
class CAxnClientIFImpl;

//## package AxnClientIF

//## class CAxnClientIFCreator
class IMPORT_EXPORT CAxnClientIFCreator {
    ////    Operations    ////
    
public :

    //## operation newAxnClientIF()
    static CAxnClientIF* newAxnClientIF();
    
    // ACS_AXN_OK        (ACS_ENUM)   1    /* the operation is accepted */
    // ACS_AXN_NOK       (ACS_ENUM)   2    /* the operation is not accepted */
    //## operation deleteAxnClientIF(CAxnClientIF*)
    static ACS_ENUM deleteAxnClientIF(CAxnClientIF* pAxnClientIF);
    
};


#endif
/*********************************************************************
	File Path	: \rtc\Rtccsf\Axn\src\axnclientif\gbl\AxnClientIFCreator.h
*********************************************************************/
