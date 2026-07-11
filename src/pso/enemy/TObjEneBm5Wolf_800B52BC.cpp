#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B52BC(u8 *arg0, s32 arg1);
M2C_UNK TObjEneBm5Wolf__sub_800B74B8(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7530(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B7DDC(void *, s32);
M2C_UNK TObjEneBm5Wolf__sub_800B850C(s32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneMe3ShinowaReal__sub_8002ADD8();
void *fn_800F5EB4(void *, M2C_UNK);
M2C_UNK fn_80143504();
M2C_UNK fn_8022602C(M2C_UNK);
M2C_UNK fn_8022675C(void *, void *, M2C_UNK, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805D9DB4;

struct VBase { char pad[0x18]; };
struct VEne : VBase {
#define VPAD(n) virtual M2C_UNK _v##n() { return 0; }
    VPAD(0) VPAD(1) VPAD(2) VPAD(3) VPAD(4) VPAD(5) VPAD(6) VPAD(7) VPAD(8) VPAD(9)
    VPAD(10) VPAD(11) VPAD(12) VPAD(13) VPAD(14) VPAD(15) VPAD(16) VPAD(17) VPAD(18) VPAD(19)
    VPAD(20) VPAD(21) VPAD(22) VPAD(23) VPAD(24) VPAD(25) VPAD(26) VPAD(27) VPAD(28) VPAD(29)
    VPAD(30) VPAD(31) VPAD(32) VPAD(33) VPAD(34) VPAD(35) VPAD(36) VPAD(37) VPAD(38) VPAD(39)
    VPAD(40) VPAD(41) VPAD(42) VPAD(43) VPAD(44) VPAD(45) VPAD(46) VPAD(47) VPAD(48) VPAD(49)
    VPAD(50) VPAD(51) VPAD(52) VPAD(53) VPAD(54) VPAD(55) VPAD(56) VPAD(57) VPAD(58) VPAD(59)
    VPAD(60) VPAD(61) VPAD(62) VPAD(63) VPAD(64) VPAD(65) VPAD(66) VPAD(67) VPAD(68) VPAD(69)
    VPAD(70) VPAD(71) VPAD(72) VPAD(73) VPAD(74) VPAD(75) VPAD(76) VPAD(77) VPAD(78) VPAD(79)
    VPAD(80) VPAD(81) VPAD(82) VPAD(83) VPAD(84) VPAD(85) VPAD(86)
    virtual M2C_UNK m87();
    VPAD(88) VPAD(89) VPAD(90) VPAD(91) VPAD(92) VPAD(93)
    virtual M2C_UNK m94();
#undef VPAD
};

void TObjEneBm5Wolf__sub_800B52BC(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VEne *)arg0)->m94();
        TObjEneDD__sub_800BBA04(arg0, 7);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        M2C_FIELD(arg0, s32 *, 0x41C) = 0;
        TObjEneBm5Wolf__sub_800B850C(M2C_FIELD(arg0, s32 *, 0x3DC));
        return;
    case 3:
        if (TObjEneMe3ShinowaReal__sub_8002ADD8() != 0) {
            TObjEneDD__sub_800BBA18(arg0, 7);
        }
    case 5:
        return;
    case 0:
        fn_80143504();
        TObjEneBm5Wolf__sub_800B7DDC(arg0, M2C_FIELD(arg0, s32 *, 0x60));
        if (objInBand__FP7GameObjf(arg0, lbl_805D9DB4) != 0) {
            fn_8022675C(fn_800F5EB4(arg0, 0x3AA1A), arg0 + 0x38, 0, 0);
            fn_8022602C(-0x100);
        }
        M2C_FIELD(arg0, s32 *, 0x41C) = (s32) (M2C_FIELD(arg0, s32 *, 0x41C) + 1);
        if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x1E) {
            TObjEneBm5Wolf__sub_800B7530(arg0);
        } else if (M2C_FIELD(arg0, s32 *, 0x41C) == 0x28) {
            TObjEneBm5Wolf__sub_800B74B8(arg0);
        }
        ((VEne *)arg0)->m87();
        break;
    }
}

}
