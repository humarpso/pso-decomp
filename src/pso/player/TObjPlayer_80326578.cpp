#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803268D8_lbl_804ECFB0 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

struct Rec_80326D54 { f32 a; s32 b; s32 c; s32 d; };

struct Obj_80326D54 { u8 pad[0x1F8]; f32 x1F8; f32 x1FC; };

extern "C" {
void * set_vtable_mode2_alt__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_803265C0(u8 *arg0);
void * init_vtable_variant__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_vtable_variant__10TObjPlayerFPv(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *dark_bridge_create(u8 *arg0);
void * init_state_1536__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_state_1536__10TObjPlayerFPv(u8 *arg0);
void * init_variant_b__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_variant_b__10TObjPlayerFPv(u8 *arg0);
void TItemWeapon__ct(void *, void *);
extern M2C_UNK lbl_804ECFB0[];
u8 *TObjPlayer__sub_803268D8(u8 *arg0, u8 *arg1, s32 _w2);
u8 *TItemTimerEvent__ct(void *, u32, s32, s32);
extern void *lbl_804A0568[8];
u8 *slow_curse_timer_ct(u8 *self, u32 base_arg, s32 tag, s32 timer, f32 value);
void enable_flag20__10TObjPlayerFi(Rec_80326D54 *);
s32 get_player_list__10TObjPlayerFv();
void translate_matrix(s32, f32, f32, f32);
extern Rec_80326D54 lbl_80476760;
extern const f32 lbl_805DF660;
void TObjPlayer__sub_80326D54(Obj_80326D54 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80326618(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326880(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326AD0(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326CFC(void *arg0, s16 arg1);
void TObjPlayer__sub_80326794(void* p);
int TObjPlayer__sub_80326BD4(void* p);
void apply_container_item__10TObjPlayerFPv(void *arg0);
void approach_target_angle__10TObjPlayerFPv(u8 *arg0);
void init_item_slots__10TObjPlayerFPv(void* p);
void dark_bridge_start_timers(void *arg0);
void step_angles__10TObjPlayerFPv(u8 *arg0);
void sync_hp_from_target__10TObjPlayerFPv(void *arg0);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 add_actor_tp(s32, s16);
int refresh_owner_stats__5TItemFPv(void*);
M2C_UNK add_angle_clamped__10TObjPlayerFPvii(void *, int, int);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void set_weapon_trail_joints(void *, int, int, int);
M2C_UNK freeze_curse_timer_ct(s32, u32, s32, M2C_UNK, f32);
M2C_UNK paralysis_curse_timer_ct(s32, u32, s32, M2C_UNK, f32);
s32 TObjectV8047c128_subtract_hp(s32, s16);
s32 __nw__15TItemHeapObjectFUl(M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_id__13TItemProArmorFPv(void *);
s32 get_player_list__10TObjPlayerFv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326618(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326880(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326AD0(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_80326CFC(void *arg0, s16 arg1);
s16 obj_getS16_32E(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804ECDC0[];

void *set_vtable_mode2_alt__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECDC0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

extern M2C_UNK lbl_804ECEB8[];

extern M2C_UNK lbl_804ECEB8[];
extern M2C_UNK create__13TItemShootGunFiiif[];

u8 *TObjPlayer__sub_803265C0(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)set_vtable_mode2_alt__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *item_equip_variant_deleting_dtor_80326618(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECEB8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *init_vtable_variant__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECEB8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = create__13TItemShootGunFiiif;
    return arg0;
}

u8 *create_vtable_variant__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_vtable_variant__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void sync_hp_from_target__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1FC) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1FC) = temp_r3;
        }
        if (temp_r0 > 0) {
            temp_r31 = temp_r0 / 2;
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
            add_actor_tp(M2C_FIELD(arg0, s32 *, 0xF0), (s16) temp_r31);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 1);
}
void TObjPlayer__sub_80326794(void* p) { *(s16*)((char*)p + 0x1fc) = -1; *(s32*)((char*)p + 0x1f8) = 0; }

extern const f32 lbl_805DF658;

void dark_bridge_start_timers(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3 != 0) {
            freeze_curse_timer_ct(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_2 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3_2 != 0) {
            paralysis_curse_timer_ct(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_3 = __nw__15TItemHeapObjectFUl(0x30);
        if (temp_r3_3 != 0) {
            slow_curse_timer_ct((u8 *)(temp_r3_3), (u32)(M2C_FIELD(arg0, u32 *, 0x174)), (s32)(get_id__13TItemProArmorFPv(arg0)), (s32)(0x2328), lbl_805DF658);
        }
    }
}

extern M2C_UNK lbl_804ECFB0[];

void *item_equip_variant_deleting_dtor_80326880(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ECFB0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_803268D8_lbl_804ECFB0_size[sizeof(RecoveredGlobal_803268D8_lbl_804ECFB0) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_803268D8(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803268D8_lbl_804ECFB0 *)&lbl_804ECFB0).value;
    M2C_FIELD(arg0, s16 *, 0x1FC) = -1;
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    return arg0;
}

u8 *dark_bridge_create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_803268D8((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

u8 *slow_curse_timer_ct(u8 *self, u32 base_arg, s32 tag, s32 timer, f32 value) {
    TItemTimerEvent__ct(self, base_arg, tag, timer);
    M2C_FIELD(self, void ***, 0x18) = lbl_804A0568;
    M2C_FIELD(self, f32 *, 0x2C) = value;
    return self;
}

void apply_container_item__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        rotate_matrix_x(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    }
}

void approach_target_angle__10TObjPlayerFPv(u8 *arg0) {
    add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x1F8, 0x71C, 0x4000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0x4000) {
        add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x1FC, 0x71C, 0x4000);
    }
}

void step_angles__10TObjPlayerFPv(u8 *arg0) {
    add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x1FC, -0xAAA, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
        add_angle_clamped__10TObjPlayerFPvii(arg0 + 0x1F8, -0xAAA, 0);
    }
}

extern M2C_UNK lbl_804ED0A8[];

void *item_equip_variant_deleting_dtor_80326AD0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED0A8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804ED0A8[];

void *init_state_1536__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED0A8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 1536);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}

u8 *create_state_1536__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_state_1536__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

int TObjPlayer__sub_80326BD4(void* p) { return refresh_owner_stats__5TItemFPv(p); }
void init_item_slots__10TObjPlayerFPv(void* p) { draw_weapon_at_joint(p, (void*)48); update_trail_slot__11TItemWeaponFPvi(p, (void*)0); update_trail_slot__11TItemWeaponFPvi(p, (void*)1); update_trail_slot__11TItemWeaponFPvi(p, (void*)2); }

extern M2C_UNK lbl_804ED1A0[];

void *init_variant_b__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct((void *)(arg0), (void *)(_w1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED1A0;
    set_weapon_trail_joints(arg0, 2, 6, 5);
    set_status_flags__10TObjPlayerFPvUi(arg0, 1);
    return arg0;
}
u8 *create_variant_b__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_variant_b__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern M2C_UNK lbl_804ED1A0[];

void *item_equip_variant_deleting_dtor_80326CFC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED1A0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void TObjPlayer__sub_80326D54(Obj_80326D54 *arg0) {
    switch (get_player_list__10TObjPlayerFv()) {
    case 2: {
        Rec_80326D54 r = lbl_80476760;
        r.a = arg0->x1FC;
        enable_flag20__10TObjPlayerFi(&r);
        break;
    }
    case 3:
        translate_matrix(0, lbl_805DF660, lbl_805DF660, -arg0->x1F8);
        break;
    case 4:
        translate_matrix(0, lbl_805DF660, lbl_805DF660, arg0->x1F8);
        break;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1);
void approach_positions__10TObjPlayerFi(s32 arg0);
void update_orga_flow_params__10TObjPlayerFi(s32 arg0);
M2C_UNK approach_value__20TItemEffOrgaFlowShotFPvff(void *, f32, f32);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1);

extern const f32 lbl_805DF664;
extern const f32 lbl_805DF668;
extern const f32 lbl_805DF66C;
extern const f32 lbl_805DF670;

void update_orga_flow_params__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF664), (f32) (lbl_805DF668));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF66C), (f32) (lbl_805DF670));
}

