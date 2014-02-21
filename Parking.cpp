#include <unistd.h>

#include "Outils.h"
#include "Menu.h"
#include "Heure.h"

#define ARG_NUM 2
#define ARG_ERR 1
#define EFFACER_ECRAN true

int main(int argc, char ** argv)
{
	if(argc < ARG_NUM)
	{
		exit(ARG_ERR);
	}
	InitialiserApplication(argv[1]);

	sleep(10); /*ZzzZZzzZzzzzZZzzzz*/

	TerminerApplication(EFFACER_ECRAN);
}
