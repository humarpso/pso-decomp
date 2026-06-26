#include "types.h"

extern "C" {

int fn_80225A08(void*);
int fn_80225B90(void*);
void fn_802257EC(void* p);

void fn_802257EC(void* p) { if (fn_80225B90(p) == 0) { fn_80225A08(p); } }

}
