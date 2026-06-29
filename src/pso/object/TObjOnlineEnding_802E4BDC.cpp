#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjOnlineEnding__sub_802E4BDC(void *arg0);
s32 TObjOnlineEnding__sub_8007172C();
s32 TWindowChallengeResult__ct(s32, s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_8006F00C();
s32 fn_8006F094(M2C_UNK);
s32 fn_80070AB0();
s32 fn_80070ACC();
s32 TWindowSubStatusDisp__sub_800718D0();

void TObjOnlineEnding__sub_802E4BDC(void *arg0) {
    s32 temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;
    s32 var_r29;

    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    if (fn_80070AB0() != 0) {
        temp_r30 = fn_8006F094(-1) - 1;
        {
        s32 t = fn_8006F00C();
        if (t == temp_r30) {
            var_r29 = __nw__7TObjectFUl(0x68);
            if (var_r29 != 0) {
                temp_r30_2 = TObjOnlineEnding__sub_8007172C();
                temp_r31 = TWindowSubStatusDisp__sub_800718D0();
                var_r29 = TWindowChallengeResult__ct(var_r29, fn_80070ACC(), temp_r31, temp_r30_2);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = var_r29;
        }
        }
    }
}

}
