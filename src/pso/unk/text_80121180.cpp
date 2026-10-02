#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80121198_lbl_804C43CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80121198_lbl_804C43D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80121180_lbl_804C43C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s16 TObjPlayer__sub_801D2EA8();
extern RecoveredGlobal_80121198_lbl_804C43CC lbl_804C43CC;
extern RecoveredGlobal_80121198_lbl_804C43D8 lbl_804C43D8;
f32 get_attack_accuracy_scale(s16 *arg0);
extern RecoveredGlobal_80121180_lbl_804C43C0 lbl_804C43C0;
f32 get_attack_damage_scale(s16 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80121198_lbl_804C43CC_size[sizeof(RecoveredGlobal_80121198_lbl_804C43CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80121198_lbl_804C43D8_size[sizeof(RecoveredGlobal_80121198_lbl_804C43D8) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_80121180_lbl_804C43C0_size[sizeof(RecoveredGlobal_80121180_lbl_804C43C0) == 0xC ? 1 : -1];
f32 get_attack_damage_scale(s16 *arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804C43C0.value) + (M2C_FIELD(arg0, s16 *, 0) * 4)), f32 *, 0);
}

f32 get_attack_accuracy_scale(s16 *arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804C43CC.value) + (M2C_FIELD(arg0, s16 *, 0) * 4)), f32 *, 0) * M2C_FIELD(((u8 *)(&lbl_804C43D8.value) + (TObjPlayer__sub_801D2EA8() * 4)), f32 *, 0);
}

}
