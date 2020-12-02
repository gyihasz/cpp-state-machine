#ifndef StateH
#define StateH
#include "Event.h"

class State
{
   public:
	 virtual void Handle(Event _event) = 0;
};
#endif
