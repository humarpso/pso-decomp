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
u8 *TObjPlayer__sub_803266B8(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80326924(u8 *arg0);
void * init_state_1536__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80326B7C(u8 *arg0);
void * init_variant_b__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80326CA4(u8 *arg0);
void TItemWeapon__ct(void *, void *);
extern M2C_UNK lbl_804ECFB0[];
u8 *TObjPlayer__sub_803268D8(u8 *arg0, u8 *arg1, s32 _w2);
u8 *TItemTimerEvent__ct(void *, u32, s32, s32);
extern void *lbl_804A0568[8];
u8 *TObjPlayer__sub_8032697C(u8 *self, u32 base_arg, s32 tag, s32 timer, f32 value);
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
void spawn_armor_effects__10TObjPlayerFPv(void *arg0);
void step_angles__10TObjPlayerFPv(u8 *arg0);
void sync_hp_from_target__10TObjPlayerFPv(void *arg0);
M2C_UNK rotate_matrix_x(M2C_UNK, s32);
s32 add_actor_tp(s32, s16);
int refresh_owner_stats__5TItemFPv(void*);
M2C_UNK TObjPlayer__sub_80115BC0(void *, int, int);
int update_trail_slot__11TItemWeaponFPvi(void*, void*);
int draw_weapon_at_joint(void*, void*);
void set_weapon_trail_joints(void *, int, int, int);
M2C_UNK TObjPlayer__sub_80126414(s32, u32, s32, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_80127F40(s32, u32, s32, M2C_UNK, f32);
s32 TObjectV8047c128_subtract_hp(s32, s16);
s32 alloc__13TItemProArmorFi(M2C_UNK);
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

u8 *TObjPlayer__sub_803266B8(u8 *arg0) {
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

void spawn_armor_effects__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;

    M2C_FIELD(arg0, s16 *, 0x1FC) = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3 != 0) {
            TObjPlayer__sub_80126414(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_2 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3_2 != 0) {
            TObjPlayer__sub_80127F40(temp_r3_2, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x2328, lbl_805DF658);
        }
        temp_r3_3 = alloc__13TItemProArmorFi(0x30);
        if (temp_r3_3 != 0) {
            TObjPlayer__sub_8032697C((u8 *)(temp_r3_3), (u32)(M2C_FIELD(arg0, u32 *, 0x174)), (s32)(get_id__13TItemProArmorFPv(arg0)), (s32)(0x2328), lbl_805DF658);
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

u8 *TObjPlayer__sub_80326924(u8 *arg0) {
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

u8 *TObjPlayer__sub_8032697C(u8 *self, u32 base_arg, s32 tag, s32 timer, f32 value) {
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
    TObjPlayer__sub_80115BC0(arg0 + 0x1F8, 0x71C, 0x4000);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0x4000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x1FC, 0x71C, 0x4000);
    }
}

void step_angles__10TObjPlayerFPv(u8 *arg0) {
    TObjPlayer__sub_80115BC0(arg0 + 0x1FC, -0xAAA, 0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x1F8, -0xAAA, 0);
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

u8 *TObjPlayer__sub_80326B7C(u8 *arg0) {
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
u8 *TObjPlayer__sub_80326CA4(u8 *arg0) {
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
