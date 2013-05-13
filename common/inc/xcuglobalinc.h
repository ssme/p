#ifndef _xcuglobalinc_h
#define _xcuglobalinc_h
//#include <XCULog.h>
//#include <svc.h>
//#include <rmtypes.h>
//#include <sysdefs.h>
#include <string.h>
#include <map>
/***************************************************************
     constant-names in systemcalls
 ***************************************************************/

          /* wait types for aloc, recv, send, look, qstrt, strt */

#define WAIT_RDY                    1u              /* qstrt, strt            */
#define WAIT_END                    2u              /* qstrt, strt            */
#define WT                          WAIT_RDY        /* aloc, recv, send, look */
#define CNT                         0u              /* aloc, recv, send, look,*/
                                                    /* qstrt, strt            */


#define MAX_PRI                     0u              /* qstrt, strt            */
#define SET_PRI                     1u              /* qstrt, strt, send      */
#define CURR_PRI                    2u              /* qstrt, strt, send      */
#define TCD_PRI                     3u              /* qstrt, strt, send      */

 /**************************************************************************/
 /*                        Used path and files                             */
 /**************************************************************************/
#define	XCU_ROOT					"/XCU_ROOT"
#define XCU_VAR                     XCU_ROOT "/VAR/"
#define XCU_ETC                     XCU_ROOT "/ETC" 
#define XCU_BIN						XCU_ROOT "/BIN"
#define XCU_DOWNLOAD                XCU_ROOT "/DOWNLOAD"
#define HOST_XCU_SHARE              "/Share/Xcu"
#define HOST_SE_SHARE               "/Generator"


#define KONFIG_DIRECTORY					"/KONF"
#define XCU_KONFIG_DIRECTORY							"/AP240"
#define KONFIG_BACKUP_DIRECTORY				"/KONF_BCK"
#define ERROR_DIRECTORY						"/ERR_LOG"
#define ERROR_AKTUELL							"/WARN_ERR.ACT"				/* aktuelles Errorfile */
#define ERROR_OLD								"/WARN_ERR.OLD"				/* altes Errorfile (enthält die letzten MAX_ERR_LOG_COUNT Einträge) */
#define ERROR_SYNC_COUNT						"/ERRCOUNT.DAT"
#define ERR_TEXT_VERZ 						"/ERRMSG"  /* Verzeichnis in dem die Textdateien stehen */
#define VERWEISLISTE 						"/VERW.V"         /* Verweisliste Komponente -> Datei */
#define TRACE_DIRECTORY						"/TRACE"
#define MONITOR_FILE									"/DEFAULT.MON" 	/*Name der Default Stationslisten Datei*/
#define MONITOR_STATION_LIST_FILE						"/DEFAULT.CFG"		/*Name der Default Stationslisten Datei*/
#define	MONITOR_M_INDEX_FILE							"/DEFAULT.MDX"		/* Name der MIndexDatei */
#define	MONITOR_INDEX_FILE								"/DEFAULT.IDX"		/* Name der IndexDatei */
#define	MONITOR_OBJECT_FILE								"/DEFAULT.TRC"		/* Name der ObjektDatei */
#define DELTA_TIME_FILE                                 "/delta_time.txt"   /* Name der DeltaTimeDatei */

#define	ROEDOK_VERZ    						"/ROEDOK"      /* Verzeichnis fuer Roehrendokumentation */
#define	ROEDATEI										"/ROEDOK.TXT"        /* Datei fuer Roehrendokumentation */

#define PWD_VERZ     						"/PWD"      /* Verzeichnis fuer Passwort */
#define PWDDATEI        								"/INFO.TXT"        /* Datei fuer Passwort */
#define SYSLIBVERS                                                "/SysLib_Version.TXT"/* Datei fuer Versionsnummer vom SysLIb */
// Dateiname fuer die Prioritaetsdatei
#define SYSPRIO_FILE                             "/SysPrio.txt"

#define FilterDatei XCU_ROOT TRACE_DIRECTORY "filterdatei"
#define FloppyDatei XCU_ROOT TRACE_DIRECTORY "floppydatei" 




/* Timer ID type for the systemcalls TIMERSTART and TIMERCANCEL */
typedef unsigned long RM_TimerId[2];
#define tid_t   RM_TimerId



//typedef ushort (*FUNCTION_UC_UC_US_PUC) (uchar,uchar,ushort,uchar*);		/* Layh, 05.08.05 */
//typedef ushort (*FUNCTION_UC_US_UC_PUC) (uchar,ushort,uchar,uchar*);		/* Layh, 05.08.05 */
//typedef ushort (*FUNCTION_UC_UC_PUC)	(uchar,uchar,uchar*);				/* Layh, 05.08.05 */
//typedef ushort (*FUNCTION_UC_US_PVOID)	(uchar, ushort, void *);			/* Layh, 08.08.05 */
//typedef	ushort (*FUNCTION_UC_US_PUC)	(uchar,ushort,uchar*);				/* Layh, 05.08.05 */
//typedef ushort (*FUNCTION_UC_PUC)		(uchar, uchar*);					/* Layh  24.08.05 */
//typedef ushort (*FUNCTION_VOID)         ();									/* Layh, 05.08.05 */

/**
 * \brief      Is this XCU configured to work in a NRF system?
 ******************************************************************************/
extern bool isNrf;

/**
 * \brief      Is the power line OK?
 * 
 *             Performs a check of system flags to detect a power failure.
 * 
 * \return     \c true if the power is ok, \c false if a power fail signal was
 *             detected.
 * 
 * \remarks    Defined in init/init_tsk.cpp
 ******************************************************************************/
bool IsPowerOk( void ) throw ();

//for IconosM development, Dec,19, 2007, Larry
extern bool isIconosM;
//add for system Nr, Mar.13, 2008, Larry
//extern uchar sys_SFD_nr; 
//extern uchar sys_BED_nr;
//extern uchar sys_TOMO_nr;
//extern uchar sys_BWS_nr;
//YZM change the system information	achieve methode, from Init-block to Macro
//MD+ development 2010-06-04
//extern uchar sys_DFR_nr;
//extern uchar sys_TOMO_DFR_nr;
//YZM change the system information	achieve methode, from Init-block to Macro
//MD+ development end 

//add for Fluoro Curve Selection, Oct. 7, 2008, Larry
extern std::map<char*, int> map_FL_nr;
extern char CurveNameNr[100][30];  //for FL curve name
extern int AutoNr_realNr[18];      //for real fluoro curve number
extern int gen_FL_nr[6];           //for FL nr
//end for IconosM development

//for IconosM development, 03/13/2008, WuHuihui
//extern uchar xrayFlag;
//end for IconosM development

//for IconosM development,05/05, 2008, Yang Zhiming	
// flags for SFD console display controlling
//extern uchar DispIGGANZ_Flag_Main;
//extern uchar DispIGGANZ_Flag_Sub;
//extern uchar SBED_Operat_Flag;

#define Tilt_Mov_Flag     0x01;
#define SFD_Mov_Flag      0x02;
#define SID_Mov_Flag      0x04;
#define Top_Mov_Flag      0x08;
#define Collim_Mov_Flag   0x10;

extern size_t mas_index_select;
//extern ulong mas_IEC_select;
//extern ulong mas_for_MaxPower;

//end for IconosM development

#endif
