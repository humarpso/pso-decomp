#ifndef PSO_MISC_TBREAKUPMDL_H
#define PSO_MISC_TBREAKUPMDL_H

#include "types.h"

struct TBreakUpMdl
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u32 m_38;
    void render();
    void run_task();
    void init_alpha(s32 arg1, f32 farg0);
    s32 collect_node_positions(u8 *arg1, s32 arg2);
    s32 build_node_records(u8 *arg1, s32 arg2);
    void copy(void* q);
};

#endif
