#include "types.h"
#include "pso/player/TUnk_804F0908.h"
#include "pso/player/TUnk_804F0810.h"

struct Base_8034EFDC { char pad[0x18]; };
struct VObj_8034EFDC : Base_8034EFDC {
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
    virtual s16 m14();
};

struct RecoveredGlobal_8034F754_lbl_804F0A00 {
    s32 value;
    u8 remaining[0xF4];
};

struct O_8034F590 { u8 pad[0x40]; u32 flags; u8 pad2[0x70 - 0x44]; void *f70; void *f74; };

struct Elem_80125628 { u8 pad[0x1c]; u8 f1c[0x2c - 0x1c]; };

struct Obj_80125628 { u8 pad[0xa4]; Elem_80125628 *elems; };

struct Ctx_80125628 { Obj_80125628 *obj; s32 idx; };

struct Self_8012573C { u8 pad[0x23c]; u32 f23c; };

struct Out_8012573C { u8 pad[0x40]; u32 f40; u8 pad44[0x50 - 0x44]; s32 f50; u8 pad54[0x70 - 0x54]; void *f70; void *f74; s32 f78; s32 f7c; };

struct P_8034F020 { u8 pad0[0x1F8]; s32 f1F8; };

typedef struct SlicerLaunchData_8012D9C8 {
    u16 player; u16 pad;
    void *textures; void *model; u32 weapon;
    s16 kind, stage; f32 multiplier; f32 color[4];
    s32 facing, spin; f32 first[3], second[3];
} SlicerLaunchData_8012D9C8;

struct Elem_8034F204 { u8 x[0x2C]; };

struct Tbl_8034F204 { u8 pad[0x1C]; Elem_8034F204 arr[1]; };

struct Info_8034F4FC {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x80 - 0x14];
};

extern "C" {
void spawn_fire_explosion_for_item__10TObjPlayerFii(s32 arg0, s32 arg1);
int spawn_nug2000_hit_explosion(void);
u32 find_item_by_id(void);
int spawn_nug2000_hit_explosion(void);
void spawn_fire_explosion_for_item__10TObjPlayerFii(s32 arg0, s32 arg1);
void * enter_timed_state__13TUnk_804F0810FlPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer__sub_8034F1AC(u8 *arg0);
void * construct_rappys_fan__13TUnk_804F0908FlPv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_rappys_fan__10TObjPlayerFPv(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_gi_gue_bazooka__10TObjPlayerFi(s32 arg0);
void TItemWeapon__ct(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
extern s32 lbl_804F0A00[];
u8 *construct_gi_gue_bazooka(u8 *arg0, u8 *arg1, s32 _w2);
void spawn_fire_explosion_for_item__10TObjPlayerFii(s32 arg0, s32 arg1);
void init_fire_explosion_config__10TObjPlayerFPvPv(void *a, O_8034F590 *o);
u32 find_item_by_id(void);
void spawn_fire_explosion_at_item__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 get_player_list__10TObjPlayerFv();
s32 rotate_matrix_z(s32, s32);
void rotate_by_player_list__10TObjPlayerFPv(P_8034F020 *arg0);
void init_slicer_launch_state(SlicerLaunchData_8012D9C8 *);
u16 obj_getField1c(void *);
u32 get_field_d8__10TObjPlayerFv(void *);
s16 TObjPlayer__sub_801D2F4C(void *);
s16 get_validated_attack_stage(void *);
f32 query_extended_state__10TObjPlayerFv(void *);
void get_weapon_color__11TItemWeaponFPv(f32 *, void *);
void copy_vec4__13TRaderMapCoreFPvPv(f32 *, f32 *);
void draw_icon__10TObjPlayerFll(void *, int, f32 *);
u8 *create__10TTecSlicerFPUs(SlicerLaunchData_8012D9C8 *);
extern const f32 lbl_805DFDF8;
void launch_rappys_fan_slicer__10TObjPlayerFPv(u8 *weapon);
s32 spawn_particle_effect(void *, s32);
void *find_entity_by_id(s32);
void spawn_particle_at_entity_slot__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 VecCopy__FP3VecPC3Vec(void *, s32);
s32 fill_status_info__10TObjPlayerFPvPv(u32, void *);
s32 construct_explosion_collider__13TUnk_804A2548Fv(void *, s32, void *);
void *__nw__7TObjectFUl(u32);
s32 create_fire_explosion_effect(void *, void *, s32, s32, f32);
s32 TObjPlayer__sub_802E449C(void *);
extern s32 tl_05;
extern s32 tl_particle;
extern const f32 lbl_805DFE00;
s32 spawn_fire_explosion__10TObjPlayerFUii(u32 a0, s32 a1);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1);
void TObjPlayer__sub_8034F8B8(void* p);
void TObjPlayer__sub_8034F900(void* p);
int apply_recoil_forward__10TObjPlayerFPv(void* p);
void return_gi_gue_bazooka_angles__10TObjPlayerFPv(void* p);
void pose_gi_gue_bazooka_nodes__10TObjPlayerFPv(void *arg0);
void open_gi_gue_bazooka_angles__10TObjPlayerFPv(void* p);
void reset_shoot_models__10TObjPlayerFPv(void* p);
int shrink_field1f8__10TObjPlayerFPv(void* p);
void spawn_effect__10TObjPlayerFPv(void *arg0);
s32 rotate_matrix_z(s32, s32);
s32 rotate_matrix_x(s32, s32);
s32 spawn_particle_effect(void *, s32);
int add_angle_clamped__10TObjPlayerFPlll(void*, void*, void*);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void spawn_effect__10TObjPlayerFPv(void *arg0) {
    u8 sp8[0x18];
    struct VObj_8034EFDC *o = (struct VObj_8034EFDC *)*(void **)((s8 *)arg0 + 0xF0);
    o->m63(0x30, sp8);
    spawn_particle_effect(sp8, 0x1D0);
}

void rotate_by_player_list__10TObjPlayerFPv(P_8034F020 *arg0) {
    switch (get_player_list__10TObjPlayerFv()) {
    case 1:
        ((s32)rotate_matrix_z((s32)(0), (s32)(arg0->f1F8)));
        break;
    }
}

void reset_shoot_models__10TObjPlayerFPv(void* p) { draw_weapon_at_joint(p, (void*)49); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); }
int apply_recoil_forward__10TObjPlayerFPv(void* p) { return add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)(1820), (void*)(13653)); }
int shrink_field1f8__10TObjPlayerFPv(void* p) { return add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)(-4551), (void*)(0)); }

