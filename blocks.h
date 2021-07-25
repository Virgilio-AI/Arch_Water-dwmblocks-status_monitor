//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"^c#47FAE9^",	"sb-music ^c#FFFFFF^#",	1,	11},
	{"^c#F4FF00^^c#FFFFFF^",	"sb-price btc Bitcoin",				1,	21},
	{"",	"sb-volume",	0,	10},
	{"",	"sb-battery",	5,	3},
	{"",	"sb-clock",	60,	1},
	{"",	"sb-internet",	5,	4},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
