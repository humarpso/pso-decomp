#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8004FCC4_lbl_80437448 { M2C_UNK value; u8 remaining[0x8]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss4Type2__sub_8004F904(void *);
void TLobby__sub_8022727C(s32);
void queue_event_1D__12TBoss3VoloptFss(s16, s16);
extern RecoveredGlobal_8004FCC4_lbl_80437448 lbl_80437448;
extern const f32 lbl_805D8A14;
extern const f32 lbl_805D8A18;
void fn_8004FCC4(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void fn_8004FCC4(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    TBoss4Type2__sub_8004F904(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE4) == 0x8C) {
        TLobby__sub_8022727C((s32) &lbl_80437448.value);
        queue_event_1D__12TBoss3VoloptFss(0xC0, 0xF);
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xE8) + lbl_805D8A14;
    M2C_FIELD(arg0, f32 *, 0xE8) = temp_f1;
    if (temp_f1 > lbl_805D8A18) {
        M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805D8A18;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE4) + 1;
    M2C_FIELD(arg0, s32 *, 0xE4) = temp_r0;
    if (temp_r0 >= 0x12C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

}
