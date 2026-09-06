#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowKeyBoardBase__sub_8008102C(void *, u32, u32);
s32 *TWindowKeyBoardBase__sub_8008116C(s32 *arg0);
s32 is_split_screen(void);
u8 * TEF_LensFlare__ct(void *, M2C_UNK, s32);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TEF_LensFlare__create(s32 arg0);
}

extern "C" {

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1);
int is_player_near__13TEF_LensFlareFif(s32 arg0, f32 farg0);
f32 TObjPlayer__sub_80141CF8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK __dl__FPv(u32 *);
M2C_UNK free__11TOBoss4RockFUi(u32);

u32 *destroy__19TWindowKeyBoardBaseFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D53A0;

s32 *TWindowKeyBoardBase__sub_8008116C(s32 *arg0) {
    *arg0 = 0;
    TWindowKeyBoardBase__sub_8008102C(arg0, 0U, 0U);
    return arg0;
}

int is_player_near__13TEF_LensFlareFif(s32 arg0, f32 farg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 == 0U) {
        return 0;
    }
    return (u32) __cntlzw(TObjPlayer__sub_80141CF8(temp_r3 + 0x38, arg0 + 0x38) < farg0) >> 5;
}
u8 *TEF_LensFlare__create(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x94));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TEF_LensFlare__ct(temp_r3, tl_05, arg0));
    }
    return var_r0;
}

}
