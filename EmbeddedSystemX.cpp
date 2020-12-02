#include "EmbeddedSystemX.h"
#include "Mode1.h"
#include "Mode2.h"
#include "Mode3.h"
#include <iostream>
//#include "Util.h"

template<typename Base, typename T>
static inline bool instanceof(const T*) {
	return std::is_base_of<Base, T>::value;
}


EmbeddedSystemX::EmbeddedSystemX() {
	//This is the starting state
	Mode2* m = m->getInstance(this);
	_state = m;
}

void EmbeddedSystemX::setState(State* state) {
	_state = state;
}

void EmbeddedSystemX::Handle(Event event)
{
	//if (instanceof<Mode1>(_state)) {

	if (dynamic_cast<Mode1*>(_state) == nullptr)
	{
		std::cout << "Not in mode1" << std::endl;
	}
	if (dynamic_cast<Mode2*>(_state) == nullptr)
	{
		std::cout << "Not in mode2" << std::endl;
	}
	if (dynamic_cast<Mode3*>(_state) == nullptr)
	{
		std::cout << "Not in mode3" << std::endl;
	}

	////is_base_of<Mode1, state>::value;
	//if (instanceof<Mode2>(_state)) {
	//	std::cout << "It is in m"
	//	if (event == EVENT_X) {
	//		std::cout << "Valamit csinál.";
	//	}
	//	else if (event == EVENT_Y) {
	//		std::cout << "Valamit mást csinál.";
	//	}
	//}

	//if (instanceof<Mode2>(_state)) {
	//	if (event == EVENT_X) {
	//		std::cout << "Valamit csinál.";
	//	}
	//	else if (event == EVENT_Y) {
	//		std::cout << "Valamit mást csinál.";
	//	}
	//}

	std::cout << event << std::endl;
	_state->Handle();
}

