#ifndef PSO_ITEM_TITEMMAG_H
#define PSO_ITEM_TITEMMAG_H

#include "types.h"
#include "pso/item/TItemMagSub.h"
#include <stddef.h>

struct TItemMag
{
    void serialize_to_item(void *item);

    u8 _pad0[0x1C];
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC8];
    MagDrawOwner *m_f0;
    void *m_f4;
    u8 _padF8[0x80];
    void* m_178;
    void *m_17c;
    u8 _pad180[0x8];
    void *m_188;
    u32 m_18c;
    u8 _pad190[0x8];
    void* m_198;
    u8 _pad19C[0x8];
    u8 m_1a4;
    u8 _pad1A5[0x3];
    TItemMagSub *children[2];
    s8 *model_entries[2];
    u32 m_1b8;
    u8 _pad1BC[0x10];
    u32 m_1cc;
    u8 _pad1D0[0x4];
    u16 m_1d4;
    s16 m_1d6;
    u8 _pad1D8[0x4];
    u16 m_1dc;
    u16 m_1de;
};

typedef char MagOffset_m_24[offsetof(TItemMag, m_24) == 0x24 ? 1 : -1];
typedef char MagOffset_m_f0[offsetof(TItemMag, m_f0) == 0xF0 ? 1 : -1];
typedef char MagOffset_m_f4[offsetof(TItemMag, m_f4) == 0xF4 ? 1 : -1];
typedef char MagOffset_m_17c[offsetof(TItemMag, m_17c) == 0x17C ? 1 : -1];
typedef char MagOffset_m_188[offsetof(TItemMag, m_188) == 0x188 ? 1 : -1];
typedef char MagOffset_m_18c[offsetof(TItemMag, m_18c) == 0x18C ? 1 : -1];
typedef char MagOffset_m_198[offsetof(TItemMag, m_198) == 0x198 ? 1 : -1];
typedef char MagOffset_children[offsetof(TItemMag, children) == 0x1A8 ? 1 : -1];
typedef char MagOffset_model_entries[offsetof(TItemMag, model_entries) == 0x1B0 ? 1 : -1];
typedef char MagSize[sizeof(TItemMag) == 0x1E0 ? 1 : -1];
#endif
