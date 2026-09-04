#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_80305034 { char pad[0x18]; };
struct VObj_80305034 : VBase_80305034 {
#define VM(i) virtual M2C_UNK m##i();
    VM(0)VM(1)VM(2)VM(3)VM(4)VM(5)VM(6)VM(7)VM(8)VM(9)VM(10)VM(11)VM(12)VM(13)VM(14)VM(15)
    VM(16)VM(17)VM(18)VM(19)VM(20)VM(21)VM(22)VM(23)VM(24)VM(25)VM(26)VM(27)VM(28)VM(29)VM(30)
    VM(31)VM(32)VM(33)VM(34)VM(35)VM(36)VM(37)VM(38)VM(39)VM(40)VM(41)VM(42)VM(43)VM(44)VM(45)
    VM(46)VM(47)VM(48)VM(49)VM(50)VM(51)VM(52)VM(53)VM(54)VM(55)VM(56)VM(57)VM(58)VM(59)VM(60)
    VM(61)VM(62)VM(63)VM(64)VM(65)VM(66)VM(67)VM(68)VM(69)VM(70)VM(71)VM(72)VM(73)VM(74)VM(75)
    VM(76)VM(77)VM(78)VM(79)VM(80)VM(81)VM(82)VM(83)VM(84)VM(85)VM(86)VM(87)VM(88)VM(89)VM(90)
    VM(91)VM(92)VM(93)VM(94)
#undef VM
};
struct WBase_80305034 { char pad[0x14]; };
struct WObj_80305034 : WBase_80305034 {
#define WM(i) virtual M2C_UNK w##i();
    WM(0)WM(1)WM(2)WM(3)WM(4)WM(5)
#undef WM
};

extern "C" {

void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800BACE0(void *, f32, f32, f32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK noop__16TObjEneDellBiterFv(void *);
M2C_UNK TObjEneDellBiter__sub_803058DC(void *);
M2C_UNK TObjEneDellBiter__sub_8030591C(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void *copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(void *, f32);

extern const f32 TObjEneDellBiter__data_805DF00C;
extern const f32 lbl_805DF014;

void run_task__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        ((VObj_80305034 *) arg0)->m93();
        ((WObj_80305034 *) (arg0 + 0x3D4))->w3();
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        M2C_FIELD(arg0, s32 *, 0x488) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039E12)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_linked_position__14TObjEneEpsilonFPv((void *) (arg0), (f32) (TObjEneDellBiter__data_805DF00C));
        M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) > 0x14) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s16 *, 0xB8) = 3;
                TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x40039B14)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            TObjEneDellBiter__sub_8030591C((void *) (arg0));
            TObjEneDD__sub_800BACE0((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0x3A0)), (f32) (M2C_FIELD(arg0, f32 *, 0x3A8)), (f32) (lbl_805DF014));
            noop__16TObjEneDellBiterFv((void *) (arg0));
            break;
        case 1:
            TObjEneDellBiter__sub_803058DC((void *) (arg0));
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        if (((WObj_80305034 *) (arg0 + 0x3D4))->w5() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
            ((VObj_80305034 *) arg0)->m94();
            ((VObj_80305034 *) arg0)->m87();
            return;
        }
        break;
    case 5:
        ((VObj_80305034 *) arg0)->m94();
        break;
    }
}

}
