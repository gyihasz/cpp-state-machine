#ifndef PowerOnSelfTestH
#define PowerOnSelfTestH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class PowerOnSelfTest : public State {
private:
	EmbeddedSystemX* _context;
	static PowerOnSelfTest* _instance;
	PowerOnSelfTest(EmbeddedSystemX* context);

public:
	static PowerOnSelfTest* getInstance(EmbeddedSystemX* context);
	void Handle(Event _event);
};

#endif