extern const f32 lbl_805DF660;
extern const f32 lbl_805DF670;
extern const f32 lbl_805DF674;

void approach_positions__10TObjPlayerFi(s32 arg0) {
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1F8), (f32) (lbl_805DF670), (f32) (lbl_805DF660));
    approach_value__20TItemEffOrgaFlowShotFPvff((void *) (arg0 + 0x1FC), (f32) (lbl_805DF674), (f32) (lbl_805DF660));
}

extern M2C_UNK lbl_804ED298[];

void *item_equip_variant_deleting_dtor_80326EA0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED298;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80326F9C { u8 pad[0x1F8]; f32 f; };

extern "C" {
void* set_mode_floats__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_mode_floats_state__10TObjPlayerFPv(u8 *arg0);
void play_particle_effect_once__10TObjPlayerFv();
s32 get_player_list__10TObjPlayerFv();
void scale_matrix(int, f32, f32, f32);
extern const f32 lbl_805DF680;
void TObjPlayer__sub_80326F9C(O_80326F9C *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);
void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0);
void approach_position_x__10TObjPlayerFi(s32 arg0);

void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1);

#define lbl_804ED298 ((unsigned char *)lbl_804ED298)
#define lbl_805DF660 (*(const float *)&lbl_805DF660)
    extern const float lbl_805DF678;
