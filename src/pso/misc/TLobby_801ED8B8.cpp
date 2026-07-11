#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801ED8B8(void);
u32 fn_8006F094(M2C_UNK);
M2C_UNK fn_80071500(u32);
M2C_UNK fn_80292950(u32);

s32 is_split_screen();
extern u32 lbl_80512220[];

void TLobby__sub_801ED8B8(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = lbl_80512220[0];
    temp_r31 = fn_8006F094(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            fn_80292950(temp_r30);
            return;
        }
        fn_80292950(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        fn_80071500(temp_r30);
        return;
    }
    fn_80071500(0U);
}

}
