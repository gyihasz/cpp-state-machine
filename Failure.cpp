#include "Failure.h"
#include "PowerOnSelfTest.h"
#include "Event.h"

Failure::Failure(EmbeddedSystemX* context) : _context(context) {};

Failure* Failure::_instance = NULL;

void Failure::Handle(Event _event) {
	printf("Failure...\n");
	switch (_event) {
		case RESTART:
			printf("EVENT: Restart initiated!\n");
			PowerOnSelfTest* m = m->getInstance(_context);
			_context->setState(m);
			break;
	}
}

Failure* Failure::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Failure(_context);
	}
	return _instance;
}