void* set_mode_floats__10TObjPlayerFPv(void* a0, M2C_UNK _w1, void * _w2) { ((int (*)())TItemWeapon__ct)(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED298; *(float*)((char*)a0 + 0x1f8) = lbl_805DF660; *(float*)((char*)a0 + 0x1fc) = lbl_805DF678; return a0; }

extern const f32 lbl_805DF684;
extern const f32 lbl_805DF688;

u8 *create_mode_floats_state__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)set_mode_floats__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void TObjPlayer__sub_80326F9C(O_80326F9C *arg0) {
    s32 n = get_player_list__10TObjPlayerFv();
    switch (n) {
    case 1:
    case 2: {
        f32 f = arg0->f;
        scale_matrix(0, lbl_805DF680, f, f);
        play_particle_effect_once__10TObjPlayerFv();
        break;
    }
    }
}

void approach_orgaflow_shot__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(s32, f32, f32))approach_value__20TItemEffOrgaFlowShotFPvff)(arg0 + 0x1F8, lbl_805DF684, lbl_805DF688);
}

extern const f32 lbl_805DF680;
extern const f32 lbl_805DF68C;

void approach_position_x__10TObjPlayerFi(s32 arg0) {
    ((M2C_UNK (*)(s32, f32, f32))approach_value__20TItemEffOrgaFlowShotFPvff)(arg0 + 0x1F8, lbl_805DF68C, lbl_805DF680);
}

extern M2C_UNK lbl_804ED390[];

void *item_equip_variant_deleting_dtor_8032704C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED390;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}

#undef lbl_805DF660
#undef lbl_804ED298

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void* init_vtable_1f8__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_vtable_1f8_state__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void config_dark_flow_attack_collider(int a0, void* a1);
void launch_dark_flow_extra__10TObjPlayerFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK fire_shot_at_target__11TItemWeaponFv(void *, s32, M2C_UNK, M2C_UNK);

s16 get_field_2b8__14TItemProShieldFPv(s32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s16 obj_getS16_32C(s32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);

#define lbl_804ED390 ((unsigned char *)lbl_804ED390)
#define lbl_805DF680 (*(const float *)&lbl_805DF680)
void* init_vtable_1f8__10TObjPlayerFPv(void* a0, M2C_UNK _w1, void * _w2) { ((int (*)())TItemWeapon__ct)(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED390; *(float*)((char*)a0 + 0x1f8) = lbl_805DF680; return a0; }

    extern const float lbl_805DF690;

u8 *create_vtable_1f8_state__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_vtable_1f8__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void config_dark_flow_attack_collider(int a0, void* a1) { *(float*)((char*)a1 + 0x3c) = lbl_805DF690; *(int*)((char*)a1 + 0x78) = 474; }

void launch_dark_flow_extra__10TObjPlayerFPv(void *arg0) {
    s32 temp_r31;

    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        temp_r31 = (s16) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, s32 *, 0xF0));
        if ((s32) ((s16) obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) * 8) < temp_r31) {
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x238E);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x11C7);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x11C7);
            fire_shot_at_target__11TItemWeaponFv(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x238E);
            play_sound_effect(0x4001A642, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        update_active_game_effect__10TObjPlayerFPv(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

}

#undef lbl_805DF680
#undef lbl_804ED390

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1);
void *construct_dark_flow(void *arg0);
void scroll_dark_flow_texture__10TObjPlayerFPv(void *arg0);

void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void scroll_dark_flow_texture__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r3 != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(M2C_FIELD(temp_r3, void **, 0x2C), s32 *, 0x30), 0x10, 0, 0);
    }
}

extern M2C_UNK lbl_804ED488[];

void *item_equip_variant_deleting_dtor_80327298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED488;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804ED488[];

void *construct_dark_flow(void *arg0) {
    ((void (*)(void *))TItemWeapon__ct)(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804ED488;
    set_status_flags__10TObjPlayerFPvUi(arg0, 34);
    return arg0;
}

}
