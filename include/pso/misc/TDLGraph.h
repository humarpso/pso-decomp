#ifndef PSO_MISC_TDLGRAPH_H
#define PSO_MISC_TDLGRAPH_H

#include "types.h"
#include "pso/TObject.h"

struct TDLGraph : public TObject {
    virtual ~TDLGraph();
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    void reset();
    virtual void render();
    virtual void run_task();
    void set_graph_param(s32 v);
    static void update_graph(s32 arg0, s32 arg1);
    static void *create();
    u8 unk_34[0x8];
    s32 m_3c;
    u8 unk_40[0x24];
};

typedef char TDLGraph_size[sizeof(TDLGraph) == 0x64 ? 1 : -1];
#endif
