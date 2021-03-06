/*************************************************************************
 *  TinyFugue - programmable mud client
 *  Copyright (C) 1996 - 1999 Ken Keys
 *
 *  TinyFugue (aka "tf") is protected under the terms of the GNU
 *  General Public License.  See the file "COPYING" for details.
 ************************************************************************/
/* $Id: funclist.h,v 35000.29 1999/01/31 00:27:43 hawkeye Exp $ */

/*	  Symbol	Name		Min	Max	*/
/*					Args	Args	*/

funccode( FN_ABS,	"abs",		1,	1),
funccode( FN_ACOS,	"acos",		1,	1),
funccode( FN_ADDWORLD,	"addworld",	4,	8),
funccode( FN_ASCII,	"ascii",	1,	1),
funccode( FN_ASIN,	"asin",		1,	1),
funccode( FN_ATAN,	"atan",		1,	1),
funccode( FN_CHAR,	"char",		1,	1),
funccode( FN_COLUMNS,	"columns",	0,	0),
funccode( FN_COS,	"cos",		1,	1),
funccode( FN_ECHO,	"echo",		1,	4),
funccode( FN_EXP,	"exp",		1,	1),
funccode( FN_FG_WORLD,	"fg_world",	0,	0),
funccode( FN_FILENAME,	"filename",	1,	1),
funccode( FN_FTIME,	"ftime",	2,	2),
funccode( FN_FWRITE,	"fwrite",	2,	2),
funccode( FN_GETOPTS,	"getopts",	1,	2),
funccode( FN_GETPID,	"getpid",	0,	0),
funccode( FN_IDLE,	"idle",		0,	1),
funccode( FN_ISATTY,	"isatty",	0,	0),
funccode( FN_KBDEL,	"kbdel",	1,	1),
funccode( FN_KBGOTO,	"kbgoto",	1,	1),
funccode( FN_KBHEAD,	"kbhead",	0,	0),
funccode( FN_KBLEN,	"kblen",	0,	0),
funccode( FN_KBMATCH,	"kbmatch",	0,	1),
funccode( FN_KBPOINT,	"kbpoint",	0,	0),
funccode( FN_KBTAIL,	"kbtail",	0,	0),
funccode( FN_KBWLEFT,	"kbwordleft",	0,	1),
funccode( FN_KBWRIGHT,	"kbwordright",	0,	1),
funccode( FN_KEYCODE,	"keycode",	1,	1),
funccode( FN_LINES,	"lines",	0,	0),
funccode( FN_LOG,	"log",		1,	1),
funccode( FN_LOG10,	"log10",	1,	1),
funccode( FN_MOD,	"mod",		2,	2),
funccode( FN_MORESCROLL,"morescroll",	1,	1),
funccode( FN_MORESIZE,	"moresize",	0,	0),
funccode( FN_NACTIVE,	"nactive",	0,	1),
funccode( FN_NLOG,	"nlog",		0,	0),
funccode( FN_NMAIL,	"nmail",	0,	0),
funccode( FN_NREAD,	"nread",	0,	0),
funccode( FN_PAD,	"pad",		1,	(unsigned)-1),
funccode( FN_POW,	"pow",		2,	2),
funccode( FN_RAND,	"rand",		0,	2),
funccode( FN_READ,	"read",		0,	0),
funccode( FN_REGMATCH,	"regmatch",	2,	2),
funccode( FN_SEND,	"send",		1,	3),
funccode( FN_SIDLE,	"sidle",	0,	1),
funccode( FN_SIN,	"sin",		1,	1),
funccode( FN_SQRT,	"sqrt",		1,	1),
funccode( FN_STRCAT,	"strcat",	0,	(unsigned)-1),
funccode( FN_STRCHR,	"strchr",	2,	2),
funccode( FN_STRCMP,	"strcmp",	2,	2),
funccode( FN_STRLEN,	"strlen",	1,	1),
funccode( FN_STRNCMP,	"strncmp",	3,	3),
funccode( FN_STRRCHR,	"strrchr",	2,	2),
funccode( FN_STRREP,	"strrep",	2,	2),
funccode( FN_STRSTR,	"strstr",	2,	2),
funccode( FN_SUBSTITUTE,"substitute",	1,	3),
funccode( FN_SUBSTR,	"substr",	2,	3),
funccode( FN_SYSTYPE,	"systype",	0,	0),
funccode( FN_TAN,	"tan",		1,	1),
funccode( FN_TFCLOSE,	"tfclose",	1,	1),
funccode( FN_TFFLUSH,	"tfflush",	1,	2),
funccode( FN_TFOPEN,	"tfopen",	0,	2),
funccode( FN_TFREAD,	"tfread",	1,	2),
funccode( FN_TFWRITE,	"tfwrite",	1,	2),
funccode( FN_TIME,	"time",		0,	0),
funccode( FN_TOLOWER,	"tolower",	1,	1),
funccode( FN_TOUPPER,	"toupper",	1,	1),
funccode( FN_TRUNC,	"trunc",	1,	1),
funccode( FN_WORLDINFO,	"world_info",	0,	2)
