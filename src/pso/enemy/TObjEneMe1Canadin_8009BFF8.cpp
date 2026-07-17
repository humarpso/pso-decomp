#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1Canadin__sub_8009BFF8(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, s32);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(void *, f32);
M2C_UNK update_position_with_offset__17TObjEneMe1CanadinFPv(void *);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv(void *);
M2C_UNK TObjEneMe1Canadin__sub_8009E6B0(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK update_angle__17TObjEneMe1CanadinFPv(void *);

extern const f32 TObjEneMe1Canadin__data_805D988C;
extern const f32 lbl_805D98B0;
extern const f32 TObjEneMe1Canadin__data_805D98B4;

#define VIRT(n) virtual void m##n() = 0;
struct Base { u8 pad[0x18]; };
struct VObj : Base {
    VIRT(0) VIRT(1) VIRT(2) VIRT(3) VIRT(4) VIRT(5) VIRT(6) VIRT(7) VIRT(8) VIRT(9)
    VIRT(10) VIRT(11) VIRT(12) VIRT(13) VIRT(14) VIRT(15) VIRT(16) VIRT(17) VIRT(18) VIRT(19)
    VIRT(20) VIRT(21) VIRT(22) VIRT(23) VIRT(24) VIRT(25) VIRT(26) VIRT(27) VIRT(28) VIRT(29)
    VIRT(30) VIRT(31) VIRT(32) VIRT(33) VIRT(34) VIRT(35) VIRT(36) VIRT(37) VIRT(38) VIRT(39)
    VIRT(40) VIRT(41) VIRT(42) VIRT(43) VIRT(44) VIRT(45) VIRT(46) VIRT(47) VIRT(48) VIRT(49)
    VIRT(50) VIRT(51) VIRT(52) VIRT(53) VIRT(54) VIRT(55) VIRT(56) VIRT(57) VIRT(58) VIRT(59)
    VIRT(60) VIRT(61) VIRT(62) VIRT(63) VIRT(64) VIRT(65) VIRT(66) VIRT(67) VIRT(68) VIRT(69)
    VIRT(70) VIRT(71) VIRT(72) VIRT(73) VIRT(74) VIRT(75) VIRT(76) VIRT(77) VIRT(78) VIRT(79)
    VIRT(80) VIRT(81) VIRT(82) VIRT(83) VIRT(84) VIRT(85) VIRT(86) VIRT(87) VIRT(88) VIRT(89)
    VIRT(90) VIRT(91) VIRT(92) VIRT(93) VIRT(94) VIRT(95) VIRT(96) VIRT(97) VIRT(98) VIRT(99)
    VIRT(100) VIRT(101) VIRT(102) VIRT(103)
};

void TObjEneMe1Canadin__sub_8009BFF8(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 0xE);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 2) {
            ((VObj *)arg0)->m103();
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (update_linked_position__14TObjEneEpsilonFPv(arg0, TObjEneMe1Canadin__data_805D988C) != 0) {
            M2C_FIELD(arg0, s32 *, 0x470) = 2;
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x474) = (s32) (M2C_FIELD(arg0, s32 *, 0x474) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x474) >= 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x470) = 1;
                advance_state_5_to_4__17TObjEneMe1CanadinFPv(arg0);
            }
            TObjEneMe1Canadin__sub_8009EB14(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F4));
            break;
        case 1:
            copy_position__14TObjEneEpsilonFPv(arg0, arg0 + 0x50);
            update_velocity__9TObjEneDDFPv(arg0);
            update_angle__17TObjEneMe1CanadinFPv(arg0);
            update_position_with_offset__17TObjEneMe1CanadinFPv(arg0);
            if (M2C_FIELD(arg0, f32 *, 0x3AC) > lbl_805D98B0) {
                TObjEneDD__sub_800BAC14(arg0, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), TObjEneMe1Canadin__data_805D98B4);
            }
            break;
        }
        ((VObj *)arg0)->m87();
        TObjEneMe1Canadin__sub_8009E6B0(arg0);
        break;
    }
}

}
