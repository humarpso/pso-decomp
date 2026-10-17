#ifndef PSO_OBJECT_TOBJDFHORMING_H
#define PSO_OBJECT_TOBJDFHORMING_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TObjDFHorming : public TUnk_804806E8 {
    virtual ~TObjDFHorming();
    void sub_8005076C();
    void check_attack_trigger();
    virtual void run_task();
    u16 m_334;
    u8 _pad336[0x2];
    u32 m_338;
    void* m_33c;
    u8 _pad340[0x8];
    void* m_348;
    u8 _pad34C[0x14];
    u32 m_360;
    u8 _pad364[0x4];
    u32 m_368;
    void* m_36c;
    u8 unk_370[0x8];
    void * m_378;
    u8 unk_37C[0x4];
    static u8 is_boss_active();
};

typedef char TObjDFHorming_size[sizeof(TObjDFHorming) == 0x380 ? 1 : -1];

struct TBoss4DarkFalz;
extern "C" {
s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2);
int TBoss4DarkFalz__sub_8004B07C(void);
void TBoss4DarkFalz__sub_8004B4F0(void *arg0p, void *arg1p);
void TBoss4DarkFalz__sub_8004B5A0(void);
void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0);
void TBoss4DarkFalz__sub_8004B7DC(TBoss4DarkFalz *arg0);
void TBoss4DarkFalz__sub_8004B8F8(TBoss4DarkFalz *arg0);
}

#endif
