#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct { f32 x, y, z; } Vec_8011EB84;
struct Atk_8011EB84 {
    Vec_8011EB84 pos;
    u8 pad0C[0x10];
    f32 scale;
    u8 pad20[4];
    s32 type;
    s32 angle;
    Vec_8011EB84 dir;
    f32 f38;
    f32 f3C;
    u32 flags;
    void *owner;
    s32 id;
    u8 pad4C[0x78 - 0x4C];
};

struct Base_8011EB84 { u8 pad[0x18]; };

struct Wpn_8011EB84 : Base_8011EB84 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual s32 m33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void m57(Atk_8011EB84 *);
};

struct Node_8011EB84 { u8 b[0x2C]; };

struct Skel_8011EB84 { u8 pad[0x1C]; Node_8011EB84 n[1]; };

typedef struct A12_8011E3E8 { s32 a; s32 b; s32 c; } A12_8011E3E8;

typedef struct A16_8011E3E8 { s32 a; s32 b; s32 c; s32 d; } A16_8011E3E8;

typedef struct Obj_8011E3E8 { u8 pad[0xF0]; s32 f0; } Obj_8011E3E8;

struct Vec_8011EAB8 { f32 x, y, z; };

struct Params_8011EAB8 {
    Vec_8011EAB8 pos;
    u8 pad0C[0x28 - 0x0C];
    f32 f28;
    u8 pad2C[0x34 - 0x2C];
    s32 f34;
    s32 f38;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 * get_weapon_range_record(void *, s16);
void restore_action_type__11TItemWeaponFPv(u8 *arg0);
void remap_extra_attack_type(u8 *arg0);
void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1);
void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 is_active_in_game__10TObjPlayerFPv(void *);
s16 is_status_subsystem_ready__10TObjPlayerFPv(s32);
void * get_extended_state__10TObjPlayerFPv(void *);
s16 TObjPlayer__sub_80121238(void *);
u16 get_uid__10TObjPlayerFPv(void *);
void * TObjPlayer__sub_80121248(void *, s32);
s32 TObjPlayer__sub_8012125C(void *);
u8 *find_entity_by_id(s32);
void create__14TItemAttackColFPvPv(s32, void *);
void TObjPlayer__sub_802E449C(void *);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK transform_point_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
extern M2C_UNK identity_matrix[];
extern s32 tl_05;
extern const f32 lbl_805DAC94;
void fire_shot_at_target__11TItemWeaponFv(u8 *arg0, Vec_8011EB84 *origin, void *owner, s32 angle);
u32 __nw__7TObjectFUl(u32);
void construct_actor_light_task(u32, void *, void *, s32, s32, s32, f32);
extern A12_8011E3E8 lbl_8043E838[];
extern A16_8011E3E8 lbl_8043E844[];
extern s32 tl_07;
extern const f32 lbl_805DAC88;
void spawn_light_task__10TObjPlayerFPv(Obj_8011E3E8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
void restore_action_type__11TItemWeaponFPv(u8 *arg0);
void remap_extra_attack_type(u8 *arg0);
void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 is_active_in_game__10TObjPlayerFPv(void *);
void create__10TItemEffPGFPvPvPv(s32, Params_8011EAB8 *, s32);
void create__10TItemEffPGFPvPv(s32, Params_8011EAB8 *);
void init_params__10TItemEffPGFPv(Params_8011EAB8 *);
extern s32 tl_05;
void spawn_pg_effect__10TObjPlayerFPvPvif(u8 *arg0, Vec_8011EAB8 *arg1, s32 arg2, f32 farg0);
}

extern "C" {

struct VBase_8011E2AC { char pad[0x18]; };

struct VObj_8011E2AC : VBase_8011E2AC {
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
    virtual s32 m30();
};

struct Base_8011E384 { char pad[0x18]; };

struct VObj_8011E384 : Base_8011E384 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();virtual void m7();
    virtual void m8();virtual void m9();virtual void m10();virtual void m11();
    virtual void m12();virtual void m13();virtual void m14();virtual void m15();
    virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();
    virtual void m24();virtual void m25();virtual void m26();virtual void m27();
    virtual void m28();virtual void m29();virtual void m30();virtual void m31();
    virtual void m32();
    virtual int m35();
};

struct Stack_8011E56C {
    M2C_UNK sp8;
    f32 spC;
};

struct VBase18c_8011e6e8 { char pad[0x18]; };

