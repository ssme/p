/*####################################################################################################################*/
/*                                                                                                                    */
/*                                              Includes for AXN-Objects                                              */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*                              Contains defines and data structures which are                                           */
/*                                deleted from the database but required in source to build                              */
/*                                Included objects:        tel_hdr_t                                                      */
/*                                                        SDFRDLPRG                                                      */
/*                                                        SDFRORGPRG                                                      */
/*                                                        IDFRORGPRG                                                      */
/*                                                        IFDORGPRG                                                      */
/*                                                        SFDORGPRG                                                      */
/*                                                        SH_MODE                                                          */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*                                              FILENAME: xcsobj_ad.h                                                 */
/*                                                                                                                    */
/*####################################################################################################################*/

#ifndef XCSOBJ_AD_H
#define XCSOBJ_AD_H



/*----------------------------------------------------------------------*/
/*  Telegrammstruktur                                                   */
/*----------------------------------------------------------------------*/

/* Definition des Telegrammheaders */

typedef struct tel_hdr_t_tag {
        unsigned short           length;
        unsigned char            mode;
        unsigned char            target;
        unsigned char            fktkreis;
        unsigned char            sender;
        unsigned short           telid;
        unsigned char            data[256];
        }__attribute__ ((packed)) tel_hdr_t;

/* Einfuegen eines TelegrammId's in die IPC-Inliste */
#define ADD_TO_INLIST(TEL_ID)\
        InlistTelId[InlistCtr]=TEL_ID;\
        InlistCtr++

/*-----------------------___________________------------------------____________________*/
/*-----------------------___________________------------------------____________________*/


#define NUM_SPEC_PARAMS                                 15

#endif
