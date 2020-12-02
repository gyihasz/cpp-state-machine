#include "Mode1.h"
#include "Mode2.h"

Mode1::Mode1(EmbeddedSystemX* context): _context(context) {};

Mode1* Mode1::_instance = NULL;

void Mode1::Handle()
{
	printf("Mode1\n");
	Mode2* m = m->getInstance(_context);
	_context->setState(m);
}

Mode1* Mode1::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Mode1(_context);
		printf("New Instance of Mode1 created.\n");
		return _instance;
	} else {
		printf("Old Instance of Mode1 is returned.\n");
		return _instance;
	}
}