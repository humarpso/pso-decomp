#ifndef PSO_ITEM_TITEM_H
#define PSO_ITEM_TITEM_H

#include "types.h"
#include <stddef.h>

struct TItem
{
    void render_ground();
    void render_owned();
    void render_following_owner();
    u8 object_header[0x1C];
    u8 _pad1C[0x7C];
    void* m_98;
    u8 _pad9C[0x10];
    void* m_ac;
    u8 _padB0[0x28];
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u16 m_e4;
    u16 m_e6;
    u16 m_e8;
    u8 m_ea;
    u8 render_mode;
    u8 m_ec;
    u8 m_ed;
    u8 m_ee;
    u8 model_index;
    u32 m_f0;
    u32 m_f4;
};

typedef char TItemModeOffset[(offsetof(TItem, render_mode) == 0xEB) ? 1 : -1];
typedef char TItemModelOffset[(offsetof(TItem, model_index) == 0xEF) ? 1 : -1];
typedef char TItemIdOffset[(offsetof(TItem, m_d8) == 0xD8) ? 1 : -1];
typedef char TItemSize[(sizeof(TItem) == 0xF8) ? 1 : -1];

#endif
