#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0);
s32 TCameraCtrl__sub_8006B360(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
M2C_UNK TObjFish__sub_803DA798(int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();

extern M2C_UNK main_task[];
extern const f32 TObjEneEpsilonGuard__data_805E01D8;
extern const f32 TObjEneEpsilonGuard__data_805E01DC;

void render_guard_effect__19TObjEneEpsilonGuardFPv(u8 *arg0) {
    f32 temp_f1;

    if ((M2C_FIELD(arg0, s32 *, 0x46C) & 0x20) && (TCameraCtrl__sub_8006B360((void *) (main_task)) & 0x200)) {
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9624((int) (0), (f32) (TObjEneEpsilonGuard__data_805E01D8), (f32) (TObjEneEpsilonGuard__data_805E01DC), (f32) (TObjEneEpsilonGuard__data_805E01D8));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x458);
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
        TObjPlayer__sub_803E4BC4();
        TObjEneSlimeOne__sub_803E4AF4((int) (M2C_FIELD(arg0, s32 *, 0x444)), (int) (M2C_FIELD(arg0, s32 *, 0x448)), (f32) (M2C_FIELD(arg0, f32 *, 0x454)));
        TObjPlayer__sub_803E4BD0();
        TObjPlayer__sub_803D9B78();
    }
}

}
