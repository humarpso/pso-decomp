#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_551843 { char pad[0x18]; };

struct VObj_18_551843 : VBase_18_551843 {
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
    virtual void m12();
    virtual s32 m13();
    virtual u8 * m14();
};

extern "C" {
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void TObjQuestColBase__sub_80196CC8(u8 *arg0);
}

extern "C" {

void TObjQuestColBase__sub_80196CC4(void);
s32 is_within_range__16TObjQuestColBaseFif(s32 arg0, f32 farg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
f32 fn_801315A0(s32, s32);

extern s32 lbl_805D53A0;

s32 is_within_range__16TObjQuestColBaseFif(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0U) && (fn_801315A0(temp_r3 + 0x38, arg0 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

void TObjQuestColBase__sub_80196CC4(void) {  }
void TObjQuestColBase__sub_80196CC8(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xB8));
    if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) == 0)) {
        M2C_FIELD(arg0, u8 **, 0xB8) = NULL;
    }
    if (((void *) M2C_FIELD(arg0, u8 **, 0xB8) == NULL) && (((VObj_18_551843 *)(arg0))->m13() != 0)) {
        M2C_FIELD(arg0, u8 **, 0xB8) = ((VObj_18_551843 *)(arg0))->m14();
    }
}

}
