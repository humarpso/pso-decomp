#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8009c7d8 { char pad[0x18]; };
struct VObj_8009c7d8 : VBase_8009c7d8 {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)VM(95)VM(96)VM(97)VM(98)VM(99)VM(100)VM(101)VM(102)VM(103)VM(104)
    VM(105)VM(106)VM(107)VM(108)
#undef VM
};

extern "C" {

void TObjEneMe1Canadin__sub_8009C7D8(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneMe1Canadin__sub_8009E6B0(void *);
s32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv();
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
M2C_UNK set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv(int);
M2C_UNK update_angle__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_position_with_offset__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

extern const f32 TObjEneMe1Canadin__data_805D98B4;
extern const f32 lbl_805D98D4;

void TObjEneMe1Canadin__sub_8009C7D8(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        advance_state_5_to_4__17TObjEneMe1CanadinFPv();
        TObjEneDD__sub_800BBA04((void *) (arg0), (int) (9));
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj_8009c7d8 *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x4C8)));
            set_flag3c8_bit8__23TObjEneMe1CanadinLeaderFPv((int) (M2C_FIELD(arg0, s32 *, 0x3C0)));
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if ((((VObj_8009c7d8 *) arg0)->m106() == 0) && (M2C_FIELD(arg0, f32 *, 0x3AC) < lbl_805D98D4)) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (arg0 + 0x50));
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        update_angle__17TObjEneMe1CanadinFPv((void *) (arg0));
        update_position_with_offset__17TObjEneMe1CanadinFPv((void *) (arg0));
        TObjEneDD__sub_800BAC14((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (TObjEneMe1Canadin__data_805D98B4));
        ((VObj_8009c7d8 *) arg0)->m86();
        TObjEneMe1Canadin__sub_8009E6B0((void *) (arg0));
        break;
    }
}

}
