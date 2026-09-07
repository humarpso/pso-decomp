#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80198960_lbl_804B8DAC {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80198960_lbl_8050DD58 {
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
M2C_UNK TObjFish__sub_8001EDC4(void *, int);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjFish__sub_803E46BC();
extern RecoveredGlobal_80198960_lbl_804B8DAC lbl_804B8DAC;
extern RecoveredGlobal_80198960_lbl_8050DD58 lbl_8050DD58;
extern u32 lbl_805D5C60;
extern const f32 lbl_805DBF44;
void fn_80198960(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80198960_lbl_804B8DAC_size[sizeof(RecoveredGlobal_80198960_lbl_804B8DAC) == 0x24 ? 1 : -1];
typedef char RecoveredGlobal_80198960_lbl_8050DD58_size[sizeof(RecoveredGlobal_80198960_lbl_8050DD58) == 0x54 ? 1 : -1];
void fn_80198960(u8 *arg0) {
    if ((((u32) lbl_805D5C60 != 0U) || ((u32) M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x10) != 0U)) && ((u16) M2C_FIELD(&lbl_8050DD58.value, u16 *, 0x48) != 6)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50) == 1) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x10)));
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lbl_804B8DAC.value, u32 *, 0x14)));
        }
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x1C));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44), (f32) (lbl_805DBF44));
        TObjFish__sub_8001EDC4((void *) (lbl_805D5C60), (int) (4));
        TObjFish__sub_803E46BC();
        TObjPlayer__sub_803D9B78();
    }
}

}
