//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/					/*Update Interval*/	/*Update Signal*/
	{"", 		"sb-kbdleds", 					1, 			1},
	{"", 		"sb-temperature", 				5, 			1},
	{"", 		"sb-loadavg", 					10, 			1},
	/* {"",	"sb-price lbc \"LBRY Token\" 📚",		9000,			22}, */
	/* {"",	"sb-price btc Bitcoin 💰",			9000,			21}, */
	{"",	"sb-memory",						10,			14},
	{"",	"sb-cpu",						10,			18},
	/* {"",	"sb-nettraf",						10,			16}, */
	{"",	"sb-internet",						10,			16},
	{"",	"sb-volume",						0,			10},
	{"",	"sb-battery",						30,			1},
	{"",	"sb-clock",						1,			1},
	{"",	"sb-help-icon",						1,			15},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
