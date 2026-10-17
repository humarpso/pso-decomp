#ifndef PSO_MISC_TOCAPSULELABO_H
#define PSO_MISC_TOCAPSULELABO_H

#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"

struct TOCapsuleLabo : public TUnk_804B27D8 {
    virtual ~TOCapsuleLabo();
    virtual void vfunc_15();
    u32 m_e4;
    static void unload_static_data();
    static void load_resources();
    virtual void render();
};

typedef char TOCapsuleLabo_size[sizeof(TOCapsuleLabo) == 0xE8 ? 1 : -1];

extern "C" {
u8 *TOCapsuleLabo__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__13TOCapsuleLaboFv(void *arg0, s16 arg1);
}

#endif
