#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
#include <stddef.h>
struct Stack_801AD5D8 {
    M2C_UNK sp8;
    f32 spC;
    u8 pad_10[0x4];
    M2C_UNK sp14;
    f32 sp18;
    u8 pad_1C[0x4];
    M2C_UNK sp20;
    f32 sp24;
    u8 pad_28[0x4];
    M2C_UNK sp2C;
    f32 sp30;
};

struct RecoveredFields_801AD5D8_arg0 {
    u8 unknown_0[0xB8];
    s16 field_B8;
    u8 unknown_BA[0x92];
    s16 field_14C;
    u8 unknown_14E[0x2];
    f32 field_150;
    u8 unknown_154[0x28];
    u16 field_17C;
    u8 unknown_17E[0x6];
    f32 field_184;
    u8 unknown_188[0xC];
    s16 field_194;
    u8 unknown_196[0xA];
    s32 field_1A0;
    s32 field_1A4;
};

extern "C" {
u16 obj_getField1c(void *);
s32 TObjEneDellBiter__sub_80087350(s32, s32);
u8 * TPhotonMylla__sub_80154CB4(u16);
u8 * TPhotonMagicSquare__ct(void *, M2C_UNK, s32, s32, s32, f32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TObjPlayer__sub_801A720C(int, int, int, f32);
M2C_UNK TCameraCtrl__sub_801A7310(void *, int);
M2C_UNK TObjPlayer__sub_801A7680(void *);
M2C_UNK TObjPlayer__sub_801A7748(void *, int);
M2C_UNK update_state__10TSceneSoraFPv(void *);
u8 *__nw__7TObjectFUl(M2C_UNK, f32);
extern const f32 lbl_805DC1FC;
extern const f32 lbl_805DC200;
extern const f32 lbl_805DC204;
extern const f32 lbl_805DC208;
extern const f32 lbl_805DC20C;
extern const f32 lbl_805DC210;
extern const f32 lbl_805DC214;
extern const f32 lbl_805DC218;
extern const f32 lbl_805DC21C;
extern const f32 lbl_805DC220;
void run_task__12TPhotonMyllaFv(u8 *arg0);
}

extern "C" {

struct Base_801AD8FC_801AD4A8 { char pad[0x18]; };
struct VObj_801AD8FC_801AD4A8 : Base_801AD8FC_801AD4A8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void TPhotonMylla__sub_801AD4A8(void* a0);
void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_photon_motion_object(void *, M2C_UNK);
M2C_UNK free_photon__10TObjPlayerFPv(void *);

    extern const float lbl_805DC1F8;
void TPhotonMylla__sub_801AD4A8(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC1F8; *(float*)((char*)a0 + 0x188) = lbl_805DC1F8; *(float*)((char*)a0 + 0x18c) = lbl_805DC1F8; *(float*)((char*)a0 + 0x190) = lbl_805DC1F8; }

extern M2C_UNK __vt__12TPhotonMylla[];

#pragma push
#pragma opt_common_subs off
typedef char RecoveredFields_801AD5D8_arg0_B8_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_14C_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_14C) == 0x14C ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_150_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_150) == 0x150 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_17C_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_17C) == 0x17C ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_184_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_184) == 0x184 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_194_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_194) == 0x194 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_1A0_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_1A0) == 0x1A0 ? 1 : -1];
typedef char RecoveredFields_801AD5D8_arg0_1A4_offset[offsetof(RecoveredFields_801AD5D8_arg0, field_1A4) == 0x1A4 ? 1 : -1];
void run_task__12TPhotonMyllaFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_801AD5D8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801AD5D8, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801AD5D8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801AD5D8, sp18) == 0x10) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801AD5D8, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_801AD5D8, sp24) == 0x1C) ? 1 : -1];
    typedef char sp2C_offset[(offsetof(Stack_801AD5D8, sp2C) == 0x24) ? 1 : -1];
    typedef char sp30_offset[(offsetof(Stack_801AD5D8, sp30) == 0x28) ? 1 : -1];
    Stack_801AD5D8 stack;
    f32 temp_f1;
    f32 temp_f1_2;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    u8 *temp_r3_5;
    if (((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 == 0x32) && ((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 == 0)) {
        ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 = 1;
        temp_r3 = (u8 *)(TPhotonMylla__sub_80154CB4(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp2C), (void *) (temp_r3 + 0x38));
        }
        temp_f1 = stack.sp30;
        stack.sp30 = temp_f1 + lbl_805DC1FC;
        temp_r3_2 = (u8 *)(__nw__7TObjectFUl(0xD0, temp_f1));
        if (temp_r3_2 != NULL) {
            TPhotonMagicSquare__ct(temp_r3_2, (s32) arg0, 5, (s32) &stack.sp2C, 0xAA, lbl_805DC200);
        }
    }
    if ((lbl_805DC204 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) && ((s16) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_B8 == 1)) {
        TCameraCtrl__sub_801A7310((void *) (arg0), (int) (3));
        ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 = 0;
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0));
        TObjPlayer__sub_801A7748((void *) (arg0), (int) (5));
    }
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_194 = (s16) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_B8;
    update_state__10TSceneSoraFPv((void *) (arg0));
    TBoss1Dragon__sub_80143504((void *) (arg0));
    TObjPlayer__sub_801A7680((void *) (arg0));
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C = (s16) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C + 0xF);
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C = (s16) (u8) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_14C;
    ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 = (s32) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 + 1);
    if (lbl_805DC208 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_3 = (u8 *)(TPhotonMylla__sub_80154CB4(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_3 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp20), (void *) (temp_r3_3 + 0x38));
        }
        stack.sp24 += lbl_805DC20C;
        TObjEneDellBiter__sub_80087350((s32) &stack.sp20, 0x174);
        TObjEneDellBiter__sub_80087350((s32) &stack.sp20, 0x175);
    }
    if (lbl_805DC210 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_4 = (u8 *)(TPhotonMylla__sub_80154CB4(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_4 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (temp_r3_4 + 0x38));
        }
        stack.sp18 += lbl_805DC20C;
        TObjEneDellBiter__sub_80087350((s32) &stack.sp14, 0x169);
    }
    if (lbl_805DC214 == (f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4) {
        temp_r3_5 = (u8 *)(TPhotonMylla__sub_80154CB4(((RecoveredFields_801AD5D8_arg0 *)arg0)->field_17C));
        if (temp_r3_5 != NULL) {
            VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (temp_r3_5 + 0x38));
        }
        stack.spC += lbl_805DC20C;
        TObjEneDellBiter__sub_80087350((s32) &stack.sp8, 0x169);
        if (temp_r3_5 != NULL) {
            TObjPlayer__sub_801A720C((int) (obj_getField1c(temp_r3_5)), (int) (5), (int) (0), (f32) (((RecoveredFields_801AD5D8_arg0 *)arg0)->field_150));
        }
    }
    if ((f32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A4 > lbl_805DC218) {
        temp_f1_2 = ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_184;
        if (temp_f1_2 > lbl_805DC21C) {
            ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_184 = (f32) (temp_f1_2 - lbl_805DC220);
        }
    }
    if ((s32) ((RecoveredFields_801AD5D8_arg0 *)arg0)->field_1A0 != 0) {
        TOTrapAncient01__sub_80226578(0x4002462F, (s32) arg0, 0U, 0, 0);
    }
}
#pragma pop

void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_801AD8FC_801AD4A8 *o = (struct VObj_801AD8FC_801AD4A8 *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TPhotonMylla;
        o->m13();
        free_photon__10TObjPlayerFPv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
