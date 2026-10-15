#ifndef PSO_MISC_TDLGRAPH_H
#define PSO_MISC_TDLGRAPH_H

#include "types.h"

struct TDLGraph
{
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    void reset();
    void render();
    static void run_task();
    void set_graph_param(s32 v);
    static void update_graph(s32 arg0, s32 arg1);
    static void *create();
};

#endif
