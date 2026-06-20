#ifndef PSO_TITEMEFFBRINGER_H
#define PSO_TITEMEFFBRINGER_H

#include "types.h"
#include "dolphin/mtx.h"

struct TItemEffBringer {
 const char* m_name;
 u8 _pad04[0x14];
 void* m_vtable;
 Vec m_vec1;
 u8 _pad28[0x04];
 s32 m_2c;
 u8 _pad30[0x08];
 Vec m_pos;
 u8 _pad44[0x14];
 s32 m_particles[10];
 s32 m_count;
 f32 m_84;
 f32 m_88;
 f32 m_8c;
};

#endif
