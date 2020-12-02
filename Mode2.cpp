#include "Mode2.h"
#include "Mode3.h"

Mode2::Mode2(EmbeddedSystemX* context): _context(context) {};

Mode2* Mode2::_instance = NULL;

void Mode2::Handle()
{
	printf("Mode2\n");
	Mode3* m = m->getInstance(_context);
	_context->setState(m);
}

Mode2* Mode2::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Mode2(_context);
		printf("New Instance of Mode2 created.\n");
		return _instance;
	} else {
		printf("Old Instance of Mode2 is returned.\n");
		return _instance;
	}
}