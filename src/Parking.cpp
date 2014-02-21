#include <unistd.h>
#include <string.h>
#include <iostream>
#include "Outils.h"
#include "Menu.h"
#include "Heure.h"

#include "Clavier.h"

#define EFFACER_ECRAN true

int main(int argc, char ** argv)
{
	pid_t noClavier;
	TypeTerminal termT;
	termT = XTERM;
	if(argc > 1 && strcmp(argv[1],"VT220"))
	{
		termT = VT220;
	}

	InitialiserApplication(termT);


	if( (noClavier = fork() ) == 0)
	{
		Clavier();
	}
	else 
	{
		int crdu;
		waitpid(noClavier, &crdu, 0); //WHILE(... ==-1)???
	}

	TerminerApplication(EFFACER_ECRAN);
}