struct VObj18c_8011e6e8 : VBase18c_8011e6e8 {
    virtual M2C_UNK m0();  virtual M2C_UNK m1();  virtual M2C_UNK m2();
    virtual M2C_UNK m3();  virtual M2C_UNK m4();  virtual M2C_UNK m5();
    virtual M2C_UNK m6();  virtual M2C_UNK m7();  virtual M2C_UNK m8();
    virtual M2C_UNK m9();  virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14();
    virtual M2C_UNK m15(); virtual M2C_UNK m16(); virtual M2C_UNK m17();
    virtual M2C_UNK m18(); virtual M2C_UNK m19(); virtual M2C_UNK m20();
    virtual M2C_UNK m21(); virtual M2C_UNK m22(); virtual M2C_UNK m23();
    virtual M2C_UNK m24(); virtual M2C_UNK m25(); virtual M2C_UNK m26();
    virtual M2C_UNK m27(); virtual M2C_UNK m28(); virtual M2C_UNK m29();
    virtual M2C_UNK m30(); virtual M2C_UNK m31(); virtual M2C_UNK m32();
    virtual M2C_UNK m33(); virtual M2C_UNK m34(); virtual M2C_UNK m35();
    virtual M2C_UNK m36(); virtual M2C_UNK m37(); virtual M2C_UNK m38();
    virtual M2C_UNK m39(); virtual M2C_UNK m40(); virtual M2C_UNK m41();
    virtual M2C_UNK m42(); virtual M2C_UNK m43(); virtual M2C_UNK m44();
    virtual M2C_UNK m45(); virtual M2C_UNK m46(); virtual M2C_UNK m47();
    virtual M2C_UNK m48(); virtual M2C_UNK m49(); virtual M2C_UNK m50();
    virtual M2C_UNK m51(); virtual M2C_UNK m52(); virtual M2C_UNK m53();
    virtual M2C_UNK m54(); virtual M2C_UNK m55(); virtual M2C_UNK m56();
    virtual M2C_UNK m57(); virtual M2C_UNK m58(); virtual M2C_UNK m59();
    virtual M2C_UNK m60(); virtual M2C_UNK m61(); virtual M2C_UNK m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

struct Base_8011E828 { char pad[0x18]; };

struct VObj_8011E828 : Base_8011E828 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual s32 m33();
};

struct Base_8011E77C { char pad[0x18]; };

struct VObj_8011E77C : Base_8011E77C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
};

struct Vec_8011E87C { f32 x, y, z; };

struct Pl_8011E87C {
    u8 pad0[0xF0];
    void *owner;
    u8 padF4[0x18C - 0xF4];
    void *trails[4];
    s8 iconA[4];
    s8 iconB[4];
};

struct Pl_8011E950 {
    u8 pad0[0x174];
    u32 x174;
    u8 pad178[0x18C - 0x178];
    void *eff[4];
    s8 kind[4];
};

typedef struct V4_8011EA10 { f32 a; f32 b; f32 c; f32 d; } V4_8011EA10;

struct Obj_8011F474 { u8 pad0[0x38]; f32 pos[3]; };

struct Base_8011F474 { u8 pad0[0x18]; };

struct Pl_8011F474 : Base_8011F474 {
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
    virtual void on_near(Obj_8011F474 *, Obj_8011F474 *, s16, s16);
};

struct PlSelf_8011F474 : Pl_8011F474 {
    u8 pad1C[0xF0 - 0x1C];
    Obj_8011F474 *owner;
};

struct ShotVector { f32 x,y,z; };

struct ShotPayload { s32 reserved,kind,weapon; s16 source,target,collider,pad; f32 damage; };

struct Rec_8011F108 { u8 pad0[0xC]; f32 c; u8 pad1[0xC]; ShotVector pos; u8 pad2[4]; };

struct ShotStack { ShotVector rayOrigin,fallback,endpoint; ShotPayload hit; };

struct Obj_8011F474;

struct Vec_8011EDFC { f32 x; f32 y; f32 z; };

struct Part_8011EDFC { u8 pad0[0x1C]; Vec_8011EDFC pos; u8 pad28[4]; };

struct Obj_8011EDFC { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0xA4 - 0x44]; Part_8011EDFC *parts; };

struct Hit_8011EDFC { u8 pad0[4]; void *pos; };

struct Spawn_8011EDFC { s32 a; s32 b; s32 c; s16 d; s16 e; s16 f; f32 g; };

struct Self_8011EDFC;

typedef void (*Cb_8011EDFC)(Self_8011EDFC *, void *, Vec_8011EDFC *, f32);

struct Owner_8011EDFC { u8 pad0[0x60]; void *rot; };

struct Self_8011EDFC {
    u8 pad0[0xF0];
    u8 *owner;
    u8 padF4[0x1E4 - 0xF4];
    f32 speed;
    u8 pad1E8[0x1F0 - 0x1E8];
    Cb_8011EDFC cb;
};

