#include "EmbeddedSystemX.h"
#include "Mode1.h"
#include "Mode2.h"
#include "Mode3.h"
#include "PowerOnSelfTest.h"
#include <iostream>

EmbeddedSystemX::EmbeddedSystemX() {
	//This is the starting state
	PowerOnSelfTest* m = m->getInstance(this);
	_state = m;
}

void EmbeddedSystemX::setState(State* state) {
	_state = state;
}

void EmbeddedSystemX::Handle(Event _event)
{
	_state->Handle(_event);
}

