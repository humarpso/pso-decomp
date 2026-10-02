#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };

struct VObj : VBase {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)V(90)V(91)V(92)V(93)V(94)V(95)
#undef V
};

struct VBase_80037EE0 { char pad[0x18]; };

struct VObj_80037EE0 : VBase_80037EE0 {
#define V(n) virtual void m##n();
V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)V(90)V(91)V(92)V(93)V(94)V(95)
#undef V
};

extern "C" {
M2C_UNK TBoss2Mine__sub_80038760(void *);
M2C_UNK set_state_by_distance__10TBoss2MineFPvi(void *, int);
M2C_UNK init_params__10TBoss2MineFPvif(void *, int, f32);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int, int);
extern const f32 lbl_805D84BC;
extern const f32 lbl_805D84F0;
void TBoss2Mine__sub_80037D4C(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 TBoss2Mine__data_805D84EC;
void TBoss2Mine__sub_800380B8(u8 *arg0, u8 *arg1, u8 *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 TObjPlayer__sub_8001978C(s32, f32, f32, f32);
void update_move_flag__10TBoss2MineFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern const f64 lbl_80435AF8;
extern const f32 TBoss2Mine__data_805D84C8;
extern const float TBoss2Mine__data_805D84D4;
extern const f32 lbl_805D84F4;
extern const f32 lbl_805D84F8;
void TBoss2Mine__sub_80037EE0(u8 *arg0, s32 arg1);
}

extern "C" {

void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3);
void* TBoss2Mine__ct(void* a0, int a1, int a2, int a3, int a4);

    extern unsigned char lbl_80482D04[];
    extern const float TBoss2Mine__data_805D84D4;
void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3) { TBoss2Mine__ct(a0, a1, a2, a3, 1); *(int*)((char*)a0 + 0x18) = (int)lbl_80482D04; *(int*)((char*)a0 + 0x3f0) = 0; *(int*)((char*)a0 + 0x3f4) = 0; *(float*)((char*)a0 + 0x3f8) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x3fc) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x400) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x404) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x408) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x40c) = TBoss2Mine__data_805D84D4; return a0; }
#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_80037D4C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r7;
    switch (arg1) {
    case 4:
        ((VObj *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & ~5);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x38C) | 2;
        M2C_FIELD(arg0, s32 *, 0x38C) = temp_r5;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x8000;
        M2C_FIELD(arg0, s32 *, 0x3B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
        temp_r7 = (s32) (lbl_805D84F0 * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0), (int) (0x8000), (int) (temp_r5)));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r7 + 0xB4);
        TBoss3Volopt__sub_8022675C((int) (0x4003A804), (void *) (arg0 + 0x2FC), (int) (0), (int) (0), (int) (temp_r7));
        init_params__10TBoss2MineFPvif((void *) (arg0), (int) (0x1E), (f32) (lbl_805D84BC));
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C);
        if (temp_r4 & 0x100) {
            M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (temp_r4 & 0xFFFFFEFF);
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (1));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C8) == 2) {
            TObjEneDD__sub_800BBA18((void *) (arg0), (int) (3));
        }
        break;
    case 5:
        break;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3A8) + 0x280);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) >= 0x38E3) {
                M2C_FIELD(arg0, s32 *, 0x3A8) = 0x38E3;
                M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
                return;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3CC) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = 2;
            }
            set_state_by_distance__10TBoss2MineFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x3CC)));
            TBoss2Mine__sub_80038760((void *) (arg0));
            break;
        }
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TBoss2Mine__sub_80037EE0(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r3;
    switch (arg1) {
    case 4:
        ((VObj_80037EE0 *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF8);
        VecCopy__FP3VecPC3Vec(arg0 + 0x39C, arg0 + 0x390);
        TBoss6Type1__sub_803D9370(arg0 + 0x39C, arg0 + 0x2FC);
        M2C_FIELD(arg0, f32 *, 0x3DC) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x39C);
        temp_r3 = (s32) (lbl_80435AF8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x39C), M2C_FIELD(arg0, f32 *, 0x3A4)));
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r3;
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
        M2C_FIELD(arg0, f32 *, 0x3E4) = (f32) (lbl_805D84F8 * TObjPlayer__sub_8001978C(temp_r3, (lbl_805D84F4 * (temp_f2 - M2C_FIELD(arg0, f32 *, 0x394))) / TBoss2Mine__data_805D84C8, temp_f2, lbl_805D84F4));
        M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) lbl_805D84F8;
        M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (*(const f32 *)&TBoss2Mine__data_805D84D4);
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) M2C_FIELD(arg0, f32 *, 0x3DC);
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x300) < M2C_FIELD(arg0, f32 *, 0x394)) {
            M2C_FIELD(arg0, f32 *, 0x300) = M2C_FIELD(arg0, f32 *, 0x394);
            TObjEneDD__sub_800BBA18(arg0, 2);
        }
        break;
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) ((M2C_FIELD(arg0, f32 *, 0x39C) * M2C_FIELD(arg0, f32 *, 0x3EC)) + M2C_FIELD(arg0, f32 *, 0x2FC));
        M2C_FIELD(arg0, f32 *, 0x304) = (f32) ((M2C_FIELD(arg0, f32 *, 0x3A4) * M2C_FIELD(arg0, f32 *, 0x3EC)) + M2C_FIELD(arg0, f32 *, 0x304));
        M2C_FIELD(arg0, f32 *, 0x3E0) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E0) - M2C_FIELD(arg0, f32 *, 0x3EC));
        if (M2C_FIELD(arg0, f32 *, 0x3E0) < M2C_FIELD(arg0, f32 *, 0x3E4)) {
            M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3E8) - TBoss2Mine__data_805D84C8);
            M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + M2C_FIELD(arg0, f32 *, 0x3E8));
            if ((s32) M2C_FIELD(arg0, s32 *, 0x5C) >= 0x8000) {
                M2C_FIELD(arg0, s32 *, 0x5C) = 0x8000;
            } else {
                M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 0x300);
                M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D8) + 0x4000);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x5C) = 0x4000;
        }
        update_move_flag__10TBoss2MineFPv(arg0);
        break;
    }
}
#pragma pop

void TBoss2Mine__sub_800380B8(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 0x100);
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x390, arg2);
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + TBoss2Mine__data_805D84EC);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~0xA00);
}

}
