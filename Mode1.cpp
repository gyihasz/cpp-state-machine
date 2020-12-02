#include "Mode1.h"
#include "Mode2.h"
#include "Event.h"
#include "Suspended.h"
#include "PowerOnSelfTest.h"
#include "Ready.h"

Mode1::Mode1(EmbeddedSystemX* context) : _context(context) {};

Mode1* Mode1::_instance = NULL;

void Mode1::Handle(Event _event) {
	printf("Running in Mode 1...\n");
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
	case STOP: {
		printf("EVENT: STOPPING THE SYSTEM!");
		Ready* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case SUSPEND: {
		printf("EVENT: SUSPENDING THE SYSTEM!");
		Suspended* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case CH_MODE: {
		Mode2* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	default: {
		break;
	}
	}
}

Mode1* Mode1::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Mode1(_context);
	}
	return _instance;
}