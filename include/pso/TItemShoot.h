#ifndef PSO_TITEMSHOOT_H
#define PSO_TITEMSHOOT_H

#include "types.h"
#include "dolphin/mtx.h"

struct TItemShoot {
    void step();
    ~TItemShoot();

 const char* m_name;
 u8 _pad04[0x14];
 void* m_vtable;
 Vec m_pos;
 u8 _pad28[0x04];
 s32 m_count;
 u8 _pad30[0x04];
 f32 m_life;
 Vec m_dir;
 Vec m_44;
 void* m_50;
 void* m_54;
};

#endif
