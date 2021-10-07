//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"📶: ", "iwgetid -r",					0,		0},
    {"🔽: ", "/data/vivek/extra/scripts/download-speed.sh",					2,		0},
    {"🔼: ", "/data/vivek/extra/scripts/upload-speed.sh",					2,		0},
    {"🐧: ", "uname -r",					0,		0},
	{"📦: ", "pacman -Q | wc -l",					600,		0},
	{"📅: ", "date '+%d-%m %H:%M'",					60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