int memcpy(void*, void*, void*);
M2C_UNK TObjectV8047c128_subtract_hp(u32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, M2C_UNK);
s16 obj_getField1c(void *);
s32 get_mode__11TCameraCtrlFPv(void *);
s16 get_field_2b8__14TItemProShieldFPv(u32);
u8 * csnVector(void *, void *, M2C_UNK);
s32 test_action_mask__10TObjPlayerFPvi(void *, s32);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 fn_80100CC8(Pl_8011E87C *);
s32 is_flag_400__10TObjPlayerFPv(void *);
s32 is_mag_active__10TObjPlayerFPv(void *);
void send_6x61_activate_mag_effect(void *, s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, M2C_UNK *);
s8 TObjPlayer__sub_80102C30(void *);
M2C_UNK spawn_item_attacker(int, void *, int, void *);
s32 test_flags_1b8__10TObjPlayerFPvUi(void *, s32);
M2C_UNK spawn_land_hit_effect(int, void *, void *, void *, int);
M2C_UNK init__9TItemDataFv(M2C_UNK *);
M2C_UNK check_item_flags__9TItemDataFPv(M2C_UNK *);
M2C_UNK get_weapon_special_type_amount(s32, s16 *, s16 *);
f32 * get_weapon_range_record(void *, s16);
void set_weapon_category_flags(u8 *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *arg0);
void restore_action_type__11TItemWeaponFPv(u8 *arg0);
void remap_extra_attack_type(u8 *arg0);
void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1);
void TItemWeapon__sub_8011E5C0(void);
void TItemWeapon__sub_8011E5C4(void);
void TItemWeapon__sub_8011E5C8(void);
void TItemWeapon__sub_8011E5CC(void);
void TItemWeapon__sub_8011E5D0(void);
void TItemWeapon__sub_8011E5D4(void);
void TItemWeapon__sub_8011E5D8(void);
void TItemWeapon__sub_8011E5DC(void);
void weapon_prepare_marker_noop(void);
void TItemWeapon__sub_8011E610(void* p, s32 v);
void TObjPlayer__sub_8011E618(u8 *arg0);
void set_flag_8_if_check_passes__10TObjPlayerFPv(u8 *arg0);
u8 * get_motion_ptr__11TItemWeaponFPv(u8 *arg0);
void call_callback_1ec__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
void apply_model_params__10TObjPlayerFPv(void *arg0);
void copy_item_to_data__11TItemWeaponFi(s32 arg0);
void update_model_flags__11TItemWeaponFPv(struct VObj_8011E828 *o);
void update_trail_slot__11TItemWeaponFPvi(Pl_8011E87C *self, s32 slot);
void create_weapon_trail_effects(Pl_8011E950 *arg0);
u32 pack_weapon_trail_color(void *arg0);
void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 launch_shot__11TItemWeaponFPvPviii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4);
void for_each_target_in_range__10TObjPlayerFPvf(PlSelf_8011F474 *self, f32 range);
s32 is_active_in_game__10TObjPlayerFPv(void *);
V4_8011EA10 get_weapon_color__11TItemWeaponFPv(void *);
void draw_icon__10TObjPlayerFPvii(void *, s32, Vec_8011E87C *);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
M2C_UNK clear_equip_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_flag_8__10TObjPlayerFPv(int);
M2C_UNK set_model_param__10TObjPlayerFPvs(void *, s16);
M2C_UNK set_model_id__10TObjPlayerFPvs(void *, s16);
s16 is_status_subsystem_ready__10TObjPlayerFPv(s32);
void * get_extended_state__10TObjPlayerFPv(void *);
void query_extended_state__10TObjPlayerFPv(void *);
M2C_UNK set_action_type__10TObjPlayerFPvs(int, int);
f32 get_attack_accuracy_scale(s32);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80121228(void *, M2C_UNK);
s16 TObjPlayer__sub_80121238(void *);
u16 get_uid__10TObjPlayerFPv(void *);
void * TObjPlayer__sub_80121248(void *, s32);
s32 TObjPlayer__sub_8012125C(void *);
f32 horizontal_distance_squared(void *, void *);
Obj_8011F474 * resolve_hittable_target(s32, s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
s16 TObjPlayer__sub_801D2F4C(int);
void push_trail_interpolated__17TItemEffectWeaponFv(void *, Vec_8011E87C *, Vec_8011E87C *);
void * __ct__17TItemEffectWeaponFv(void *, u32, u32);
void * alloc__13TItemProArmorFi(M2C_UNK);
u32 __cvt_fp2unsigned(f32);
s32 rand(void);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK subtract_vector(void *, void *);
f32 normalize_vector(void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK transform_point_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
f32 xyz_distance(void *, void *);

extern M2C_UNK identity_matrix[];
extern const f32 lbl_805DAC8C;
extern const f32 lbl_805DAC90;
extern const f32 lbl_805DAC98;
extern u8 main_task[];
extern s32 tl_05;

void set_weapon_category_flags(u8 *arg0) {
    s32 r = ((VObj_8011E2AC *)arg0)->m30();
    u32 flags = 0x10000;
    if (r & 1) {
        flags = 0x20000;
    }
    set_status_flags__10TObjPlayerFPvUi(arg0, flags);
}

void drain_owner_hp_fraction__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    if (M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, u32 *, 0xF0), (s32) (farg0 * (f32) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, u32 *, 0xF0))));
    }
}

