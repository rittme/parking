#include <unistd.h>
#include <string.h>
#include "Outils.h"
#include "Menu.h"
#include "Heure.h"

#define ARG_NUM 2
#define ARG_ERR 1
#define EFFACER_ECRAN true

int main(int argc, char ** argv)
{
	TypeTerminal termT;
	if(argc < ARG_NUM)
	{
		exit(ARG_ERR);
	}
	termT = XTERM;
	if(strcmp(argv[1],"VT220"))
	{
		termT = VT220;
	}

	InitialiserApplication(termT);

	sleep(10); /*ZzzZZzzZzzzzZZzzzz*/

	TerminerApplication(EFFACER_ECRAN);
}
