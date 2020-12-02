#ifndef EmbeddedSystemXH
#define EmbeddedSystemXH
#include "State.h"
#include "Event.h"

class EmbeddedSystemX
{
private:
	//This is the global state of the system
	State* _state;
public:
	EmbeddedSystemX();
	void setState(State* state);
	void Handle(Event event);
};
#endif