s32 is_mode_two_and_ready__10TObjPlayerFPv(void *arg0) {
    if ((is_status_subsystem_ready__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0)) == 2) &&
        (((VObj_8011E384 *)arg0)->m35() == 1)) {
        return 1;
    }
    return 0;
}

void spawn_light_task__10TObjPlayerFPv(Obj_8011E3E8 *arg0) {
    A12_8011E3E8 a = lbl_8043E838[0];
    A16_8011E3E8 b = lbl_8043E844[0];
    u32 p = __nw__7TObjectFUl(0x64);
    if (p != 0) {
        ((void (*)(f32, u32, void *, void *, s32, s32, s32))construct_actor_light_task)(lbl_805DAC88, p, &b, &a, 1, arg0->f0, tl_07);
    }
}

void restore_action_type__11TItemWeaponFPv(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x04000000) != 0U) {
        set_action_type__10TObjPlayerFPvs((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (int) (2));
        clear_equip_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x04000000));
    }
}

void remap_extra_attack_type(u8 *arg0) {
    if ((test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x20) != 0U) && (TObjPlayer__sub_801D2F4C((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC)) == 2)) {
        if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x100000) != 0U) {
            set_action_type__10TObjPlayerFPvs((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (int) (0));
        } else {
            set_action_type__10TObjPlayerFPvs((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (int) (1));
        }
        ((M2C_UNK (*)(void *, int))set_status_flags__10TObjPlayerFPvUi)((void *) (arg0), (int) (0x04000000));
    }
}

void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1) {
    Stack_8011E56C stack;
    ((M2C_UNK (*)(void *, int))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x2FC));
    stack.spC = M2C_FIELD(arg1, f32 *, 4);
    ((M2C_UNK (*)(void *, void *, int))csnVector)((void *) (&stack.sp8), (void *) (arg1), (int) (0x8100));
}

void TItemWeapon__sub_8011E5C0(void) {  }

void TItemWeapon__sub_8011E5C4(void) {  }

void TItemWeapon__sub_8011E5C8(void) {  }

void TItemWeapon__sub_8011E5CC(void) {  }

void TItemWeapon__sub_8011E5D0(void) {  }

void TItemWeapon__sub_8011E5D4(void) {  }

void TItemWeapon__sub_8011E5D8(void) {  }

void TItemWeapon__sub_8011E5DC(void) {  }

void weapon_prepare_marker_noop(void) {  }

void copy_field6_from__10TObjPlayerFPvPv(void* p, void* a1) { memcpy((char*)p + 0x6, (char*)a1 + 0x1a4, (void*)6); }

void TItemWeapon__sub_8011E610(void* p, s32 v) { *(s32*)((char*)p + 0x1bc) = v; }

void TObjPlayer__sub_8011E618(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C0) = (s32) M2C_FIELD(arg0, s32 *, 0x1BC);
    send_6x61_activate_mag_effect(arg0, (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x1C4) * (lbl_805DAC8C * (f32) rand())));
}

void set_flag_8_if_check_passes__10TObjPlayerFPv(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    if (arg0 != NULL) {
        var_r31 = (u8 *)(arg0);
        if (TObjPlayer__sub_80102C30(arg0) != 0) {
            var_r3 = (u8 *)(var_r31);
            set_flag_8__10TObjPlayerFPv((int) (var_r3));
        }
    }
}

u8 *get_motion_ptr__11TItemWeaponFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xF0));
    if (temp_r3 != NULL) {
        ((VObj18c_8011e6e8 *) temp_r3)->m63(0x30, arg0 + 0x1AC);
    }
    return arg0 + 0x1AC;
}

void call_callback_1ec__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r12)(s32, void *, s32, s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, void *, s32, s32), 0x1EC);
    if (temp_r12 != NULL) {
        temp_r12(tl_05, arg0, arg1, arg2);
    }
}

void apply_model_params__10TObjPlayerFPv(void *arg0) {
    s16 spA;
    s16 sp8;
    void *temp_r3;

    get_weapon_special_type_amount(M2C_FIELD(arg0, u8 *, 0x1D2) & 0x3F, &spA, &sp8);
    set_model_id__10TObjPlayerFPvs(M2C_FIELD(arg0, void **, 0xF0), spA);
    set_model_param__10TObjPlayerFPvs(M2C_FIELD(arg0, void **, 0xF0), sp8);
    temp_r3 = M2C_FIELD(arg0, void **, 0xF0);
    ((VObj_8011E77C *)temp_r3)->m71();
}

