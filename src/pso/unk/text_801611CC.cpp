#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TODoorCave01__vt4(u8 *arg0, s16 *arg1);
}

extern "C" {

int TODoorCave01__sub_80161320(void);
void TODoorCave01__vt15(u8 *arg0);
s32 TODoorCave01__vt17(void *arg0);
void TODoorCave01__vt18(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TODragonfly__sub_80158360(f32);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

void TODoorCave01__vt18(void) {  }

int TODoorCave01__sub_80161320(void) { return 0; }

void TODoorCave01__vt4(u8 *arg0, s16 *arg1) {
    if ((s16) *arg1 == 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 0xF0000 | 1);
    }
}

s32 TODoorCave01__vt17(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xC8) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    } else if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xCC) = 1;
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        if ((get_main_phase() == 0xF) || (is_not_split_screen__13TRaderMapCoreFv() == 1)) {
            M2C_FIELD(arg0, s32 *, 0xCC) = 3;
        } else {
            M2C_FIELD(arg0, s32 *, 0xCC) = 2;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    }
    return M2C_FIELD(arg0, s32 *, 0xC8);
}

extern const f32 lbl_805DB490;

void TODoorCave01__vt15(u8 *arg0) {
    if (((u8) ((u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0xD0) & 1) >> 5) == 1) || (TODragonfly__sub_80158360(lbl_805DB490) != 1)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        TBoss3Volopt__sub_8022675C(0x42807, arg0 + 0x38, 0, 0);
    }
}

}
