//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"📶 ", "~/.scripts/ssid",	0,		0},
    {"", "~/.scripts/volume",   0,		10},
	{"📅 ", "date '+%d-%m-%Y %H:%M'",   60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
