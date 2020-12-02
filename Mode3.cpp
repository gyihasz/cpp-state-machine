#include "Mode3.h"
#include "Mode1.h"
#include "Event.h"
#include "Suspended.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"

Mode3::Mode3(EmbeddedSystemX* context) : _context(context) {};

Mode3* Mode3::_instance = NULL;

void Mode3::Handle(Event _event) {
	printf("Running in Mode 3...\n");
	switch (_event)
	{
	case EVENT_X: {
		printf("EVENT: Reacting to event X");
		break;
	}
	case EVENT_Y: {
		printf("EVENT: Reacting to event Y");
		break;
	}
	case RESTART: {
		printf("EVENT: RESTARTING SYSTEM!");
		PowerOnSelfTest* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case SUSPEND: {
		printf("EVENT: SUSPENDING THE SYSTEM!");
		Suspended* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case STOP: {
		printf("EVENT: STOPPING THE SYSTEM!");
		Ready* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case CH_MODE: {
		Mode1* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	default: {
		break;
	}
	}
}

Mode3* Mode3::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Mode3(_context);
	}
	return _instance;
}