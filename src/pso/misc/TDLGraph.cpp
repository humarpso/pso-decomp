#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__8TDLGraphFPv(void *arg0);
void run_task__8TDLGraphFv(void);
void set_graph_param__8TDLGraphFPvi(void* p, s32 v);
M2C_UNK fn_8007F5A4();

void reset__8TDLGraphFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    fn_8007F5A4();
}

void run_task__8TDLGraphFv(void) {  }
void set_graph_param__8TDLGraphFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
