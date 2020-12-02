#ifndef InitializingH
#define InitializingH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Initializing : public State {
private:
	EmbeddedSystemX* _context;
	static Initializing* _instance;
	Initializing(EmbeddedSystemX* context);

public:
	static Initializing* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};

#endif
