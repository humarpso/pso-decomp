#ifndef PSO_MISC_TWINDOWHELPITEM_H
#define PSO_MISC_TWINDOWHELPITEM_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowHelpItem
{
    u32 m_00;
    u8 _pad04[0x14];
    void *m_vtable18;
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x8];
    void* m_30;
    u8 _pad34[0x2C];
    u8 m_60;
    u8 _pad61[0x3];
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    u8 _pad74[0x28];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    f32 m_a8;
    f32 m_ac;
    struct CallbackWords { u32 words[3]; } m_callback;

    static void *operator new(unsigned long size) { return TObject::operator new(size); }
    TWindowHelpItem(void *position, u16 index);
};

typedef char TWindowHelpItem_size_check[sizeof(TWindowHelpItem) == 0xBC ? 1 : -1];
#endif
