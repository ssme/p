/*[Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product     : XCU XRAY Communication     Unit
*
* Name        : version.h
*
* Author      : Janschitz            ;     Siemens AG ANL A426PR; (09131) 7-25627
*
* Language    : C
*
* Description : Definition der Versionslabels
*
* PVCS-Header : $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/version.h,v 1.46 2007/09/19 13:30:30 reinhold Exp $
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef VERSION_H
#define VERSION_H
/************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: version.h,v $
* Revision 1.55  2009/5/14 9:02:10  Yang Zhiming
* VC00A_REV11
*
* Revision 1.54  2009/3/28 15:56:30  Yang Zhiming
* VC00A_REV10
* 
* Revision 1.54  2009/3/25 14:56:30  Yang Zhiming
* VC00A_REV09
* 
* Revision 1.53  2009/3/25 14:30:30  Larry
* VC00A_REV08
*
* Revision 1.52  2009/2/13 14:30:30  Larry
* VC00A_REV07
* 
* Revision 1.51  2008/10/15 14:30:30  Larry
* VC00A_REV06
* 
* Revision 1.50  2008/08/11 14:30:30  Larry
* VC00A_REV04
*
* Revision 1.49  2008/08/04 16:30:30  Larry
* VC00A_REV03
*
* Revision 1.48  2008/05/12 16:30:30  Larry
* VC00A_REV01
*
* Revision 1.47  2008/03/14 10:30:30  Larry
* VC00A_REV00
* 
* Revision 1.46  2007/09/19 13:30:30  reinhold
* VB08A_REV13
*
* Revision 1.45  2007/09/19 10:28:32  reinhold
* VB08A_REV12
*
* Revision 1.44  2007/09/14 10:11:23  reinhold
* VB08A_REV11
*
* Revision 1.43  2007/09/10 09:25:57  alexander_s
* VB08A_REV10
*
* Revision 1.42  2007/09/06 09:19:51  alexander_s
* VB08A_REV09
*
* Revision 1.41  2007/08/30 10:39:17  alexander_s
* VB08A_REV08
*
* Revision 1.40  2007/08/06 07:54:04  reinhold
* VB08A_REV07
*
* Revision 1.39  2007/08/01 12:57:03  reinhold
* VB08A_REV06
*
* Revision 1.38  2007/07/17 16:36:04  reinhold
* VB08A_REV05
*
* Revision 1.37  2007/07/10 07:53:36  susanne
* VB08A-Rev04
*
* Revision 1.36  2007/07/04 15:08:24  reinhold
* VB08A_REV03
*
* Revision 1.35  2007/06/29 10:16:55  susanne
* VB08A-Rev02
*
* Revision 1.34  2007/06/12 11:58:35  reinhold
* Result of merging NRF branch to MAIN
*
* Revision 1.33  2007/06/11 09:56:19  reinhold
* Version VB07D mit der Revision REV03
*
* Revision 1.32  2007/05/24 13:02:28  reinhold
* Version VB07D mit der Revision REV02
*
* Revision 1.31.2.2  2007/05/31 10:21:36  alexander_s
* 2007/05/31 Version 'VB08A', Revision 'PRE01'
*
* Revision 1.31.2.1  2007/05/10 09:36:09  susanne
* Entwicklerversion für NFR: VB07D E00A0
*
* Revision 1.31  2007/04/27 16:13:21  reinhold
* Version VB07D mit der Revision REV01
*
* Revision 1.30  2007/04/23 14:24:02  hans
* Revision 12
*
* Revision 1.29  2007/04/12 06:35:25  hans
* Rev 11
*
* Revision 1.28  2007/04/02 10:00:54  reinhold
* Revision 10
*
* Revision 1.27  2007/03/19 13:11:57  reinhold
* XCU_2 VB07C REV09
* PRE IT 3
*
* Revision 1.26  2007/03/09 09:29:27  alexander_m
* XCU_2 VB07C REV08
* PRE IT 3
*
* Revision 1.25  2007/02/22 18:23:34  alexander_m
* XCU_2 VB07C REV07
*
* Revision 1.24  2007/02/22 09:03:02  hans
* Rev nicht mehr grossgeschrieben
*
* Revision 1.23  2007/02/15 16:37:09  reinhold
* Die Version auf Revision 6 hochgezählt.
*
* Revision 1.22  2007/01/19 10:32:51  reinhold
* Rev wurde hochgezählt
*
* Revision 1.21  2006/12/07 18:57:47  reinhold
* *** empty log message ***
*
* Revision 1.20  2006/12/07 17:36:01  reinhold
* Changed SW-Revision to VB07C - REV04
*
* Revision 1.19  2006/11/24 08:18:35  alexander_m
* VB07C - REV03
*
* Revision 1.18  2006/11/17 10:29:32  alexander_m
* *** empty log message ***
*
* Revision 1.17  2006/11/14 14:23:53  alexander_m
* Fehler behoben (Quittierung der Fehler)
*
* Revision 1.16  2006/11/09 20:36:44  hans
* *** empty log message ***
*
* Revision 1.15  2006/11/09 11:01:42  alexander_m
* neue Funktionen: ST_DATA_TRANS wird bearbeitet & kleinere Aenderungen
*
* Revision 1.14  2006/11/06 12:05:07  alexander_m
* ERRMSG in Unicode utf-16
* neue ERRMSG in \08-Impl\package\ERRMSG !!
*
* Revision 1.13  2006/10/10 13:52:29  alexander_m
* nach vielen kleineren aenderungen gibts eine neue version
*
* Revision 1.12  2006/09/14 08:28:03  christian_l
* Nach zwei Wochen in Forchheim.
*
* Revision 1.11  2006/09/01 06:54:34  michael
* *** empty log message ***
*
* Revision 1.10  2006/08/28 13:06:32  michael
* *** empty log message ***
*
* Revision 1.9  2006/08/17 12:43:47  michael
* *** empty log message ***
*
* Revision 1.8  2006/08/08 14:05:21  michael
* *** empty log message ***
*
* Revision 1.7  2006/07/11 11:49:33  michael
* *** empty log message ***
*
* Revision 1.6  2006/06/30 09:22:20  michael
* TRACELOG in scanner & parser
*
* Revision 1.5  2006/06/29 14:51:38  michael
* rev 22
*
* Revision 1.4  2006/06/09 14:17:14  michael
* bv simulation
*
* Revision 1.3  2006/06/07 12:10:05  michael
* ierrorlog2
*
* Revision 1.2  2006/02/13 15:03:52  christian_l
* RMOS-Changes made in QNX-Version
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*XCU_SW_REV
*
*    Rev /main/175   2005/05/24   Toni
* Version VB07A mit der Revision REV00
*
*    Rev /main/174   2005/05/18   Toni
* Version VB06E mit der Revision REV15
*
*    Rev /main/174   2005/05/17   Toni
* Version VB06E mit der Revision REV14
*
*    Rev /main/173   2005/05/11   Toni
* Version VB06E mit der Revision REV13
*
*    Rev /main/172   2005/05/03   Hans
* Version VB06E mit der Revision REV12
*
*    Rev /main/171   2005/04/26   Hans
* Version VB06E mit der Revision REV11
*
*    Rev /main/170   2005/04/25   Hans
* Version VB06E mit der Revision REV10
*
*    Rev /main/169   2005/04/19   Hans
* Version VB06E mit der Revision REV09
*
*    Rev /main/168   2005/03/09   Hans
* Version VB06E mit der Revision REV06
*
*    Rev /main/167   2005/03/09   Hans
* Version VB06E mit der Revision REV05
*
*    Rev /main/166   2005/03/02   Hans
* Version VB06E mit der Revision REV04
*
*    Rev /main/165   2005/02/15   Toni
* Version VB06E mit der Revision REV03
*
*    Rev /main/164   2005/02/10   Toni
* Version VB06E mit der Revision REV02
*
*    Rev /main/163   2005/01/21   Toni
* Version VB06E mit der Revision REV01
*
*    Rev /main/162   2005/01/07   Hans
* Version VB06D mit der Revision REV03
*
*    Rev /main/161   2004/12/07   Hans
* Version VB06D mit der Revision REV02
*
*    Rev /main/160  2004/09/17   Hans
* Version VB06D mit der Revision REV01
*
*    Rev /main/159   2004/08/04   Toni
* Version VB06C mit der Revision REV14
*
*    Rev /main/158   2004/08/02   Hans
* Version VB06C mit der Revision REV13
*
*    Rev /main/157   2004/07/05   Hans
* Version VB06C mit der Revision REV12
*
*    Rev /main/156   2004/07/05   Hans
* Version VB06C mit der Revision REV11
*
*    Rev /main/155   2004/06/14   Hans
* Version VB06C mit der Revision REV10
*
*    Rev /main/154   2004/06/08   Hans
* Version VB06C mit der Revision REV09
*
*    Rev /main/153   2004/06/04   Toni
* Version VB06C mit der Revision REV08
*
*    Rev /main/152   2004/06/01   Hans
* Version VB06C mit der Revision REV07
*
*    Rev /main/151   2004/05/27   Hans
* Version VB06C mit der Revision REV06
*
*    Rev /main/150   2004/05/25   Hans
* Version VB06C mit der Revision REV05
*
*    Rev /main/149   2004/05/17   Hans
* Version VB06C mit der Revision REV04
*
*    Rev /main/148   2004/05/17   Hans
* Version VB06C mit der Revision REV03
*
*    Rev /main/147   2004/05/14   Toni
* Version VB06C mit der Revision REV02
*
*    Rev /main/146   2004/04/22   Toni
* Version VB06C mit der Revision REV01
*
*    Rev /main/145   2004/04/20   Toni
* Version VB06B mit der Revision REV14
*
*    Rev /main/144   2004/03/18   Hans
* Version VB06B mit der Revision REV13
*
*    Rev /main/143   2004/03/16   Toni
* Version VB06B mit der Revision REV12
*
*    Rev /main/142   2004/02/27 09:00:00   Toni
* Version VB06B mit der Revision REV11
*
*    Rev /main/141   2004/02/24 14:00:00   Toni
* Version VB06B mit der Revision REV10
* Zukï¿½nftig wird die Version einmalig bei Beginn der ï¿½nderung festgelegt.
* Die Zwischenversionen wï¿½hrend der Implementierung werden durch die
* Revision gekennzeichnet (REV00-REV99)
*
*    Rev /main/140   2003/11/24 09:00:00   Toni
* Version DB06B
*
*    Rev /main/139   2003/09/25 13:00:00   Toni
* Version VB06A
*
*    Rev /main/138   2003/07/17 10:00:00   Toni
* Version VB05X
*
*    Rev /main/137   2003/05/16 10:00:00   Hans
* Version VB05W
*
*    Rev /main/136   2002/06/14 10:00:00   Toni
* Version VB05V
*
*    Rev /main/135   2001/09/21 15:00:00   Toni
* Version VB05U
*
*    Rev /main/134   2001/07/31 14:00:00   Toni
* Version VB05T
*
*    Rev /main/133   2001/06/19 14:00:00   Toni
* Version B5T04 Zielversion wird VB05T
*
*    Rev /main/132   2001/05/28 14:00:00   Toni
* Version B5S03 Zielversion wird VB05S
*
*    Rev /main/131   2001/05/10 10:00:00   Toni
* Version B5S02 Zielversion wird VB05S
*
*    Rev /main/130   2001/04/24 11:00:00   Toni
* Version B5S01 Zielversion wird VB05S
*
*    Rev /main/129   2001/03/28 11:00:00   Toni
* Version B5S00 Zielversion wird VB05S
*
*    Rev /main/128   2001/03/23 08:00:00   Toni
* Version VB05R
*
*    Rev /main/127   2001/03/15 14:00:00   Toni
* Version B5R06 Zielversion wird VB05R
*
*    Rev /main/126   2001/03/12 13:00:00   Toni
* Version B5R05 Zielversion wird VB05R
*
*    Rev /main/125   2001/03/06 10:00:00   Toni
* Version B5R04 Zielversion wird VB05R
*
*    Rev /main/124   2001/02/26 10:00:00   Toni
* Version B5R03 Zielversion wird VB05R
*
*    Rev /main/123   2001/02/26 10:00:00   Toni
* Version B5R02 Zielversion wird VB05R
*
*    Rev /main/122   2001/01/20 08:00:00   Toni
* Version B5R01 Zielversion wird VB05R
*
*    Rev /main/121   2000/12/21 08:00:00   Toni
* Version B5R00 Zielversion wird VB05R
*
*    Rev /main/120   2000/11/24 08:00:00   Toni
* Version B5P03 Zielversion wird VB05P
*
*    Rev /main/119   2000/11/06 08:00:00   Toni
* Version B5P02 Zielversion wird VB05P
*
*    Rev /main/118   2000/11/03 13:00:00   Toni
* Version B5P01 Zielversion wird VB05P
*
*    Rev /main/117   2000/08/11 11:00:00   Toni
* Version B5P00 Zielversion wird VB05P
*
*    Rev /main/116   2000/07/26 15:00:00   Toni
* Version VB05N
*
*    Rev /main/115   2000/07/12 15:00:00   Toni
* Version TB05W
*
*    Rev /main/114   2000/05/19 15:00:00   Toni
* Version TB05V
*
*    Rev /main/113   2000/04/04 16:00:00   Toni
* Version TB05U
*
*    Rev /main/112   2000/03/27 14:00:00   Toni
* Version TB05T
*
*    Rev /main/111   2000/03/21 14:00:00   Toni
* Version TB05S
*
*    Rev /main/110   2000/02/24 14:00:00   Toni
* Version TB05R
*
*    Rev /main/109   2000/02/15 14:00:00   Toni
* Version TB05Q ("O" wird wegen Verwechslungsgefahr mit "0" ausgelassen)
*
*    Rev /main/108   2000/02/01 9:12:00   Toni
* Version TB05P
*
*    Rev /main/107   1999/12/8 9:22:22   achim
* Version TB05L
*
*    Rev /main/106   1999/12/3 9:53:47   hans
* Version VB05K
*
*    Rev /main/105   1999/11/29 13:2:24   hans
* Version TB05K
*
*    Rev /main/104   1999/11/16 13:14:1   achim
* Version tb05b
*
*    Rev /main/103   1999/9/17 10:4:48   achim
* Version erhoeht: VB05J
*
*    Rev /main/102   1999/7/13 11:28:55   achim
* Neue Version: VB05I
*
*    Rev /main/101   1999/5/20 10:43:28   achim
* Testversion: Tb05I
*
*    Rev /main/100   1999/5/17 12:48:51   achim
* Version erhoeht: VB05H
*
*    Rev /main/99   1999/2/24 10:32:48   achim
* Version erhoeht: VB05G
*
*    Rev /main/98   1999/1/22 12:53:49   achim
* Version erhoeht: VB05F
*
*    Rev /main/97   1998/11/24 13:56:36   achim
* Version erhoeht: TB06D
*
*    Rev /main/96   1998/11/12 9:16:10   achim
* Version erhoeht: TB06C
*
*    Rev /main/95   1998/10/26 14:17:3   achim
* Neue Version: TB06A
*
*    Rev /main/94   1998/10/14 13:44:39   achim
* Version erhoeht: VB05E
*
*    Rev /main/93   1998/9/4 15:7:13   hans
* Version auf VB05D zurueck
*
*    Rev /main/92   1998/9/4 14:3:15   hans
* Version VB05E
*
*    Rev /main/91   1998/8/27 10:18:40   achim
* Neue Version VB)5D
*
*    Rev /main/90   1998/8/4 12:5:8   achim
* Version erhoeht: VB06A
*
*    Rev /main/89   1998/7/8 16:46:9   achim
* Version erhoeht: VB05B
*
*    Rev /main/88   1998/6/16 11:48:4   achim
* Version auf vb05a zurueck
*
*    Rev /main/87   1998/6/15 15:40:55   achim
* Version VB05B
*
*    Rev /main/86   1998/6/2 14:55:5   achim
* Version VB05A
*
*    Rev /main/85   1998/5/22 12:14:50   achim
* Version tb05s
*
*    Rev /main/84   1998/5/4 14:27:56   achim
* Testversion erhoeht: TB05R
*
*    Rev /main/83   1998/4/24 8:46:56   achim
* Testversion erhoeht: VB05Q
*
*    Rev /main/82   1998/4/22 14:49:59   achim
* Testversion erhoeht: TB05P
*
*    Rev /main/81   1998/4/8 16:3:57   hans
* Version TB05N
*
*    Rev /main/80   1998/4/2 10:14:22   achim
* Testversion erhoeht: TB05M
*
*    Rev /main/79   1998/3/27 14:22:0   achim
* Testversion: TB05L
*
*    Rev /main/78   1998/3/25 10:32:7   achim
* Testversion erhoeht: TB05K
*
*    Rev /main/77   1998/3/23 11:42:26   achim
* Testversion: TB05J
*
*    Rev /main/76   1998/3/20 15:17:22   achim
* Testversion: TB05I
*
*    Rev /main/75   1998/3/19 9:2:32   achim
* Testversion: TB05H
*
*    Rev /main/74   1998/3/12 14:43:41   achim
* Testversionen: TB05A - TB05G
*
*    Rev /main/73   1998/1/20 15:19:15   achim
* Version erhoeht: VB04C
*
*    Rev /main/72   1997/12/2 15:54:33   achim
* Version erhoeht: VB04B
*
*    Rev /main/71   1997/11/18 11:20:43   achim
* Version erhoeht: VB04A
*
*    Rev /main/70   1997/11/3 11:14:43   gaby
* Neue Version VB03W.
*
*    Rev /main/69   1997/10/16 14:24:7   achim
* Version erhoeht: VB03V
*
*    Rev /main/68   1997/9/25 13:49:51   achim
* Version erhoeht: VB03U
*
*    Rev /main/67   1997/9/17 13:44:53   hans
* Version VB03T.
*
*    Rev /main/66   1997/9/1 11:34:39   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
*
*    Rev /main/65   1997/7/1 13:44:28   achim
* Version erhoeht: VB03S
*
*    Rev /main/64   1997/5/5 9:58:8   achim
* Version erhoeht: VB03R
*
*    Rev \main\63   1997/4/10 14:16:4   achim
* Version erhoeht: VB03Q
 *
 *    Rev 1.61   18 Mar 1997 14:40:54   achim
 *
 * Version erhoeht: VB03P
 *
 *    Rev 1.60   12 Mar 1997 10:18:20   susi
 * Version erhoeht: VB03N
 *
 *    Rev 1.59   28 Feb 1997 15:16:18   hans
 *
 * Version erhoeht: TB03M
 *
 *    Rev 1.58   25 Feb 1997 13:17:36   achim
 * Version erhoeht: TB03L
 *
 *    Rev 1.57   21 Feb 1997 13:57:44   achim
 * Version erhoeht: TB03K
 *
 *    Rev 1.56   11 Feb 1997 13:31:54   gaby
 * Version TB02J
 *
 *    Rev 1.55   05 Feb 1997 14:34:54   achim
 * Version erhoeht: TB03I
 *
 *    Rev 1.54   24 Jan 1997 10:54:26   achim
 *
 * Version erhoeht: TB03H
 *
 *    Rev 1.53   20 Dec 1996 12:09:26   gaby
 *
 * Version VB03G.
 *
 *    Rev 1.52   16 Dec 1996 19:09:06   achim
 *
 * Version auf VB03E zurueckgeaendert.
 *
 *    Rev 1.51   12 Dec 1996 14:03:48   achim
 * Version erhoeht: VB03F
 *
 *    Rev 1.50   03 Dec 1996 10:19:42   achim
 * Version erhoeht: VB03E
 *
 *    Rev 1.49   14 Nov 1996 09:09:40   achim
 * Version erhoeht: VB03D
 *
 *    Rev 1.48   07 Nov 1996 14:08:52   hans
 * Version erhoeht: VB03C
 *
 *    Rev 1.47   23 Oct 1996 09:44:12   achim
 * Version erhoeht: VB03B
 *
 *    Rev 1.46   25 Sep 1996 10:29:46   achim
 * Version geaendert auf VB03A
 *
 *    Rev 1.45   26 Jul 1996 13:00:36   achim
 *
 * Version geaendert: UB02T
 *
 *    Rev 1.44   26 Jun 1996 15:13:26   achim
 * Version erhoeht: TB02T
 *
 *    Rev 1.43   20 Jun 1996 15:06:48   achim
 *
 * Version auf TB02S erhoeht.
 *
 *    Rev 1.42   14 Jun 1996 15:49:12   achim
 *
 * Version erhoeht: TB02R
 *
 *    Rev 1.41   12 Jun 1996 09:52:10   susi
 * Version TB02Q
 *
 *    Rev 1.40   05 Jun 1996 09:50:00   gaby
 * Version VB02P.
 *
 *    Rev 1.39   24 May 1996 10:10:10   gaby
 * neue version
 *
 *    Rev 1.38   22 May 1996 16:50:02   gaby
 *
 * neue Version.
 *
 *    Rev 1.37   14 May 1996 15:27:14   achim
 *
 * Version erhoeht: TB02M
 *
 *    Rev 1.36   13 May 1996 15:05:24   achim
 *
 * Version erhoeht: TB02L
 *
 *    Rev 1.35   03 May 1996 15:46:30   gaby
 *
 * TB02K
 *
 *    Rev 1.34   29 Apr 1996 10:46:42   hans
 * Version TB02J
 *
 *    Rev 1.33   24 Apr 1996 17:10:44   achim
 *
 * Version rueckgeaendert auf TB02I
 *
 *    Rev 1.32   24 Apr 1996 10:26:18   achim
 * Version fuer DFR-N auf TB02J geaendert.
 *
 *    Rev 1.31   17 Apr 1996 13:58:28   achim
 *
 * Version erhoeht: VB02I
 *
 *    Rev 1.30   09 Apr 1996 13:52:30   achim
 *
 * Version VB02H
 *
 *    Rev 1.29   26 Mar 1996 14:45:48   achim
 * Neue Version: VB02G
 *
 *    Rev 1.28   13 Mar 1996 10:15:52   achim
 *
 * Version auf VB02F erhoeht.
 *
 *    Rev 1.27   15 Feb 1996 16:21:30   hans
 * Version VB02E
 *
 *    Rev 1.26   25 Jan 1996 08:39:34   achim
 * Version: VB02D
 *
 *    Rev 1.25   19 Jan 1996 09:18:48   susi
 * Version VB02C
 *
 *    Rev 1.24   19 Dec 1995 13:16:34   hans
 *
 * Version VB02B
 *
 *    Rev 1.23   10 Oct 1995 16:41:52   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.22   29 Sep 1995 08:51:16   achim
 * neue Version: VB02A
 *
 *    Rev 1.21   11 Sep 1995 09:24:04   hans
 *
 * Version VB01V
 *
 *    Rev 1.20   05 Sep 1995 09:16:12   hans
 *
 * Version VB01U
 *
 *    Rev 1.19   17 Aug 1995 17:02:34   hans
 * Version VB01T
 *
 *    Rev 1.18   31 Jul 1995 14:37:16   hans
 *
 * neue Version: VB01S
 *
 *    Rev 1.17   19 Jul 1995 15:51:56   hans
 * Version VB01R.
 *
 *    Rev 1.16   12 Jul 1995 09:50:12   hans
 *
 * Version VB01Q
 *
 *    Rev 1.15   07 Jul 1995 08:44:16   hans
 * Version VB01P
 *
 *    Rev 1.14   28 Jun 1995 16:54:40   andrea
 *
 * neue Version: VB01N
 *
 *    Rev 1.13   24 Jun 1995 14:46:20   achim
 *
 * Version auf vb01m erhoeht.
 *
 *    Rev 1.12   02 Jun 1995 09:52:34   achim
 * neue Version: VB01L
 *
 *    Rev 1.11   01 Jun 1995 13:49:12   achim
 *
 * neue Version: TB01L
 *
 *    Rev 1.10   30 May 1995 16:09:44   achim
 * neue Version TB01K
 *
 *    Rev 1.9   17 May 1995 13:42:34   achim
 * Version auf TB01J erhoeht
 *
 *    Rev 1.8   11 May 1995 15:02:34   achim
 * neue Version: TA02I
 *
 *    Rev 1.7   06 Mar 1995 15:54:32   andrea
 * Version 'TB01H'
 *
 *    Rev 1.6   13 Feb 1995 12:58:10   achim
 * Version TB01G
 *
 *    Rev 1.5   13 Feb 1995 12:38:40   achim
 * Version VB01G
 *
 *    Rev 1.4   03 Feb 1995 08:11:26   achim
 * version auf VB01F erhoeht
 *
 *    Rev 1.3   16 Jan 1995 16:41:30   andrea
 *
 * Version 'VB01E'
 *
 *    Rev 1.2   13 Dec 1994 11:59:18   achim
 *
 * Version 'VB01D'
 *
 *    Rev 1.1   07 Oct 1994 12:11:40   hans
 * Version VA04A
 *
 *    Rev 1.0   10 Aug 1994 10:10:32   susi
 * Initial revision.
*
\************************************************************************/


/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*]     END: common     definitions     */
 

#define MCS_SW_VER 'V','A','0','0','0'
#define MCS_SW_REV 'R','E','V','0','0'
 
#endif
