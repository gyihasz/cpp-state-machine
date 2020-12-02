#pragma hdrstop
#include <iostream>
#include <stdio.h>
#include <time.h>
#include "EmbeddedSystemX.h"


#pragma argsused
void sleep();

int main(int argc, char* argv[])
{
	EmbeddedSystemX system;

	printf("--------- Session started ---------\n");
	
	while (1) {
		sleep();
		system.Handle();
	}
	return 0;
}

void sleep() {
   clock_t goal;
   goal = 1 * CLOCKS_PER_SEC + clock();
   while( goal > clock() );
}
