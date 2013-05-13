/*******************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                           */
/*******************************************************************************/
/*                                                                             */
/* ExData.h                                                                    */
/*                                                                             */
/*******************************************************************************/
/*                                                                             */
/* Changes:                                                                    */
/*                                                                             */
/* 10-mar-2006 - KS    - E105   - geclont                                      */
/* 18-jun-2007 - KS    - E229   - Andvanced type inserted                      */
/*                                                                             */
/*******************************************************************************/
#ifndef  L_FILE_COMMON_EXDATA_H
#define  L_FILE_COMMON_EXDATA_H

/*******************************************************************************/
/*                                                                             */
/* Literals                                                                    */
/*                                                                             */
/*******************************************************************************/
#ifndef _lint
   #if defined L_STAND || defined L_ARM
      #ifndef DOXYGEN
         #define PACKED __attribute__((packed))
      #else
         #define PACKED
      #endif
   #else
      #define PACKED
   #endif
#else 
   #define PACKED
#endif
//////////////////////////////////////////////////////////////////////////////////
#ifdef L_ATWS_H
	#pragma pack(1)
#endif
//////////////////////////////////////////////////////////////////////////////////
//#ifndef L_ATWS_H
//   #include "alt_types.h" 
//   #include "_Common\_AWS\___DetectorSize.h"
//   #include "_Common\_AWS\___ExSwitches.h"
//   #include "_Common\_AWS\___Tex.h"
//   #include "_Common\_AWS\___PatientIdSize.h"
//   #include "_Common\_AWS\_AdjustType.h"
//   #include "_Common\_AWS\_CmdId.h"
//   #include "_Common\_AWS\_filter.h"
//   #include "_Common\_AWS\_focus.h"
//   #include "_Common\_AWS\_Mode.h"
//   #include "_Common\_AWS\_PaddleId.h"
//   #include "_Common\_AWS\_TableId.h"   
//   #include "_Common\_AWS\_target.h"
//#else
//   #include "___DetectorSize.h"
//   #include "___ExSwitches.h"
//   #include "___Tex.h"
//   #include "___PatientIdSize.h"
//   #include "_AdjustType.h"
//   #include "_CmdId.h"
//   #include "_filter.h"
//   #include "_focus.h"
//   #include "_Mode.h"
//   #include "_PaddleId.h"
//   #include "_TableId.h"   
//   #include "_target.h"
//#endif

   #include "___DetectorSize.h"
   #include "___ExSwitches.h"
   #include "___Tex.h"
   #include "___PatientIdSize.h"
   #include "_AdjustType.h"
   #include "_CmdId.h"
   #include "_filter.h"
   #include "_focus.h"
   #include "_Mode.h"
   #include "_PaddleId.h"
   #include "_TableId.h"   
   #include "_target.h"
//////////////////////////////////////////////////////////////////////////////////
#define L_RESERVE_SIZE      7   // @ - KS - E239 - 15-nov-2007
                                // @ - KS - E239 - 19-nov-2007
                                // @ - KS - E244 - 17-mar-2008 
                                // @ - SM - E269 - 19-oct-2008
