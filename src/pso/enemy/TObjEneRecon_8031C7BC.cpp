#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8031c7bc { char pad[0x18]; };
struct VObj_8031c7bc : VBase_8031c7bc {
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
struct WBase_8031c7bc { char pad[0x14]; };
struct WObj_8031c7bc : WBase_8031c7bc {
#define WM(i) virtual M2C_UNK w##i();
    WM(0)WM(1)WM(2)WM(3)WM(4)
#undef WM
};

extern "C" {

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TLobby__sub_800869A4(void *, int, int, int);
M2C_UNK TObjEneDD__sub_800BA934(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneRecon__sub_8031DD14(void *);
M2C_UNK TObjEneRecon__sub_8031EFAC(int, void *);
s32 TPhotonMylla__sub_80154CB4(int);
s32 is_anim_6__12TObjEneReconFPv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_trap_b__12TObjEneReconFi(void *);
M2C_UNK update_velocity__9TObjEneDDFPv(void *);

void run_task__12TObjEneReconFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_8031c7bc *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 2);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        ((WObj_8031c7bc *) (arg0 + 0x480))->w2();
        TLobby__sub_800869A4((void *) (arg0 + 0x38), (int) (0x79), (int) (0), (int) (0xF));
        return;
    case 3:
        temp_r3 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x434)));
        if (temp_r3 == 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (is_anim_6__12TObjEneReconFPv() == 1) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (7));
            return;
        }
        if (((WObj_8031c7bc *) (arg0 + 0x480))->w4() != 0) {
            M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 1);
            TObjEneRecon__sub_8031EFAC((int) (temp_r3), (void *) (arg0));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 5:
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        update_velocity__9TObjEneDDFPv((void *) (arg0));
        ((VObj_8031c7bc *) arg0)->m86();
        TObjEneRecon__sub_8031DD14((void *) (arg0));
        TObjEneDD__sub_800BA934((void *) (arg0));
        spawn_trap_b__12TObjEneReconFi((void *) (arg0));
        break;
    }
}

}