void copy_item_to_data__11TItemWeaponFi(s32 arg0) {
    M2C_UNK sp8[5];

    init__9TItemDataFv(sp8);
    copy_to_item_data__5TItemFPvPv(arg0, sp8);
    check_item_flags__9TItemDataFPv(sp8);
}

void update_model_flags__11TItemWeaponFPv(struct VObj_8011E828 *o) {
    if (o->m33() == 0) {
        M2C_FIELD(o, u8 *, 0x1D2) = M2C_FIELD(o, u8 *, 0x1D2) & 0x7F;
    }
    apply_model_params__10TObjPlayerFPv((void *)(o));
}

void update_trail_slot__11TItemWeaponFPvi(Pl_8011E87C *self, s32 slot) {
    Vec_8011E87C a;
    Vec_8011E87C b;
    if (fn_80100CC8(self) != 0 && is_flag_400__10TObjPlayerFPv(self) == 0 &&
        test_action_mask__10TObjPlayerFPvi(self->owner, 0xE0) != 0 &&
        is_flag_b0_4__10TObjPlayerFPv(self->owner) == 0 &&
        !(get_mode__11TCameraCtrlFPv(main_task) & 0x78)) {
        if (self->trails[slot] != NULL) {
            draw_icon__10TObjPlayerFPvii(self, self->iconA[slot], &a);
            draw_icon__10TObjPlayerFPvii(self, self->iconB[slot], &b);
            push_trail_interpolated__17TItemEffectWeaponFv(self->trails[slot], &a, &b);
        }
    }
}

void create_weapon_trail_effects(Pl_8011E950 *arg0) {
    u32 flags;
    s32 i;
    flags = pack_weapon_trail_color((void *)(arg0)) & 0x8FFFFFFF;
    if (arg0->x174 != 0U) {
        for (i = 0; i != 4; i++) {
            if (arg0->kind[i] != -1) {
                void *p = alloc__13TItemProArmorFi(0x2C);
                if (p != NULL) {
                    p = __ct__17TItemEffectWeaponFv(p, arg0->x174, flags);
                }
                arg0->eff[i] = p;
            }
            if (arg0->eff[i] != NULL && obj_testFlags30(arg0, 0x2000) != 0) {
                TObjPlayer__sub_80121228(arg0->eff[i], 1);
            }
        }
    }
}

u32 pack_weapon_trail_color(void *arg0) {
    V4_8011EA10 w = get_weapon_color__11TItemWeaponFPv(arg0);
    return (__cvt_fp2unsigned(lbl_805DAC90 * w.a) << 24 | __cvt_fp2unsigned(lbl_805DAC90 * w.b) << 16 | __cvt_fp2unsigned(lbl_805DAC90 * w.c) << 8) | __cvt_fp2unsigned(lbl_805DAC90 * w.d);
}

void spawn_pg_effect__10TObjPlayerFPvPvif(u8 *arg0, Vec_8011EAB8 *arg1, s32 arg2, f32 farg0) {
    Params_8011EAB8 prm;
    if (arg2 < 0 || arg2 >= 200) {
        return;
    }
    if (is_active_in_game__10TObjPlayerFPv(arg0) == 0) {
        return;
    }
    remap_extra_attack_type(arg0);
    init_params__10TItemEffPGFPv(&prm);
    fill_status_info__10TObjPlayerFPvPv(arg0, &prm);
    VecCopy__FP3VecPC3Vec(&prm.pos, arg1);
    prm.f28 = farg0;
    prm.f34 = *(s32 *)(arg0 + 0x188);
    prm.f38 = *(s32 *)(arg0 + 0x24);
    if (is_locally_controlled__10TObjPlayerFPv(*(s32 *)(arg0 + 0xF0)) != 0) {
        create__10TItemEffPGFPvPv(tl_05, &prm);
    } else {
        create__10TItemEffPGFPvPvPv(tl_05, &prm, arg2);
    }
    restore_action_type__11TItemWeaponFPv(arg0);
}

