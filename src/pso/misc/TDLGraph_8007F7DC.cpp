#include "types.h"
#include "pso/misc/TDLGraph_8007F7DC.h"
#include "pso/misc/TDLGraph.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern const f32 lbl_805D9298;
extern s32 __vt__8TDLGraph[];
extern void *TDLGraph__class_name;
extern void * TDLGraph__graph_object;

void *TDLGraph__ct(TDLGraph *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TDLGraph;
    *(void * *)&arg0->m_name = TDLGraph__class_name;
    *(f32 *)((s8 *)arg0 + 0x1C) = lbl_805D9298;
    arg0->m_24 = 0;
    arg0->m_28 = -1;
    arg0->m_2c = -1;
    arg0->m_30 = -1;
    arg0->sub_8007F644();
    arg0->init_dl_graph_entries();
    arg0->m_20 = 3;
    TDLGraph__graph_object = arg0;
    return arg0;
}

}
