#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60(M2C_UNK *);
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

#include <stddef.h>
struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, M2C_UNK *);
};

struct Stack_80362FB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80362FB4_lbl_80479FC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK TObjPlayer__sub_8011EB84(void *, void *, int, int);
s16 TObjPlayer__sub_801D2EA8(void *);
void TObjPlayer__sub_802D5D18(u8 *arg0);
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjPlayer__sub_80120908(void *);
void TObjPlayer__sub_802D5E8C(u8 *arg0);
s32 check_boss2tunnel_field_f4__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
s32 TObjContainerIdo__sub_803D96A8(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
f32 TOHangerMachine01__sub_803D9C00(void *);
extern RecoveredGlobal_80362FB4_lbl_80479FC8 lbl_80472590;
void TObjPlayer__sub_802D5DE0(u8 *arg0);
}

extern "C" {

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0);
void* init_state_445__10TObjPlayerFPv(void* a0);
void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void update_swim_flag__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK TObjPlayer__sub_80120304(M2C_UNK *, void *);
int TObjPlayer__sub_80120D50(void);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, M2C_UNK *);
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, M2C_UNK, s32);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_UNK sp8;

    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x200);
    M2C_FIELD(arg1, s32 *, 0x58) = 0xC000;
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) (M2C_FIELD(arg1, s32 *, 0x40) | 2);
    TObjPlayer__sub_80120304(&sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1 + 0x60, &sp8);
    M2C_FIELD(arg1, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x208);
    M2C_FIELD(arg1, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x204);
}

void update_swim_flag__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 2) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) & 0xFFFFFFFE);
}

extern s32 tl_05;

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, M2C_FIELD(arg0, s32 *, 0x1FC));
    }
}

    extern unsigned char TObjPlayer__sub_8032E648[];
    extern unsigned char create_network_object__10TObjPlayerFiPvi[];
    extern unsigned char lbl_804E23F0[];
    extern const float lbl_805DE7A0;

void TObjPlayer__sub_802D5D18(u8 *arg0) {
    M2C_UNK sp8;
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0xF0);
    ((VObj_18 *)(temp_r3))->m63(0x30, &sp8);
    if (TObjPlayer__sub_801D2EA8((void *) (M2C_FIELD(arg0, u8 **, 0xF0) + 0x7CC)) == 2) {
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0));
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0x1555));
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (-0x1555));
    } else {
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0));
    }
    ((VObj_18 *)(arg0))->m60(&sp8);
}

typedef char RecoveredGlobal_80362FB4_lbl_80479FC8_size[sizeof(RecoveredGlobal_80362FB4_lbl_80479FC8) == 0x10 ? 1 : -1];
void TObjPlayer__sub_802D5DE0(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80362FB4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80362FB4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80362FB4, sp10) == 0x8) ? 1 : -1];
    Stack_80362FB4 stack;
    if (get_player_list__10TObjPlayerFv() == 0) {
        stack.sp8 = M2C_FIELD(&lbl_80472590.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_80472590.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_80472590.value, s32 *, 8);
        TOHangerMachine01__sub_803D9C00((void *) (&stack.sp8));
        TObjContainerIdo__sub_803D96A8((int) (0), (int) (0x18E3));
        if (M2C_FIELD(arg0, s32 *, 0x1f8) & 1) {
            TObjPlayer__sub_803D9B2C();
            TObjContainerIdo__sub_803D96A8((int) (0), (int) (0x2AAA));
            check_boss2tunnel_field_f4__10TObjPlayerFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803D9B2C();
            TObjContainerIdo__sub_803D96A8((int) (0), (int) (-0x2AAA));
            check_boss2tunnel_field_f4__10TObjPlayerFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
        }
    }
}

void TObjPlayer__sub_802D5E8C(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x01000000U) == 0U) {
        TObjPlayer__sub_80120908((void *) (arg0));
    }
}

void* init_state_445__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E23F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)3); *(int*)((char*)a0 + 0x1f8) = 0; *(int*)((char*)a0 + 0x1fc) = 445; *(int*)((char*)a0 + 0x204) = (int)TObjPlayer__sub_8032E648; *(int*)((char*)a0 + 0x208) = (int)create_network_object__10TObjPlayerFiPvi; *(float*)((char*)a0 + 0x200) = lbl_805DE7A0; return a0; }

}
