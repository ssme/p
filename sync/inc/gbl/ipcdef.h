/*####################################################################################################################*/
/*                                                                                                                    */
/*                                       Includes for InterProcessCommunication                                       */
/*                                                     S1 Plattform                                                   */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*                          Contains message end points of all processes comminicating via IPC.                       */
/*                               Defines all messages that transport events and/or data.                              */
/*                                                                                                                    */
/*                                                                                                                    */
/*                                          Programming language: C ( ANSI )                                          */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*                                                 FILENAME: ipcdef.h                                                 */
/*                                        CREATED FOR: S1-VA10A  VERSION: 0000                                        */
/*                                        DATE       : 09.09.2011                                                     */
/*                                                                                                                    */
/*####################################################################################################################*/

/*
History version 0000 for S1:
- created

*/

#ifndef IPCDEF_H
#define IPCDEF_H

#define MCU_MSG_RANGE       0x11

#define MSG_ENDPOINTID_CHECKTASK   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x11)
#define MSG_ENDPOINTID_GEN_IF      (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x12)
#define MSG_ENDPOINTID_IOCONTROL   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x13)
#define MSG_ENDPOINTID_ACQ   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x14)
#define MSG_ENDPOINTID_MOTIONCONTROL (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x16)
/*####################################################################################################################*/

#define IPC_BREAK_STATES        0x81

#define BUT_BREAK_ORBITAL       0x0001
#define BUT_BREAK_ANGULAR       0x0002
#define BUT_BREAK_HORIZONTAL    0x0004
#define BUT_BREAK_SWIVEL        0x0008
#define BUT_MOVE_VERTICAL_UP    0x0010
#define BUT_MOVE_VERTICAL_DN    0x0020
#define BUT_EMERGENCY_STOP      0x0040

#define LED_BREAK_ORBITAL       0x0001
#define LED_BREAK_ANGULAR       0x0002
#define LED_BREAK_HORIZONTAL    0x0004
#define LED_BREAK_SWIVEL        0x0008
#define LED_EMERGENCY_STOP      0x0040
#define LED_RADIATION           0x0080

#define LED_POSITION_1          0x0100
#define LED_POSITION_2          0x0200

#define BUT_POSITION_1          0x0100
#define BUT_POSITION_2          0x0200
#define BUT_POSITION_MEM_RESET  0x0400
#define BUT_MOVE_ORBITAL_DN     0x1000
#define BUT_MOVE_ORBITAL_UP     0x2000
#define BUT_MOVE_ANGULAR_LT     0x4000
#define BUT_MOVE_ANGULAR_RT     0x8000

#define BUT_MOVE_MASK           (BUT_MOVE_VERTICAL_UP | BUT_MOVE_VERTICAL_DN | BUT_MOVE_ORBITAL_DN | BUT_MOVE_ORBITAL_UP | BUT_MOVE_ANGULAR_LT | BUT_MOVE_ANGULAR_RT)
#define BUT_BREAK_MASK          (BUT_BREAK_ORBITAL | BUT_BREAK_ANGULAR | BUT_BREAK_HORIZONTAL | BUT_BREAK_SWIVEL)

/*####################################################################################################################*/

#endif //IPCDEF_H
