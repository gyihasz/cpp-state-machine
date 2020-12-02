#pragma hdrstop   

#include "Mode3.h"
#include "Mode1.h"

Mode3::Mode3(EmbeddedSystemX* context): _context(context) {};

void Mode3::Handle()
{
	printf("Mode3\n");
	_context->setState( new Mode1(_context) );
}
#pragma package(smart_init)
