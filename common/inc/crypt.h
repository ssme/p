/******************************************************************************/
#ifndef	    TYPEDEF_FLAG
#define	    TYPEDEF_FLAG	1
/******************************************************************************/

typedef	    char			crypt_char;
typedef	    crypt_char		*crypt_string;

#define	    CRYPT_NOSTRING	((crypt_string) 0L)

/*----------------------------------------------------------------------------*/

typedef	    unsigned long	crypt_id;
#define	    CRYPT_NOHOSTID	0

/*----------------------------------------------------------------------------*/

typedef	    unsigned long	crypt_time;

#define	    CRYPT_NOTIME	0
#define	    CRYPT_INFINITY	1

/*----------------------------------------------------------------------------*/

typedef	    unsigned long	crypt_dtime;

#define	    SECONDS_PER_DAY		(24*60*60)
#define	    SECONDS_PER_WEEK    (7*SECONDS_PER_DAY)
#define	    SECONDS_PER_YEAR    (365*SECONDS_PER_DAY)

/******************************************************************************/
#endif /* TYPEDEF_FLAG */
/******************************************************************************/
