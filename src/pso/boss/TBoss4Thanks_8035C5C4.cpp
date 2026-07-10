#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_out__12TBoss4ThanksFPv(void *arg0);
M2C_UNK TBoss4Thanks__sub_8035C35C(void *);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80479B88;
extern const f32 lbl_805E0188;
extern const f32 lbl_805E018C;
extern const f32 lbl_805E0190;

void update_fade_out__12TBoss4ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) {
            fn_8022675C(0x40033231, 0, 0, 0);
        }
        TBoss4Thanks__sub_8035C35C(arg0);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (lbl_805E0188 * (lbl_805E018C - ((f32) M2C_FIELD(arg0, s32 *, 0x30) / lbl_805E0190)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_r3 == 0x78) {
            fn_8022675C(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r3 + 1);
    }
}

}
