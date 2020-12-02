#ifndef FailureH
#define FailureH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Failure : public State {
private:
	EmbeddedSystemX* _context;
	static Failure* _instance;
	Failure(EmbeddedSystemX* context);

public:
	static Failure* getInstance(EmbeddedSystemX* context);
	void Handle();
};

#endif
