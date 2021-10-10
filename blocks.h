//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"📶: ", "iwgetid -r",					0,		0},
    {"VOL: ", "/data/vivek/extra/scripts/get-sound.sh",					0,		10},
    {"🐧: ", "uname -r",					0,		0},
	{"📦: ", "pacman -Q | wc -l",					600,		0},
	{"📅: ", "date '+%d-%m %H:%M'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
