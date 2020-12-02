#include <iostream>
#include <stdio.h>
#include <time.h>
#include <random>
#include "EmbeddedSystemX.h"

void sleep();

int main(int argc, char* argv[])
{
	EmbeddedSystemX system;

	printf("--------- Session started ---------\n");
	
	while (1) {
		sleep();
		Event evt = Event(rand() % 2);
		system.Handle(evt);
	}
	return 0;
}

void sleep() {
   clock_t goal;
   goal = 1 * CLOCKS_PER_SEC + clock();
   while( goal > clock() );
}