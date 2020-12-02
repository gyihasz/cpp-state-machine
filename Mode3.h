#ifndef Mode3H
#define Mode3H
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Mode3 : public State {
private:
	EmbeddedSystemX* _context;
	static Mode3* _instance;
	Mode3(EmbeddedSystemX* context);

public:
	static Mode3* getInstance(EmbeddedSystemX* context);
	void Handle();
};
#endif
