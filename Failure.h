#ifndef FailureH
#define FailureH
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"

class Failure : public State {
private:
	EmbeddedSystemX* _context;

public:
	Failure(EmbeddedSystemX* context);
	void Handle();
};

#endif
