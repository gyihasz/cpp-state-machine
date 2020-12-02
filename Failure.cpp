#include "Failure.h"
#include "Mode2.h"

Failure::Failure(EmbeddedSystemX* context) : _context(context) {};

Failure* Failure::_instance = NULL;

void Failure::Handle()
{
	printf("Failure\n");
	Mode2* m = m->getInstance(_context);
	_context->setState(m);
}

Failure* Failure::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Failure(_context);
		printf("New Instance of Failure created.\n");
		return _instance;
	}
	else {
		printf("Old Instance of Failure is returned.\n");
		return _instance;
	}
}