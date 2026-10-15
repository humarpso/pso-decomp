#include "types.h"
#include "pso/ui/TAdDialingGC.h"

extern "C" {

int update_dialing_display__12TAdDialingGCFi(void*);

int TAdDialingGC::refresh_display() { return update_dialing_display__12TAdDialingGCFi((void*)(8)); }

}
