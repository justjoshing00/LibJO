
#include "Timer.h"
GetTimeFromStart(start_time, current_time)
{
	std::chrono::duration_cast<std::chrono::seconds>(current_time - start_time).count();
}

