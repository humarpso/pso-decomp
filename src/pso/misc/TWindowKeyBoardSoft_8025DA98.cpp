#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0);
M2C_UNK TWindowKeyBoardSoft__sub_8025CFA8(void *, M2C_UNK *);
M2C_UNK TWindowKeyBoardSoft__sub_8025D47C(void *, M2C_UNK *, s8 *);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, M2C_UNK *, s8 *);
s32 fn_8025CE00(void *, u8 *);
M2C_UNK TWindowKeyBoardSoft__sub_8025DBDC(void *, M2C_UNK);
s32 fn_803E68D0(u8 *, M2C_UNK *, s8 *);

M2C_UNK strncpy(M2C_UNK *, u8 *, M2C_UNK);

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    u16 *var_r3;
    int temp_r0;
    u8 *var_r4;

    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 0x80)) {
        TWindowKeyBoardSoft__sub_8025DBDC(arg0, 1);
    }
    var_r3 = M2C_FIELD(arg0, u16 **, 0x84);
    var_r4 = M2C_FIELD(arg0, u8 **, 0x9C);
    while ((temp_r0 = *var_r3) != 0) {
        *var_r4 = (u8) (temp_r0 >> 8);
        if ((s8) *var_r4 != 0) {
            var_r4 += 1;
        }
        temp_r0 = *var_r3;
        var_r3 = (u16 *)((u8 *)var_r3 + 2);
        *var_r4 = (u8) temp_r0;
        var_r4 += 1;
    }
    *var_r4 = 0;
    M2C_FIELD(arg0, u8 **, 0xA0) = (u8 *) M2C_FIELD(arg0, u8 **, 0x9C);
    if (fn_8025CE00(arg0, M2C_FIELD(arg0, u8 **, 0x9C)) != 0) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 0x10);
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        strncpy((M2C_UNK *)sp8, M2C_FIELD(arg0, u8 **, 0x9C), 0x100);
        sp108[0] = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & 0xFFFFFFEF);
        M2C_FIELD(arg0, s32 *, 0xAC) = fn_803E68D0(M2C_FIELD(arg0, u8 **, 0x9C), (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        TWindowKeyBoardSoft__sub_8025CFA8(arg0, (M2C_UNK *)sp8);
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 0x94;
    if (TWindowKeyBoardSoft__sub_8025D544(arg0, (M2C_UNK *)sp8, sp108) != 0) {
        TWindowKeyBoardSoft__sub_8025D47C(arg0, (M2C_UNK *)sp8, sp108);
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}

}