//////////////////////////////////////////////////////////////////////////////////
// Aufnahme Soll und Istdaten (old version)
typedef  struct
   {
   /////////////////////////////////////////////////////////////////////////////
   alt_u8                    u8_Command;                        // Commando
   alt_u8                    u8_SubCommand;                     // Scan Id
   alt_u8                    a_u8_ScanId[L_PATIENT_ID_SIZE];    // Patient Id (nur AWS und CBS)
   alt_u8                    u8_Mode;                           // Aufnahme Mode siehe _Mode.h
   alt_u16                   u16_AdjustType;                    // AdjustType siehe _AdjustType.h 
   alt_u8                    u8_Focus;                          // Focus (small/large) siehe _focus.h
   alt_u8                    u8_Target;                         // Target siehe _target.h - bsiher nur Mo oder Wo
   alt_u8                    u8_Filter;                         // Filter im Collimator - _filter.h
   union_SysSwitches         u_SysSwitches;                     // System Switches der Aufnahme - __ExSwitches.h
   union_ExposureSwitches    u_ExposureSwitches;                // Exposure Switches der Aufnahme - __ExSwitches.h
   alt_u16                   u16_Ut;                            // Röhrenspannung
   alt_u16                   u16_It;                            // Röhren Strom
   alt_u16                   u16_IFil;                          // Filament Strom
   alt_u32                   u32_mAs;                           // mAs 
   alt_u32                   u32_ExposureTime;                  // Aufnahmezeit  
   alt_u32                   a_u32_DetectorField[L_DETECTOR_SIZE];  // Dominate für AEC
   alt_u8                    u8_DoseLevel;                      // Dosislevel - AEC Calc
   alt_u32                   u32_AECTargetValue;                // AEC Zielwert
   alt_u32                   u32_AGD;                           // Average Grandular Dose
   alt_32                    s32_ActAngel;                      // Table Angel
   alt_u16                   u16_CompressionForce;              // Kompressionskraft
   alt_u16                   u16_CompressionThickness;          // Kompressionsdicke
   alt_u16                   u16_ExposureResult;                // Aufnahme Ergebnis - EndExposureSwitches.h 
   alt_u16                   u16_TableId;                       // Id des verwendeten Tables - _TableID.h
   alt_u16                   u16_PaddleId;                      // PaddleId
   alt_u16                   u16_InnerSizeX;                    // X Grenze für Cropping
   alt_u16                   u16_InnerSizeY;                    // Y Grenze für Cropping
   alt_u16                   u16_SID;                           // Source Image Distance
   alt_u16                   u16_SOD;                           // Source Object Distance
   alt_u16                   u16_Mag;                           // Vergrösserungsfactor
   }  
