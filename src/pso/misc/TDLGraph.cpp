#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8007F77C___vt__8TDLGraph {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8007F77C___vt__8TDLGraph __vt__8TDLGraph;
extern s32 TDLGraph__data_805D4EB0;
u8 *__dt__8TDLGraphFv(u8 *arg0, s16 arg1);
}

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
typedef char RecoveredGlobal_8007F77C___vt__8TDLGraph_size[sizeof(RecoveredGlobal_8007F77C___vt__8TDLGraph) == 0x18 ? 1 : -1];
u8 *__dt__8TDLGraphFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TDLGraph.value;
        TDLGraph__data_805D4EB0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
