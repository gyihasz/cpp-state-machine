#ifndef Mode2H
#define Mode2H
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"
#include "Event.h"

class Mode2 : public State {
private:
	EmbeddedSystemX* _context;
	static Mode2* _instance;
	Mode2(EmbeddedSystemX* context);

public:
	static Mode2* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};
#endif
