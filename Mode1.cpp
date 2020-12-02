#pragma hdrstop

#include "Mode1.h"
#include "Mode2.h"

Mode1::Mode1(EmbeddedSystemX* context): _context(context) {};

void Mode1::Handle() {
	printf("Mode1\n");
	Mode2* m = m->getInstance(_context);
	_context->setState(m);
}
