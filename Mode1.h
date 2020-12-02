#ifndef Mode1H
#define Mode1H
#include <iostream>
#include <stdio.h>
#include "State.h"
#include "EmbeddedSystemX.h"
#include "Event.h"

class Mode1: public State {
	private:
		EmbeddedSystemX* _context;
		static Mode1* _instance;
		Mode1(EmbeddedSystemX* context);

	public:
		static Mode1* getInstance(EmbeddedSystemX* context);
		void Handle(Event event);
};
#endif