extern s32 lbl_804F0810[];

void *item_equip_variant_deleting_dtor_8034F104(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0810;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804F0810[];

void *TUnk_804F0810::enter_timed_state(s32 _w1, void *_w2) {
    TItemWeapon__ct((void *)(this), (void *)(_w1));
    *(s32 **)((s8 *)this + 0x18) = lbl_804F0810;
    set_status_flags__10TObjPlayerFPvUi(this, 1);
    *(u32 *)((s8 *)this + 0x1F8) = 13653;
    return this;
}

extern s32 lbl_804F0908[];

u8 *TObjPlayer__sub_8034F1AC(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)enter_timed_state__13TUnk_804F0810FlPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
void spawn_particle_at_entity_slot__10TObjPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 *temp_r5;
    void *temp_r3;
    temp_r3 = find_entity_by_id(arg2);
    if (temp_r3 != NULL) {
        temp_r5 = *(u8 **)((s8 *)temp_r3 + 0xA4);
        if ((temp_r5 != NULL) && (arg3 < (s32) *(s32 *)((s8 *)temp_r3 + 0xA8))) {
            spawn_particle_effect(&((Tbl_8034F204 *)temp_r5)->arr[arg3], 0x1BF);
        }
    }
}

void launch_rappys_fan_slicer__10TObjPlayerFPv(u8 *weapon) {
    f32 tmp[4];
    SlicerLaunchData_8012D9C8 launch;
    u8 *t;
    init_slicer_launch_state(&launch);
    launch.player = obj_getField1c(*(u8 **)((s8 *)weapon + 0xF0));
    launch.weapon = get_field_d8__10TObjPlayerFv(weapon);
    launch.textures = *(void **)((s8 *)weapon + 0x24);
    launch.model = *(void **)((s8 *)weapon + 0x188);
    launch.kind = TObjPlayer__sub_801D2F4C(*(u8 **)((s8 *)weapon + 0xF0) + 0x7CC);
    launch.stage = get_validated_attack_stage(*(u8 **)((s8 *)weapon + 0xF0) + 0x7CC);
    launch.multiplier = query_extended_state__10TObjPlayerFv(*(u8 **)((s8 *)weapon + 0xF0));
    get_weapon_color__11TItemWeaponFPv(tmp, weapon);
    copy_vec4__13TRaderMapCoreFPvPv(launch.color, tmp);
    launch.facing = *(s32 *)((s8 *)(*(u8 **)((s8 *)weapon + 0xF0)) + 0x60);
    launch.spin = 0;
    draw_icon__10TObjPlayerFll(weapon, 3, launch.first);
    draw_icon__10TObjPlayerFll(weapon, 2, launch.second);
    t = create__10TTecSlicerFPUs(&launch);
    if (t != NULL) {
        *(s32 *)((s8 *)t + 0x5C) += 0x4000;
        *(f32 *)((s8 *)t + 0x68) = lbl_805DFDF8;
        *(f32 *)((s8 *)t + 0x6C) = lbl_805DFDF8;
        *(f32 *)((s8 *)t + 0x70) = lbl_805DFDF8;
        *(s32 *)((s8 *)t + 0x13C) = 0;
    }
}

void *item_equip_variant_deleting_dtor_8034F36C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0908;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804F0908[];

