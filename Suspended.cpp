#include "Ready.h"
#include "Mode1.h"
#include "Event.h"
#include "Suspended.h"
#include "PowerOnSelfTest.h"

Suspended::Suspended(EmbeddedSystemX* context) : _context(context) {};

Suspended* Suspended::_instance = NULL;

void Suspended::Handle(Event _event) {
	printf("Suspended...!\n");
	switch (_event)
	{
	case RESTART: {
		printf("EVENT: RESTARTING SYSTEM!");
		PowerOnSelfTest* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case STOP: {
		printf("EVENT: STOP!\n");
		Ready* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case RESUME: {
		printf("EVENT: RESUME!");
		Mode1* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	default:
		break;
	}
}

Suspended* Suspended::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Suspended(_context);
	}
	return _instance;
}