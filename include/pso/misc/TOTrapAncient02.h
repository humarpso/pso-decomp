#ifndef PSO_MISC_TOTRAPANCIENT02_H
#define PSO_MISC_TOTRAPANCIENT02_H

#include "types.h"

struct TOTrapAncient02
{
    u8 _base[0x1C];
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    f32 position[3];
    u8 _pad44[0x20];
    u32 m_64;
    u8 _pad68[0x1C];
    u32 m_84;
    u8 _pad88[0x220];
    void *target;
    u8 _pad2AC[0x7A];
    s16 mode;
    s16 state;
    u8 _pad32A[0xA];
    f32 range;
    f32 dist;
    u16 player;
    u8 _pad33E[0x6];
    f32 h344;
    f32 h348;
    u32 m_34c;
    s32 reset;
    s32 timer;
    u32 m_358;

    void update_hold_trigger();
};

typedef char TOTrapAncient02_size_check[(sizeof(TOTrapAncient02) == 0x35C) ? 1 : -1];

#endif
