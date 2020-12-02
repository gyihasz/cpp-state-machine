#ifndef Mode3H
#define Mode3H
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Mode3: public State
{
	private:
		EmbeddedSystemX* _context;

	public:
		Mode3(EmbeddedSystemX* context);
		void Handle();
};
#endif
