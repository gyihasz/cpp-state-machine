#include "Initializing.h"
#include "Ready.h"
#include "Event.h"

Initializing::Initializing(EmbeddedSystemX* context) : _context(context) {};

Initializing* Initializing::_instance = NULL;

void Initializing::Handle(Event _event) {
	printf("Initializing...\n");
	switch (_event) {
	case INITIALIZED: {
		printf("EVENT: Initialized Successfully!\n");
		Ready* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	}
}

Initializing* Initializing::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Initializing(_context);
	}
	return _instance;
}