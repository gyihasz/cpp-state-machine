#include "Ready.h"
#include "Event.h"
#include "Mode1.h"
#include "Configure.h"
#include "PowerOnSelfTest.h"

Ready::Ready(EmbeddedSystemX* context) : _context(context) {};

Ready* Ready::_instance = NULL;

void Ready::Handle(Event _event) {
	printf("Ready!\n");
	switch (_event) {
	case START_RUN: {
		printf("EVENT: Start / Run !\n");
		Mode1* m = m->getInstance(_context);
		_context->setState(m);
		break;
	}
	case CONFIGURE: {
		printf("EVENT: Configuration initiated!\n");
		Configure* m = m->getInstance(_context);
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

Ready* Ready::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new Ready(_context);
	}
	return _instance;
}