#include "Ready.h"
#include "Event.h"
#include "Mode1.h"
#include "Configure.h"
#include "PowerOnSelfTest.h"

Configure::Configure(EmbeddedSystemX* context) : _context(context) {};

Configure* Configure::_instance = NULL;

void Configure::Handle(Event _event) {
	printf("Configuring...\n");
	switch (_event) {
	case CONFIGURATION_ENDED: {
		printf("EVENT: Configuration ended!\n");
		Ready* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case RESTART: {
		printf("EVENT: RESTARTING SYSTEM!");
		PowerOnSelfTest* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	default: {
		break;
	}
	}
}

Configure* Configure::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Configure(_context);
	}
	return _instance;
}