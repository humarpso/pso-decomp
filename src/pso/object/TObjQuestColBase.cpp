#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjQuestColBase__vt13(void);
int TObjQuestColBase__vt14(void);

int TObjQuestColBase__vt14(void) { return 0; }
int TObjQuestColBase__vt13(void) { return 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80196BFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80196CC4
#include "types.h"

extern "C" {

void TObjQuestColBase__sub_80196CC4(void);

void TObjQuestColBase__sub_80196CC4(void) {  }

}
#endif
#endif
