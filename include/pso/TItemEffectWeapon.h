#ifndef PSO_TITEMEFFECTWEAPON_H
#define PSO_TITEMEFFECTWEAPON_H

#include "types.h"

struct TItemEffectWeapon {
 const char* m_name;
 u8 _pad04[0x14];
 void* m_vtable;
 u8* m_pool;
 s32 m_count2;
 s32 m_param;
 s32 m_28;
};

#endif
