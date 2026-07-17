#include "types.h"

extern "C" {

void run_task__8TDLGraphFv(void);
void set_graph_param__8TDLGraphFPvi(void* p, s32 v);

void run_task__8TDLGraphFv(void) {  }
void set_graph_param__8TDLGraphFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
