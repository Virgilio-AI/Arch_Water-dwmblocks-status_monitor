//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^c#B400FF^",	"sb-music ",	1,	11},
	{"^c#F4FF00^^c#FFFFFF^",	"sb-price btc Bitcoin ",				1,	21},
	{"^c#43BAD6^^c#FFFFFF^",	"sb-price ada Cardano ",				1,	21},
	{"^c#B400FF^",	"sb-volume",	0,	10},
	{"^c#FFFFFF^",	"sb-clock",	60,	1},
	{"^c#00F3FF^",	"sb-internet",	5,	4},
	{"","sb-battery",	5,	3},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
