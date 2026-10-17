#ifndef PSO_MISC_TOMONUMENTANCIENT02_H
#define PSO_MISC_TOMONUMENTANCIENT02_H

#include "types.h"
#include "pso/misc/TUnk_804AFBF8.h"

struct TOMonumentAncient02 : public TUnk_804AFBF8 {
    virtual ~TOMonumentAncient02();
    virtual void vfunc_6(s16 *, s32);
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    void* m_d8;
    u8 unk_DC[0x4];
    f32 m_e0;
    u8 unk_E4[0x4];
    u32 m_e8;
    u32 m_ec;
    virtual void run_task();
    virtual void render();
    static void *create(void *arg0);
    static void free_shared_data();
    static void load_resources();
};

typedef char TOMonumentAncient02_size[sizeof(TOMonumentAncient02) == 0xF0 ? 1 : -1];

extern "C" {
u8 *TOMonumentAncient02__ct(TOMonumentAncient02 *arg0, s32 arg1, s32 arg2);
void *__dt__19TOMonumentAncient02Fv(void *arg0, s16 arg1);
}

#endif