void fire_shot_at_target__11TItemWeaponFv(u8 *arg0, Vec_8011EB84 *origin, void *owner, s32 angle) {
    Vec_8011EB84 v;
    Atk_8011EB84 atk;
    f32 *scale;
    s32 state;
    s32 item;
    u8 *ph;
    u8 *hit;
    s32 off;
    if (((s32 (*)())is_active_in_game__10TObjPlayerFPv)() != 0) {
        scale = ((f32 *(*)(void *, s32))get_weapon_range_record)(arg0, ((s32 (*)(void *))is_status_subsystem_ready__10TObjPlayerFPv)(M2C_FIELD(arg0, void **, 0xF0)));
        TObjPlayer__sub_802E449C(&atk);
        fill_status_info__10TObjPlayerFPvPv(arg0, &atk);
        VecCopy__FP3VecPC3Vec(&atk, origin);
        atk.angle = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60) + angle;
        atk.f3C = *scale;
        atk.f38 = M2C_FIELD(arg0, f32 *, 0x1E4);
        atk.owner = owner;
        atk.id = M2C_FIELD(arg0, s32 *, 0x24);
        ((Wpn_8011EB84 *)arg0)->m57(&atk);
        remap_extra_attack_type(arg0);
        hit = ((u8 *(*)(void *, void *))TObjPlayer__sub_8011E56C)(arg0, origin);
        if (hit != NULL) {
            VecCopy__FP3VecPC3Vec(&atk, M2C_FIELD(hit, void **, 4));
            atk.flags |= 0x800;
        } else if ((state = (s32)get_extended_state__10TObjPlayerFPv(M2C_FIELD(arg0, void **, 0xF0))) != 0 && TObjPlayer__sub_8012125C((void *)state) > 0) {
            if ((item = (s32)TObjPlayer__sub_80121248((void *)state, 0)) != 0) {
                if ((ph = ((u8 *(*)(s32))find_entity_by_id)(((s32 (*)(s32))get_uid__10TObjPlayerFPv)(item))) != NULL && M2C_FIELD(ph, u8 **, 0xA4) != NULL) {
                    VecCopy__FP3VecPC3Vec(&v, &M2C_FIELD(ph, Skel_8011EB84 **, 0xA4)->n[TObjPlayer__sub_80121238((void *)item)]);
                    subtract_vector(&v, origin);
                    push_matrix_from(((s32 *)&identity_matrix));
                    ((void (*)(s32, s32))rotate_matrix_y)(0, angle);
                    transform_point_by_current_matrix(&v, &atk.dir);
                    atk.flags |= 1;
                    pop_matrix();
                }
            }
        }
        if (atk.type == 2 && ((Wpn_8011EB84 *)arg0)->m33() == 0) {
            atk.scale *= lbl_805DAC94;
        }
        create__14TItemAttackColFPvPv(tl_05, &atk);
        restore_action_type__11TItemWeaponFPv(arg0);
    }
}

void fill_status_info__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    ((M2C_UNK (*)(void))remap_extra_attack_type)();
    M2C_FIELD(arg1, s16 *, 0x14) = ((s16 (*)(s32))obj_getField1c)(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s16 *, 0x16) = get_stat_by_key_state__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s32 *, 0x18) = get_field_d8__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = get_attack_accuracy_scale(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) is_status_subsystem_ready__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, f32 *, 0x20) = ((f32 (*)(s32))query_extended_state__10TObjPlayerFPv)(M2C_FIELD(arg0, s32 *, 0xF0));
    ((M2C_UNK (*)(void *))restore_action_type__11TItemWeaponFPv)(arg0);
}