PACKED t_AufnahmeBufferTyp; // Aufnahmeparametertyp
////////////////////////////////////////////////////////////////////////////////
// 18-jun-2007 - KS    - E229   - Advanced type inserted
////////////////////////////////////////////////////////////////////////////////
typedef  struct
   {
   /////////////////////////////////////////////////////////////////////////////
   alt_u8                    u8_Command;                        // Commando
   alt_u8                    u8_SubCommand;                     // Scan Id
   alt_u8                    a_u8_ScanId[L_PATIENT_ID_SIZE];    // Patient Id (nur AWS und CBS)
   alt_u8                    u8_Mode;                           // Aufnahme Mode siehe _Mode.h
   alt_u16                   u16_AdjustType;                    // AdjustType siehe _AdjustType.h
   alt_u8                    u8_Focus;                          // Focus (small/large) siehe _focus.h
   alt_u8                    u8_Target;                         // Target siehe _target.h - bsiher nur Mo oder Wo
   alt_u8                    u8_Filter;                         // Filter im Collimator - _filter.h
   union_SysSwitches         u_SysSwitches;                     // System Switches der Aufnahme - __ExSwitches.h
   union_ExposureSwitches    u_ExposureSwitches;                // Exposure Switches der Aufnahme - __ExSwitches.h
   alt_u16                   u16_Ut;                            // Röhrenspannung
   alt_u16                   u16_It_Pre;                        // RöhrenStrom PreShoot                                 // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_IntendedPreTime;               // Angeforderte Aufnahmezeit PreShoot - nur OEM Modes   // @ - KS - E229 - 18-jun-2007
   alt_u16                   u16_It;                            // Röhren Strom  
   alt_u16                   u16_IFil;                          // Heizstrom Strom 
   alt_u16                   u16_IFil_Pre;                      // Heizstrom Strom PreShoot
   alt_u32                   u32_mAs_Pre;                       // mAs PreShoot                                         // @ - KS - E229 - 18-jun-2007
   alt_u16                   u16_DetectorDelay;                 // Detector Verzögerung nur OEM                         // @ - KS - E229 - 18-jun-2007
   alt_u16                   u16_TotalDelay;                    // Gesamt Verzögerung - nur OEM                         // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_IntendedExTime;                // Angeforderte Aufnahmezeit Main Shoot - nur OEM       // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_mAs;                           // OEM Main Shoot
   alt_u32                   u32_ExposureTime;                  // Aufnahmezeit Main Shoot
   alt_u32                   u32_ExposurePreTime;               // Aufnahmezeit Pre Shoot
   alt_u32                   a_u32_DetectorField[L_DETECTOR_SIZE]; // Dominate für AEC
   alt_u8                    u8_DoseLevel;                      // Dosislevel - AEC Calc 
   alt_u32                   u32_AECTargetValue;                // AEC Zielwert 
   alt_u32                   u32_EDAK_pre;                      // EDAK Pre Shoot                                       // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_EDAK;                          // EDAK Main Shoot                                      // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_AGD_pre;                       // Average Granular Dose Pre Shoot                      // @ - KS - E229 - 18-jun-2007
   alt_u32                   u32_AGD;                           // Average Granular Dose                                // @ - KS - E229 - 18-jun-2007
   alt_32                    s32_ActAngel;                      // Table Angel  
   alt_32                    s32_StereoActAngel;                // Tube Head Angel                                      // @ - KS - E229 - 18-jun-2007
   alt_u16                   u16_CompressionForce;              // Kompressionskraft
   alt_u16                   u16_CompressionThickness;          // Kompressionsdicke
   alt_u16                   u16_ExposureResult;                // Aufnahme Ergebnis - EndExposureSwitches.h
   alt_u16                   u16_TableId;                       // Id des verwendeten Tables - _TableID.h 
   alt_u16                   u16_PaddleId;                      // Id des verwendeten Paddle
   alt_u16                   u16_InnerSizeX;                    // X Grenze für Cropping 
   alt_u16                   u16_InnerSizeY;                    // Y Grenze für Cropping
   alt_u16                   u16_SID;                           // Source Image Distance
   alt_u16                   u16_SOD;                           // Source Object Distance
   alt_u16                   u16_Mag;                           // Vergrösserungsfactor
   alt_u8                    u8_Index;                          // Index - Frame Kennung                                // @ - KS - E239 - 15-nov-2007
   alt_u8                    u8_ActAECTreshhold;                // verwendete AEC Schwelle                              // @ - KS - E239 - 15-nov-2007
   alt_u8                    u8_Arcs;                           // Arcs - Röhrenstossen während der Aufnahme            // @ - KS - E239 - 19-nov-2007
   alt_u16                   u16_UsedTableFlags;                // Flags des verwendeten Tables                         // @ - KS - E244 - 17-mar-2008
   alt_u16                   u16_UsedPaddleFlags;               // Flags des verwendeten Paddles                        // @ - KS - E244 - 17-mar-2008
   alt_16                    s16_OffsetX;                       // X Offset für asymmetrischen Paddle                   // @ - KS - E300 - 12-aug-2009 - Asym Paddle          
   alt_u16                   u16_ToggleUT;                      // Alternative Hochspannung für Dual Energy             // @ - KS - E321 - 04-feb-2010 - for dynamic Tomo      
   alt_u8                    u8_TomoFrames;                     // Anzahl Tomo Frames                                   // @ - SM - E269 - 19-sep-2008
   alt_u32                   u32_TomoFrameMask;                 // Enable Mask Tomo Frames                              // @ - SM - E269 - 19-sep-2008
   alt_u8                    u8_AECMode;                        // AEC Mode                                             // @ - SM - E269 - 19-sep-2008
   alt_u8                    a_u8_Reserved[L_RESERVE_SIZE];     // for future use ... soon empty
	
   }  
PACKED t_AdvancedAufnahmeBufferTyp; // Aufnahmeparametertyp

/****************************************************************************/
/* End of File                                                              */
/****************************************************************************/
#endif
