#include "EmbeddedSystemX.h"
#include "Mode1.h"
#include "Mode2.h"
#include "Mode3.h"
#include "PowerOnSelfTest.h"
#include <iostream>
#include "Util.h"

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
	/*
	if (instanceof<Mode1>(_state))
	{
		std::cout << "In mode1" << std::endl;
		if (event == EVENT_X) {
			std::cout << "Event X" << std::endl;
		}
		else if (event == EVENT_Y) {
			std::cout << "Event Y" << std::endl;
		}
	}
	if (instanceof<Mode2>(_state))
	{
		std::cout << "In mode2" << std::endl;
		if (event == EVENT_X) {
			std::cout << "Event X" << std::endl;
		}
		else if (event == EVENT_Y) {
			std::cout << "Event Y" << std::endl;
		}
	}
	if (instanceof<Mode3>(_state))
	{
		std::cout << "In mode3" << std::endl;
		if (event == EVENT_X) {
			std::cout << "Event X" << std::endl;
		}
		else if (event == EVENT_Y) {
			std::cout << "Event Y" << std::endl;
		}
	}
	*/

	_state->Handle(_event);
}

