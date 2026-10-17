#ifndef PSO_MISC_TOCAPSULEANCIENT01_H
#define PSO_MISC_TOCAPSULEANCIENT01_H

#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"

struct TOCapsuleAncient01 : public TUnk_804B27D8 {
    virtual ~TOCapsuleAncient01();
    virtual void vfunc_15();
    u32 m_e4;
    virtual void render();
    static void *create(void *arg0);
    static void destroy_static_instance();
    static void load_resource_instance();
};

typedef char TOCapsuleAncient01_size[sizeof(TOCapsuleAncient01) == 0xE8 ? 1 : -1];

extern "C" {
u8 *TOCapsuleAncient01__ct(u8 *arg0, s32 arg1, s32 arg2);
void *__dt__18TOCapsuleAncient01Fv(void *arg0, s16 arg1);
}

#endif