void *TUnk_804F0908::construct_rappys_fan(s32 _w1, void *_w2) {
    TItemWeapon__ct((void *)(this), (void *)(_w1));
    *(s32 **)((s8 *)this + 0x18) = lbl_804F0908;
    *(s32 **)((s8 *)this + 0x1F4) = ((s32 *)spawn_particle_at_entity_slot__10TObjPlayerFiiii);
    set_status_flags__10TObjPlayerFPvUi(this, 2);
    return this;
}

u8 *create_rappys_fan__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)construct_rappys_fan__13TUnk_804F0908FlPv((void *)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void spawn_fire_explosion_for_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    u32 temp_r3 = find_item_by_id();
    if (temp_r3 != 0U) {
        spawn_fire_explosion__10TObjPlayerFUii((u32)(temp_r3), (s32)(arg1));
    }
}

void spawn_fire_explosion_at_item__10TObjPlayerFii(s32 arg0, s32 arg1) {
    Ctx_80125628 *ctx = (Ctx_80125628 *)arg1;
    u32 p = find_item_by_id();
    if (p != 0U) {
        spawn_fire_explosion__10TObjPlayerFUii((u32)(p), (s32)((s32)ctx->obj->elems[ctx->idx].f1c));
    }
}

s32 spawn_fire_explosion__10TObjPlayerFUii(u32 a0, s32 a1) {
    Info_8034F4FC info;
    void *o;
    TObjPlayer__sub_802E449C(&info);
    fill_status_info__10TObjPlayerFPvPv(a0, &info);
    VecCopy__FP3VecPC3Vec(&info, a1);
    info.f10 = 0xA;
    o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        construct_explosion_collider__13TUnk_804A2548Fv(o, tl_05, &info);
    }
    o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        ((s32 (*)(f32, void *, void *, s32, s32))create_fire_explosion_effect)(lbl_805DFE00, o, &info, 0, tl_particle);
    }
}

void init_fire_explosion_config__10TObjPlayerFPvPv(void *a, O_8034F590 *o) {
    o->f74 = (void *)spawn_fire_explosion_at_item__10TObjPlayerFii;
    o->f70 = (void *)spawn_fire_explosion_for_item__10TObjPlayerFii;
    o->flags |= 0x80;
}

void pose_gi_gue_bazooka_nodes__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 3:
        rotate_matrix_x(0, *(s32 *)((s8 *)arg0 + 0x1FC));
        return;
    case 5:
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x200));
        return;
    case 4:
        rotate_matrix_z(0, -*(s32 *)((s8 *)arg0 + 0x200));
        return;
    }
}

void return_gi_gue_bazooka_angles__10TObjPlayerFPv(void* p) { add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)((void*)1820), (void*)((void*)7281)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-5461)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x200), (void*)((void*)1820), (void*)((void*)9102)); }

void open_gi_gue_bazooka_angles__10TObjPlayerFPv(void* p) { add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)((void*)-3640), (void*)((void*)0)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1fc), (void*)((void*)2730), (void*)((void*)0)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x200), (void*)((void*)-1820), (void*)((void*)0)); }

extern s32 lbl_804F0A00[];

void *item_equip_variant_deleting_dtor_8034F6FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0A00;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8034F754_lbl_804F0A00_size[sizeof(RecoveredGlobal_8034F754_lbl_804F0A00) == 0xF8 ? 1 : -1];
u8 *construct_gi_gue_bazooka(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8034F754_lbl_804F0A00 *)&lbl_804F0A00).value;
    set_status_flags__10TObjPlayerFPvUi((void *)(arg0), (int)(0x8000));
    *(s32 *)((s8 *)arg0 + 0x1F8) = -0x1C71;
    *(s32 *)((s8 *)arg0 + 0x1FC) = -0x1555;
    *(s32 *)((s8 *)arg0 + 0x200) = 0x238E;
    return arg0;
}

u8 *create_gi_gue_bazooka__10TObjPlayerFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_gi_gue_bazooka((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"
#include "pso/player/TObjPlayer.h"

void TObjPlayer::dispatch_by_state() {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 2:
        rotate_matrix_z(0, *(s32 *)((s8 *)this + 0x1F8));
        return;
    case 8:
        rotate_matrix_z(0, this->m_1fc);
        return;
    }
}

void TObjPlayer::reset_animation_flags() { draw_weapon_at_joint(this, (void*)49); update_trail_slot__11TItemWeaponFPvi(this, (void*)0); update_trail_slot__11TItemWeaponFPvi(this, (void*)1); }

void TObjPlayer__sub_8034F8B8(void* p) { add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)((void*)-8192), (void*)((void*)-30947)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1fc), (void*)((void*)-1820), (void*)((void*)-7281)); }

void TObjPlayer__sub_8034F900(void* p) { add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1f8), (void*)((void*)16384), (void*)((void*)0)); add_angle_clamped__10TObjPlayerFPlll((void*)((char*)p + 0x1fc), (void*)((void*)3640), (void*)((void*)0)); }

extern s32 lbl_804F0AF8[];

void *item_equip_variant_deleting_dtor_8034F948(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0AF8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
