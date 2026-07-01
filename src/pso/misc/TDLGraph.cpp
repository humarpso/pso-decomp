#include "types.h"

extern "C" {

void run_task__8TDLGraphFv(void);
void TDLGraph__sub_8007F6F0(void* p, s32 v);

void run_task__8TDLGraphFv(void) {  }
void TDLGraph__sub_8007F6F0(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
