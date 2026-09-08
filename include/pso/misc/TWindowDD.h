#ifndef PSO_MISC_TWINDOWDD_H
#define PSO_MISC_TWINDOWDD_H

#include "types.h"

extern "C" {
s32 TWindowDD_check_input_mask(void *input_context, s32 mask);
s32 TWindowDD_is_id_in_range_5AC_5F9(s16 id);
}

struct TWindowDDValueList {
    s16 *values;
    s32 count;
};

extern "C" {
s16 TWindowDD_read_indexed_value(s32 entry_index, s32 value_index);
s16 TWindowDD_read_resolved_value(s32 entry_id, s32 value_index);
}

struct TWindowDD
{
    u16 m_1c;
    u8 _pad1E[0x2];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u8 _pad2C[0x18];
    u32 m_44;
    u8 _pad48[0x1C];
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    u8 _pad74[0x8];
    u32 m_7c;
    u32 m_80;
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    u32 m_bc;
    u32 m_c0;
    s16 m_c4;
    u8 _padC6[0x1A];
    s16 m_e0;
    u8 _padE2[0x1A];
    u16 m_fc;
    u8 _padFE[0x2];
    u32 m_100;
    u32 m_104;
};

#include <stddef.h>
typedef char WindowListSize[sizeof(TWindowDDValueList) == 8 ? 1 : -1];
typedef char WindowListCountOffset[offsetof(TWindowDDValueList, count) == 4 ? 1 : -1];

#endif
