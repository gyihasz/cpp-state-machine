#ifndef ReadyH
#define ReadyH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Ready : public State {
private:
	EmbeddedSystemX* _context;
	static Ready* _instance;
	Ready(EmbeddedSystemX* context);

public:
	static Ready* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};

#endif
