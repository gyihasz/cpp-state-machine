#include "PowerOnSelfTest.h"
#include "Failure.h"
#include "Initializing.h"

PowerOnSelfTest::PowerOnSelfTest(EmbeddedSystemX* context) : _context(context) {};

PowerOnSelfTest* PowerOnSelfTest::_instance = NULL;

void PowerOnSelfTest::Handle(Event _event) {
	printf("Self-testing...\n");
	switch (_event) {
	case SELF_TEST_FAILED: {
		printf("EVENT: Self test failed.\n\n");
		Failure* f = f->getInstance(_context);
		_context->setState(f);
		break;
	}
	case SELF_TEST_OK: {
		printf("EVENT: Self test OK.\n\n");
		Initializing* i = i->getInstance(_context);
		_context->setState(i);
		break;
	}
	default: {
		break;
	}
	}
}

PowerOnSelfTest* PowerOnSelfTest::getInstance(EmbeddedSystemX* _context) {
	if (_instance == NULL) {
		_instance = new PowerOnSelfTest(_context);
	}
	return _instance;
}