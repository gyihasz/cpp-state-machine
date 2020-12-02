#include "EmbeddedSystemX.h"
#include "Mode2.h"

EmbeddedSystemX::EmbeddedSystemX() {
	//This is the starting state
	Mode2* m = m->getInstance(this);
	_state = m;
}

void EmbeddedSystemX::setState ( State* state ) {
	_state = state;
}

void EmbeddedSystemX::Handle ()
{
	_state->Handle();
}

