#include "Mode3.h"
#include "Mode1.h"

Mode3::Mode3(EmbeddedSystemX* context): _context(context) {};

Mode3* Mode3::_instance = NULL;

void Mode3::Handle()
{
	printf("Mode3\n");
	Mode1* m = m->getInstance(_context);
	_context->setState(m);
}

Mode3* Mode3::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Mode3(_context);
		printf("New Instance of Mode3 created.\n");
		return _instance;
	}
	else {
		printf("Old Instance of Mode3 is returned.\n");
		return _instance;
	}
}