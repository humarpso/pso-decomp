#include "types.h"

extern "C" {

int run_task__20TObjLiveMonitorSmallFv(void* p);
int render__20TObjLiveMonitorSmallFv(void* p);
int TObjPlayer__sub_8030B208(void*);
int fn_8030B370(void*);

int render__20TObjLiveMonitorSmallFv(void* p) { return TObjPlayer__sub_8030B208(p); }
int run_task__20TObjLiveMonitorSmallFv(void* p) { return fn_8030B370(p); }

}
