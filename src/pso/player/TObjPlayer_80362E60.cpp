#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjPlayer__sub_80120908(void *);
void TObjPlayer__sub_80363060(u8 *arg0);
s16 TObjPlayer__sub_801D2EA8(void *);
M2C_UNK TObjPlayer__sub_8011EB84(void *, void *, int, int);
void create_cane_if_ready__10TObjPlayerFi(s32 arg0, void *position);
void TObjPlayer__sub_80362EF8(u8 *arg0);
void * enter_state_804F27E0__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_803630F0(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1);
void create_cane_if_ready__10TObjPlayerFi(s32 arg0, void *position);
void set_pause_flag_from_state__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_8011F63C();
void TObjPlayer__sub_8012A884(void *);
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void set_pause_flag_from_state__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 2) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) & 0xFFFFFFFE);
}

extern s32 tl_05;

void create_cane_if_ready__10TObjPlayerFi(s32 arg0, void *position) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, 0x1BD);
    }
}

extern M2C_UNK lbl_804F27E0[];

void TObjPlayer__sub_80362EF8(u8 *arg0) {
    M2C_UNK sp8;
    u8 *temp_r3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
    ((VObj_18_f1aa6a *)(temp_r3))->m63(0x30, &sp8);
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, u8 **, 0xF0) + 0x7CC) == 2) {
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0));
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0x1555));
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (-0x1555));
    } else {
        TObjPlayer__sub_8011EB84((void *) (arg0), (void *) (&sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF4)), (int) (0));
    }
    create_cane_if_ready__10TObjPlayerFi((s32)((void *) (arg0)), (void *)((void *) (&sp8)));
}

void TObjPlayer__sub_80363060(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x01000000U) == 0U) {
        TObjPlayer__sub_80120908((void *) (arg0));
    }
}

void *enter_state_804F27E0__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F27E0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 3);
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}
u8 *TObjPlayer__sub_803630F0(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)enter_state_804F27E0__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern M2C_UNK lbl_804F27E0[];

void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F27E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
