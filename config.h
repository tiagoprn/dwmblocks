//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*{Icon, Command, Update Interval, Update Signal}*/
	{" " , "sb-dunst-status", 1  , 1}  ,
	{" " , "sb-kbdleds"     , 1  , 1}  ,
	{" " , "sb-temperature" , 5  , 1}  ,
	{" " , "sb-loadavg"     , 10 , 1}  ,
	{" " , "sb-memory"      , 10 , 14} ,
	{" " , "sb-cpu"         , 10 , 18} ,
	{" " , "sb-internet"    , 10 , 16} ,
	{" " , "sb-volume"      , 0  , 10} ,
	{" " , "sb-battery"     , 30 , 1}  ,
	{" " , "sb-clock"       , 1  , 1}  ,
	/* {"" , "sb-help-icon"   , 1  , 15} , */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " | ";

