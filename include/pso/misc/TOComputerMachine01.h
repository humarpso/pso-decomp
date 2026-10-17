#ifndef PSO_MISC_TOCOMPUTERMACHINE01_H
#define PSO_MISC_TOCOMPUTERMACHINE01_H

#include "types.h"
#include "pso/misc/TUnk_804B27D8.h"

struct TOComputerMachine01 : public TUnk_804B27D8 {
    virtual ~TOComputerMachine01();
    virtual void render();
    static void *create(void *arg0);
    static void reset_state();
    static void load_model_resource();
    u8 unk_E4[0x4];
};

typedef char TOComputerMachine01_size[sizeof(TOComputerMachine01) == 0xE8 ? 1 : -1];
extern "C" {
u8 *TOComputerMachine01__ct(u8 *arg0, s32 arg1);
void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1);
}

#endif
