#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800C913C_lbl_80500E68 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_800C913C_lbl_80500E68 lbl_80500E68;
extern s32 TObjEneMe1Gee__data_805D51B8;
extern s32 lbl_805D51BC;
void TObjEneMe1Gee__sub_800C913C(void);
}

extern "C" {

typedef char RecoveredGlobal_800C913C_lbl_80500E68_size[sizeof(RecoveredGlobal_800C913C_lbl_80500E68) == 0x10 ? 1 : -1];
void TObjEneMe1Gee__sub_800C913C(void) {
    s32 temp_r4;
    s32 temp_r4_2;
    switch ((s32) TObjEneMe1Gee__data_805D51B8) {
    case 4:
        temp_r4 = lbl_805D51BC;
        lbl_805D51BC = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80500E68.value, temp_r4);
        break;
    case 7:
        temp_r4_2 = lbl_805D51BC;
        lbl_805D51BC = temp_r4_2 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80500E68.value, temp_r4_2);
        break;
    }
    TObjEneMe1Gee__data_805D51B8 += 1;
}

}