void launch_rare_weapon_special__10TObjPlayerFv(Self_8011EDFC *self, void *origin, s32 enable, f32 scale) {
    void *ext;
    Vec_8011EDFC pos;
    f32 dist;
    s32 found;

    if (is_active_in_game__10TObjPlayerFPv(self) == 0) {
        return;
    }
    ext = get_extended_state__10TObjPlayerFPv(self->owner);
    if (ext == NULL) {
        return;
    }
    if (origin == NULL) {
        origin = self->owner + 0x2FC;
    }
    found = 0;
    if (TObjPlayer__sub_8012125C(ext) != 0) {
        void *e = TObjPlayer__sub_80121248(ext, TObjPlayer__sub_8012125C(ext) - 1);
        Obj_8011EDFC *t = ((Obj_8011EDFC *(*)(u16, s16))resolve_hittable_target)(get_uid__10TObjPlayerFPv(e), TObjPlayer__sub_80121238(e));
        if (t != NULL) {
            Part_8011EDFC *part = &t->parts[TObjPlayer__sub_80121238(e)];
            VecCopy__FP3VecPC3Vec(&pos, &part->pos);
            found = 1;
        }
    }
    if (found == 0) {
        Vec_8011EDFC v;
        f32 *rec;
        push_matrix_from(identity_matrix);
        rec = get_weapon_range_record(self, 2);
        v.x = v.y = lbl_805DAC98;
        v.z = rec[0];
        rotate_matrix_y(0, ((Owner_8011EDFC *)self->owner)->rot);
        transform_point_by_current_matrix(&v, &pos);
        pop_matrix();
        vec3_add_to(&pos, origin);
    }
    {
        Hit_8011EDFC *hit = (Hit_8011EDFC *)csnVector(origin, &pos, 0x8100);
        if (hit != NULL) {
            dist = xyz_distance(origin, hit->pos);
        } else {
            dist = xyz_distance(origin, &pos);
        }
    }
    if (enable != 0) {
        for (s32 i = 0; i != TObjPlayer__sub_8012125C(ext); i++) {
            void *e = TObjPlayer__sub_80121248(ext, i);
            Obj_8011EDFC *t = ((Obj_8011EDFC *(*)(u16, s16))resolve_hittable_target)(get_uid__10TObjPlayerFPv(e), TObjPlayer__sub_80121238(e));
            if (t != NULL) {
                Part_8011EDFC *part = &t->parts[TObjPlayer__sub_80121238(e)];
                void *e2 = TObjPlayer__sub_80121248(ext, i);
                Spawn_8011EDFC sp;
                sp.a = 0;
                sp.b = 1;
                sp.d = obj_getField1c(self->owner);
                sp.e = obj_getField1c(t);
                sp.c = get_field_d8__10TObjPlayerFPv(self);
                sp.f = TObjPlayer__sub_80121238(e2);
                sp.g = scale * ((f32 (*)(void *))query_extended_state__10TObjPlayerFPv)(self->owner);
                spawn_item_attacker(tl_05, self->owner + 0x38,
                                    (s32)(xyz_distance(origin, &part->pos) / self->speed), &sp);
            }
        }
    }
    s32 n = (s32)(dist / self->speed);
    if (n < 0) {
        n = 0;
    }
    if (self->cb != NULL && is_mag_active__10TObjPlayerFPv(self) == 1) {
        self->cb(self, origin, &pos, (f32)n);
    }
}

