#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TDLGraph__ct(void *arg0);
void reset__8TDLGraphFPv(void *);
void __ct__7TObjectFP7TObject(void *);
void init_dl_graph_entries(void *);

extern const f32 lbl_805D9298;
extern M2C_UNK __vt__8TDLGraph[];
extern void *lbl_805D28D0;
extern void * TDLGraph__graph_object;

void *TDLGraph__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TDLGraph;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D28D0;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D9298;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = -1;
    M2C_FIELD(arg0, u32 *, 0x2C) = -1;
    M2C_FIELD(arg0, u32 *, 0x30) = -1;
    reset__8TDLGraphFPv(arg0);
    init_dl_graph_entries(arg0);
    M2C_FIELD(arg0, u32 *, 0x20) = 3;
    TDLGraph__graph_object = arg0;
    return arg0;
}

}
