#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_803626A8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_803626A8_lbl_80479FBC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_803626A8_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80362B48___vt__14TObjEneEpsilon {
    M2C_UNK value;
    u8 remaining[0x1A0];
};

struct Obj_80362DE8 {
    u8 pad0[0x40]; u32 flags; u8 pad44[8]; f32 f4C; u8 pad50[8]; s32 i58; u8 pad5C[4]; u8 v60[0x10]; void *fn70; void *fn74;
};

struct VBase_18_c22f9c
{
  char pad[0x18];
};

struct VObj_18_c22f9c : VBase_18_c22f9c {
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
    virtual void m63(s32, void *);
};

struct T_80362C80
{
  u8 pad0[0xF0];
  VObj_18_c22f9c *obj;
};

struct S_80362C80
{
  s32 v;
};

extern "C" {
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E0258;
void TObjPlayer__sub_80362C28(u8 *arg0);
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E025C;
void TObjPlayer__sub_80362C54(u8 *arg0);
void * TObjPlayer__sub_80362CFC(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80362D38(u8 *arg0);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 TOHangerMachine01__sub_803D9C00(void *);
extern RecoveredGlobal_803626A8_lbl_80479FBC lbl_80479FBC;
extern RecoveredGlobal_803626A8_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D5678;
void TObjPlayer__sub_803626A8(u8 *arg0, s32 arg1, s32 arg2);
u8 * __dt__9TObjEneDDFv(void *, s16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __destroy_arr(void *, void *, int, int);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK __vt__14TObjEneEpsilon[];
u8 *TObjEneEpsilon__vt0(u8 *arg0, s16 arg1);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void get_weapon_color__11TItemWeaponFPv(void *, void *);
void TObjPlayer__sub_8032E648();
void create_network_object__10TObjPlayerFiPvi();
extern const f32 lbl_805E0260;
void TObjPlayer__sub_80362DE8(void *arg0, Obj_80362DE8 *arg1);
s32 spawn_particle_effect(void *, s32);
s32 has_valid_handle__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_801D2EA8(void *);
extern s32 lbl_804A2B50[];
void TObjPlayer__sub_80362C80(T_80362C80 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);
void *TObjEneEpsilon__ct(void *arg0);
void TObjPlayer__sub_8012A884(void *);
void __construct_array(void *, void *, void *, int, int);
void check_state_flag_4__9TObjEneDDFPv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);

extern M2C_UNK __vt__14TObjEneEpsilon[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern void *lbl_805D4468;

typedef char RecoveredGlobal_803626A8_lbl_80479FBC_size[sizeof(RecoveredGlobal_803626A8_lbl_80479FBC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_803626A8_lbl_8058D490_size[sizeof(RecoveredGlobal_803626A8_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjPlayer__sub_803626A8(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_803626A8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_803626A8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_803626A8, sp10) == 0x8) ? 1 : -1];
    Stack_803626A8 stack;
    stack.sp8 = M2C_FIELD(&lbl_80479FBC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80479FBC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80479FBC.value, s32 *, 8);
    push_matrix_from((void *) (&lbl_8058D490.value));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    pop_matrix();
    push_matrix_from((void *) (lbl_805D5678 + (arg2 * 0x30)));
    TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    pop_matrix();
}

typedef char RecoveredGlobal_80362B48___vt__14TObjEneEpsilon_size[sizeof(RecoveredGlobal_80362B48___vt__14TObjEneEpsilon) == 0x1A4 ? 1 : -1];
u8 *TObjEneEpsilon__vt0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80362B48___vt__14TObjEneEpsilon *)&__vt__14TObjEneEpsilon).value;
        __destroy_arr((void *) (arg0 + 0x3C0), (void *) (&TObjPlayer__sub_800D7C58), (int) (0x1C), (int) (4));
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void *TObjEneEpsilon__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneEpsilon;
    __construct_array((void *)((char *)arg0 + 960), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4468;
    check_state_flag_4__9TObjEneDDFPv(arg0);
    return arg0;
}

extern M2C_UNK lbl_804F26E0[];

void TObjPlayer__sub_80362C28(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (f32) (lbl_805E0258));
}

void TObjPlayer__sub_80362C54(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (f32) (lbl_805E025C));
}

typedef struct S_80362C80 S_80362C80;
typedef struct T_80362C80 T_80362C80;
typedef struct VBase_18_c22f9c VBase_18_c22f9c;
typedef struct VObj_18_c22f9c VObj_18_c22f9c;
void TObjPlayer__sub_80362C80(T_80362C80 *arg0) {
  u8 sp8[0x10];
  s32 n;
  arg0->obj->m63(lbl_804A2B50[(has_valid_handle__10TObjPlayerFPv(arg0->obj) * 3) + TObjPlayer__sub_801D2EA8(((u8 *) arg0->obj) + 0x7CC)], sp8);
  spawn_particle_effect(sp8, 0x1D0);
}

void *TObjPlayer__sub_80362CFC(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
    return arg0;
}
u8 *TObjPlayer__sub_80362D38(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TObjPlayer__sub_80362CFC((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern M2C_UNK lbl_804F26E0[];

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void TObjPlayer__sub_80362DE8(void *arg0, Obj_80362DE8 *arg1) {
    u8 sp8[16];
    arg1->f4C = lbl_805E0260;
    arg1->i58 = 0xC000;
    arg1->flags |= 0x282;
    get_weapon_color__11TItemWeaponFPv(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->fn74 = (void *)create_network_object__10TObjPlayerFiPvi;
    arg1->fn70 = (void *)TObjPlayer__sub_8032E648;
}

}
