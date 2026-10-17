#include "types.h"
#include "pso/unk/TObjEneDellBiter_Eff_TpAbsorb1.h"
#include "pso/system/vector.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_3127e4 { char pad[0x18]; };

struct VObj_18_3127e4 : VBase_18_3127e4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual s32 m12(void *, void *, s32);
};

typedef struct Vec_80302DC0 { f32 x; f32 y; f32 z; } Vec_80302DC0;

typedef struct Arg_80302DC0 { s32 id; f32 val; } Arg_80302DC0;

extern "C" {
void queue_destruction__7TObjectFv(void *arg0);
u32 csnVector(void *, void *, int);
extern u8 lbl_8047511C[];
extern s32 lbl_80475124[];
extern const f32 lbl_805DEFA0;
extern const f32 lbl_805DEFA4;
extern const f32 lbl_805DEFA8;
void fn_80302DC0(u8 *arg0);
#pragma push
#pragma fp_contract on
void fn_80302DC0(u8 *arg0) {
    Vec_80302DC0 a;
    Vec_80302DC0 b;
    Arg_80302DC0 arg;
    f32 step;
    if (((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_cc != NULL) {
        VecCopy((Vec *)&a, (const Vec *)(arg0 + 0x38));
        a.x += lbl_805DEFA0 * *(f32 *)((s8 *)arg0 + 0xB0);
        step = lbl_805DEFA4;
        a.z += lbl_805DEFA0 * *(f32 *)((s8 *)arg0 + 0xB8);
        *(f32 *)((s8 *)arg0 + 0xC0) += lbl_805DEFA0;
        while (*(f32 *)((s8 *)arg0 + 0xC0) > ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_c4) {
            VecCopy((Vec *)&b, (const Vec *)(arg0 + 0x38));
            b.x += ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_c4* *(f32 *)((s8 *)arg0 + 0xB0);
            b.z += ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_c4* *(f32 *)((s8 *)arg0 + 0xB8);
            if (((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_cc != NULL) {
                ((TNowLoading *)(((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_cc))->copy_pos(&b);
            }
            ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_c4 += step;
        }
        ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_c4 -= lbl_805DEFA0;
        *(f32 *)((s8 *)arg0 + 0xC0) -= lbl_805DEFA0;
        if (csnVector(arg0 + 0x38, &a, 0x1EFF) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        VecCopy((Vec *)(arg0 + 0x38), (const Vec *)&a);
        *(f32 *)((s8 *)(*(u8 * *)&((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_a4) + 0x10) = lbl_805DEFA8;
        *(f32 *)((s8 *)(*(u8 * *)&((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_a4) + 0xC) = lbl_805DEFA8;
        ((TObjPlayer *)arg0)->update_enemy_collision_flags();
        if (*(s32 *)((s8 *)(*(u8 * *)&((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_a4) + 0x18) & 0x200000) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        arg.id = lbl_80475124[0];
        arg.val = *(f32 *)((s8 *)arg0 + 0xC8);
        ((VObj_18_3127e4 *)(arg0))->m12(lbl_8047511C, &arg, ((TObjEneDellBiter_Eff_TpAbsorb1 *)arg0)->m_bc);
        return;
    }
    queue_destruction__7TObjectFv(arg0);
}
#pragma pop

}
