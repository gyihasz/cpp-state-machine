#ifndef ConfigureH
#define ConfigureH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Configure : public State {
private:
	EmbeddedSystemX* _context;
	static Configure* _instance;
	Configure(EmbeddedSystemX* context);

public:
	static Configure* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};

#endif
