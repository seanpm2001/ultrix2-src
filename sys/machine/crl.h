/* 
 * @(#)crl.h	1.1 (ULTRIX)	3/1/85
 */
/************************************************************************
 *									*
 *			Copyright (c) 1984 by				*
 *		Digital Equipment Corporation, Maynard, MA		*
 *			All rights reserved.				*
 *									*
 *   This software is furnished under a license and may be used and	*
 *   copied  only  in accordance with the terms of such license and	*
 *   with the  inclusion  of  the  above  copyright  notice.   This	*
 *   software  or  any  other copies thereof may not be provided or	*
 *   otherwise made available to any other person.  No title to and	*
 *   ownership of the software is hereby transferred.			*
 *									*
 *   The information in this software is subject to change  without	*
 *   notice  and should not be construed as a commitment by Digital	*
 *   Equipment Corporation.						*
 *									*
 *   Digital assumes no responsibility for the use  or  reliability	*
 *   of its software on equipment which is not supplied by Digital.	*
 *									*
 ************************************************************************/
/*
 * Modification History:
 *
 * 27-Feb-85 -tresvik
 *	Support of the VAX8600.
 *
 */

#if VAX8600
/*
 * Console RL02 status of current transfer (read only)
 */
#define CRL_S_XCMPLT	1		/* transaction complete */
#define CRL_S_XCONT	2		/* continue transaction */
#define CRL_S_ABORT	3		/* transation abort */
#define CRL_S_RETSTS	4		/* return device status */
#define CRL_S_HNDSHK	0x80		/* handshake err during transaction */
#define CRL_S_HWERR	0x81		/* hardware err during transaction */

/*
 * Console RL02 function codes
 */
#define CRL_F_NOOP	0		/* No operation */
#define CRL_F_RSTSTS	2		/* reset and return device status */
#define CRL_F_ABORT	3		/* abort transfer */
#define CRL_F_RETSTS	4		/* read device status */
#define CRL_F_WRITE	5		/* write block data */
#define CRL_F_READ	6		/* read block data */

/*
 * Console sectoring information.
 * The console understands the rl02 as having 512 byte sectors.
 */
#define	CRLBYSEC 512			/* bytes/sector */
#define	MAXSEC 20480		 	/* sectors/rl02 */

/*
 * STXCS bit definitions
 */
#define STXCS_RDY	0x00000080	/* ready bit */
#define STXCS_IE	0x00000040	/* interrupt enable */

#define	CRLERRS		5	/* number of retries before quitting */

/*
 * The state byte is used to retain exclusivity,
 * and contains the busy flag.
 */
#define	CRL_IDLE	0
#define	CRL_OPEN	1
#define	CRL_BUSY	2


#define	CRLDS_BITS \
"\20\20WDE\17CHE\16WL\15SKTO\14SPE\13WGE\12VC\11DSE\
\10DT\7HS\6CO\5HO\4BH\3STC\2STB\1STA"

#define	CRLCS_BITS \
"\20\20CE\17DE\16NXM\15DLT\14DCRC\13OPI\1DRDY"
#endif