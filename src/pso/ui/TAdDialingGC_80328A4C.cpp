#include "types.h"

extern "C" {

int refresh_display__12TAdDialingGCFv(void);
int update_dialing_display__12TAdDialingGCFv(void*);

int refresh_display__12TAdDialingGCFv(void) { return update_dialing_display__12TAdDialingGCFv((void*)(8)); }

}
