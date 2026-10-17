#ifndef PSO_MISC_TOCAPSULEMACHINE01_H
#define PSO_MISC_TOCAPSULEMACHINE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOCapsuleMachine01 : public TUnk_804AFBF8 {
    virtual ~TOCapsuleMachine01();
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void reset_static_state();
    static void alloc_and_load_resource();
};

typedef char TOCapsuleMachine01_size[sizeof(TOCapsuleMachine01) == 0xC8 ? 1 : -1];

extern "C" {
u8 *TOCapsuleMachine01__ct(u8 *arg0, s32 arg1);
void *__dt__18TOCapsuleMachine01Fv(void *arg0, s16 arg1);
}

#endif
