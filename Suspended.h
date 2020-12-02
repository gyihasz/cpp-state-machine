#ifndef SuspendedH
#define SuspendedH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Suspended : public State {
private:
	EmbeddedSystemX* _context;
	static Suspended* _instance;
	Suspended(EmbeddedSystemX* context);

public:
	static Suspended* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};

#endif
