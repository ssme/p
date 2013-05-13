/**************************************************************************

@X_PROJ_NAME = SIREMOBIL 2000 BOOT SOFTWARE

@X_FILE_NAME = USEFUL.H

@X_LONG_NAME = USEFULl functions

@X_MODUL_TYP = Include

@X_VERSION   = V01c

@X_DATE      = 08-Sep-1989

@X_AUTOR     = Hefter /RLO1

@X_TOOL      = iC V 4.1

@X_CHANGES   = 09-May-1990 KK unsigned char*-> char*

==========================================================================

       Kurzbeschreibung
       ----------------

@DSC = Enthaelt Prototypen fuer Hilfsfunktionen

************************************************************************/ 

extern  void           JMP_FP (char *Destination);
extern  unsigned char  *MK_FP (unsigned Segment, unsigned Offset);
extern  unsigned short GET_SEG (char *Ptr);
extern  unsigned short GET_OFF (char *Ptr);
extern  char           *INC_FP (char *Ptr);
extern  char           *DINC_FP (char *Ptr);
extern  char           *ADD_FP (char *Ptr,long Smnd);
extern  unsigned       ADD_MEM (unsigned Summe, char *Ptr,
                                unsigned Laenge);
extern  char*          FP_NORM (char *Ptr);
extern  long           PTR_TO_LONG (char *Ptr);
extern  int            PTR_CMP (void *Ptr1, void *Ptr2);
