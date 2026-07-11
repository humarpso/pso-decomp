#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Type3__vt41(void *arg0);
s32 TBoss4Type3__sub_8005254C(u16);
M2C_UNK spawn_random_effect__11TBoss4Type3Fi(void *);
M2C_UNK TBoss4Type3__sub_80059F64(void *, M2C_UNK);
f32 fn_80011014(void *);

extern const f32 lbl_805D8C3C;

void TBoss4Type3__vt41(void *arg0) {
    s32 temp_r0;

    u16 v = M2C_FIELD(arg0, u16 *, 0x3BA);
    if ((v != 0xFFFF) && (TBoss4Type3__sub_8005254C(v) == 0)) {
        M2C_FIELD(arg0, u16 *, 0x3B8) = 0xFFFF;
        M2C_FIELD(arg0, u16 *, 0x3BA) = 0xFFFF;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3BC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3BC);
        if ((temp_r0 >= 5) || ((temp_r0 >= 2) && (fn_80011014(arg0) < lbl_805D8C3C))) {
            TBoss4Type3__sub_80059F64(arg0, 9);
            return;
        }
        spawn_random_effect__11TBoss4Type3Fi(arg0);
    }
}

}
