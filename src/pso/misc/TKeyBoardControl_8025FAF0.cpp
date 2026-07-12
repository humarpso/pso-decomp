#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1);
s32 TKeyBoardControl__sub_8025EDB4(void *, s32, u16 *);
u32 poll_input__16TKeyBoardControlFPv(void *);
u8 TKeyBoardControl__sub_8025F2F8(void *, u8);
s32 TKeyBoardControl__sub_8025F3D4(void *, s32, u8);
s32 TKeyBoardControl__sub_8025F4A0();
s32 TWindowKeyBoardHard__sub_80260438(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025C618(s32, u16);
M2C_UNK TWindowSubStatusDisp__sub_8024FBA8(s32, s32);

void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1) {
    u16 sp8;
    s32 temp_r31;

    if (TKeyBoardControl__sub_8025F4A0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    temp_r31 = TKeyBoardControl__sub_8025EDB4(arg0, arg1, &sp8);
    if (sp8 == 0x1F) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    if (poll_input__16TKeyBoardControlFPv(arg0) < 3U) {
        if (TKeyBoardControl__sub_8025F3D4(arg0, arg1, (u8) sp8) == 0) {
            sp8 = (u16) TKeyBoardControl__sub_8025F2F8(arg0, (u8) sp8);
            goto block_7;
        }
    } else {
block_7:
        if ((TWindowKeyBoardHard__sub_80260438(arg0) != 0) && ((s32) sp8 >= 0x61) && ((s32) sp8 <= 0x7A)) {
            sp8 -= 0x20;
        }
        TWindowSubStatusDisp__sub_8024FBA8(M2C_FIELD(arg0, s32 *, 0x70), temp_r31);
        TWindowKeyBoardSoft__sub_8025C618(M2C_FIELD(arg0, s32 *, 0x70), sp8);
    }
}

}
