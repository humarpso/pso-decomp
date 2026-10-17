#ifndef PSO_MISC_TOHANGERMACHINE01_H
#define PSO_MISC_TOHANGERMACHINE01_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOHangerMachine01 : public TUnk_804AFBF8 {
    virtual ~TOHangerMachine01();
    u32 m_c8;
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void free_static_model();
    static void load_shared_resource();
    static s32 is_valid_slot(int arg0, u16 arg1);
};

typedef char TOHangerMachine01_size[sizeof(TOHangerMachine01) == 0xCC ? 1 : -1];

extern "C" {
u8 *TOHangerMachine01__ct(TOHangerMachine01 *arg0, s32 arg1);
void TOHangerMachine01__sub_80169168(void);
void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1);
}

#endif
