#include "types.h"

extern "C" {

void *TDLGraph__ct(void *arg0);
void reset__8TDLGraphFv(void *);
void __ct__7TObjectFP7TObject(void *);
void init_dl_graph_entries(void *);

extern const f32 lbl_805D9298;
extern s32 __vt__8TDLGraph[];
extern void *TDLGraph__class_name;
extern void * TDLGraph__graph_object;

void *TDLGraph__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TDLGraph;
    *(void **)((s8 *)arg0 + 0x0) = TDLGraph__class_name;
    *(f32 *)((s8 *)arg0 + 0x1C) = lbl_805D9298;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = -1;
    *(u32 *)((s8 *)arg0 + 0x2C) = -1;
    *(u32 *)((s8 *)arg0 + 0x30) = -1;
    reset__8TDLGraphFv(arg0);
    init_dl_graph_entries(arg0);
    *(u32 *)((s8 *)arg0 + 0x20) = 3;
    TDLGraph__graph_object = arg0;
    return arg0;
}

}
