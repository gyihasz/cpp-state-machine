#ifndef Mode1H
#define Mode1H
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Mode1: public State
{
	private:
		EmbeddedSystemX* _context;

	public:
		Mode1(EmbeddedSystemX* context);
		void Handle();
};

#endif