s32 launch_shot__11TItemWeaponFPvPviii(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_r31;
    ShotPayload hit;
    f32 *temp_r3_2;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_r4;
    f32 var_f31;
    s16 temp_r29;
    s32 var_r23;
    u8* temp_r22;
    u8* temp_r22_3;
    u8* temp_r3;
    s32 temp_r6;
    u8 *temp_r22_2;
    u8 *temp_r3_3;
    u8 *temp_r7;
    u8 *var_r29;
    var_r31 = 0;
    if (is_active_in_game__10TObjPlayerFPv((void *)(arg0)) != 0) {
        temp_r3 = (u8 *)get_extended_state__10TObjPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
        if (temp_r3 != 0) {
            var_r23 = 0;
            var_r29 = (u8 *)(NULL);
            ShotVector endpoint = *(ShotVector *)arg1;
            if (arg2 < TObjPlayer__sub_8012125C(temp_r3)) {
                temp_r22 = (u8 *)TObjPlayer__sub_80121248(temp_r3,arg2);
                var_r29 = (u8 *)(((Obj_8011F474 *(*)(s32, s16))resolve_hittable_target)(((s32 (*)(void *))get_uid__10TObjPlayerFPv)(temp_r22),TObjPlayer__sub_80121238(temp_r22)));
                if (var_r29 != NULL) {
                    temp_r22_2 = (u8 *)&M2C_FIELD(var_r29, Rec_8011F108 **, 0xA4)[TObjPlayer__sub_80121238(temp_r22)];
                    VecCopy__FP3VecPC3Vec((void *) (&endpoint.x), (void *) &((Rec_8011F108 *)temp_r22_2)->pos);
                    subtract_vector((void *) (&endpoint.x), (void *) (arg1));
                    temp_f3 = normalize_vector((void *) (&endpoint.x)) - M2C_FIELD(temp_r22_2, f32 *, 0xC);
                    endpoint.x *= temp_f3;
                    endpoint.y *= temp_f3;
                    endpoint.z *= temp_f3;
                    vec3_add_to((void *) (&endpoint.x), (void *) (arg1));
                    var_r23 = 1;
                }
            }
            if (var_r23 == 0) {
                ShotVector fallback;
                push_matrix_from((void *) (identity_matrix));
                temp_r3_2 = (f32 *)(get_weapon_range_record(arg0, ((s16 (*)(void *))is_status_subsystem_ready__10TObjPlayerFPv)((void *) (M2C_FIELD(arg0, u8 **, 0xF0)))));
                fallback.y = lbl_805DAC98;
                fallback.x = lbl_805DAC98;
                fallback.z = M2C_FIELD(temp_r3_2, f32 *, 0);
                rotate_matrix_y((int) (0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60) + arg3));
                transform_point_by_current_matrix((void *) (&fallback.x), (void *) (&endpoint.x));
                pop_matrix();
                vec3_add_to((void *) (&endpoint.x), (void *) (arg1));
            }
            temp_r7 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xF0));
            ShotVector rayOrigin = *(ShotVector *)(temp_r7 + 0x2FC);
            rayOrigin.y = M2C_FIELD(arg1, f32 *, 4);
            temp_r3_3 = (u8 *)(csnVector(&rayOrigin.x, &endpoint.x, 0x8100));
            if (temp_r3_3 == NULL) {
                if (var_r29 != NULL) {
                    temp_r22_3 = (u8 *)TObjPlayer__sub_80121248(temp_r3,arg2);
                    temp_r22_2 = (u8 *)&M2C_FIELD(var_r29, Rec_8011F108 **, 0xA4)[TObjPlayer__sub_80121238(temp_r22_3)];
                    var_f31 = xyz_distance((void *) (arg1), (void *) &((Rec_8011F108 *)temp_r22_2)->pos) / M2C_FIELD(arg0, f32 *, 0x1E4);
                    if (arg4 != 0) {
                        ((void (*)(void *))remap_extra_attack_type)((void *) (arg0));
                        hit.reserved = 0;
                        hit.kind = (s32) ((s16 (*)(void *))is_status_subsystem_ready__10TObjPlayerFPv)((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        hit.source = obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        hit.target = obj_getField1c((void *) (var_r29));
                        hit.weapon = get_field_d8__10TObjPlayerFPv((void *) (arg0));
                        hit.collider = TObjPlayer__sub_80121238(temp_r22_3);
                        hit.damage = ((f32 (*)(void *))query_extended_state__10TObjPlayerFPv)((void *) (M2C_FIELD(arg0, u8 **, 0xF0)));
                        spawn_item_attacker((int) (tl_05), (void *) (arg1), (int) ((s32) var_f31), (void *) (&hit.reserved));
                        var_r31 = 1;
                        ((void (*)(void *))restore_action_type__11TItemWeaponFPv)((void *) (arg0));
                    }
                } else {
                    var_f31 = xyz_distance((void *) (arg1), (void *) (&endpoint.x)) / M2C_FIELD(arg0, f32 *, 0x1E4);
                }
            } else {
                VecCopy__FP3VecPC3Vec((void *) (&endpoint.x), (void *) (M2C_FIELD(temp_r3_3, u8 **, 4)));
                var_f31 = xyz_distance((void *) (arg1), (void *) (&endpoint.x)) / M2C_FIELD(arg0, f32 *, 0x1E4);
                if ((M2C_FIELD(M2C_FIELD(temp_r3_3, u8 **, 4), s32 *, 0x18) & 0x100) && ((u32) M2C_FIELD(arg0, u32 *, 0x1EC) != 0U)) {
                    spawn_land_hit_effect((int) (tl_05), (void *) (arg0), (void *) (arg1), (void *) (&endpoint.x), (int) ((s32) var_f31));
                }
            }
            spawn_light_task__10TObjPlayerFPv((Obj_8011E3E8 *)((void *) (arg0)));
            if ((((M2C_UNK (*)(void *, void *, f32 *, f32)) M2C_FIELD(arg0, M2C_UNK (**)(void *, void *, f32 *, f32), 0x1F0)) != NULL) && (is_mag_active__10TObjPlayerFPv((void *) (arg0)) == 1)) {
                M2C_FIELD(arg0, M2C_UNK (**)(void *, void *, f32 *, f32), 0x1F0)(arg0, arg1, &endpoint.x, var_f31);
            }
        }
    }
    return var_r31;
}

void for_each_target_in_range__10TObjPlayerFPvf(PlSelf_8011F474 *self, f32 range) {
    Obj_8011F474 *obj;
    u16 uid;
    void *state;
    s32 i;
    void *ent;
    s32 id;
    s32 ready;
    if (is_active_in_game__10TObjPlayerFPv(self) != 0) {
        ((void (*)(void *))remap_extra_attack_type)(self);
        state = get_extended_state__10TObjPlayerFPv(self->owner);
        if (state != NULL) {
            for (i = 0; i != TObjPlayer__sub_8012125C(state); i++) {
                ent = TObjPlayer__sub_80121248(state, i);
                uid = get_uid__10TObjPlayerFPv(ent);
                id = TObjPlayer__sub_80121238(ent);
                obj = resolve_hittable_target(uid, id);
                if (obj != NULL && horizontal_distance_squared(self->owner->pos, obj->pos) < range) {
                    ready = ((s16 (*)(void *))is_status_subsystem_ready__10TObjPlayerFPv)(self->owner);
                    query_extended_state__10TObjPlayerFPv(self->owner);
                    self->on_near(self->owner, obj, ready, id);
                }
            }
        }
        ((void (*)(void *))restore_action_type__11TItemWeaponFPv)(self);
    }
}

}
