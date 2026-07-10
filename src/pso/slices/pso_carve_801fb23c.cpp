#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int obj_getField1c(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_801FBA48(u16);
extern s32 lbl_805D53A0;
extern s32 lbl_805DC56C;

void update_target__13TRaderMapCoreFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x184) = temp_r3;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U) {
        if (fn_801FBA48(obj_getField1c((void*)M2C_FIELD(arg0, u32 *, 0x184))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) | lbl_805DC56C);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) & 0xFFFFFFFE);
    }
}

}
