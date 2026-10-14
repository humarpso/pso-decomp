#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/items/TItemWeapon.h"
struct RecoilWeaponView : TItemWeapon {
    s32 projectileVisible;
    s32 projectileSpin;
    s32 recoilAngle;
    s32 recoilPhase;
};

typedef struct MegidWeaponRenderView { u8 pad[0x200]; s32 f200; } MegidWeaponRenderView;

struct StarLightPosition { f32 x, y, z; };

struct StarLightParameters { u32 w[5]; };

struct StarLightFollowerView {
    u8 pad0[0x18];
    void *vtbl;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
};

typedef char RecoilVisibleOffset[offsetof(RecoilWeaponView, projectileVisible) == 0x1F8 ? 1 : -1];
typedef char RecoilSpinOffset[offsetof(RecoilWeaponView, projectileSpin) == 0x1FC ? 1 : -1];
typedef char RecoilAngleOffset[offsetof(RecoilWeaponView, recoilAngle) == 0x200 ? 1 : -1];
typedef char RecoilPhaseOffset[offsetof(RecoilWeaponView, recoilPhase) == 0x204 ? 1 : -1];
typedef char RecoilWeaponExtent[sizeof(RecoilWeaponView) == 0x208 ? 1 : -1];
typedef char StarLightParametersExtent[sizeof(StarLightParameters) == 0x14 ? 1 : -1];
typedef char StarLightFollowerExtent[sizeof(StarLightFollowerView) == 0x2C ? 1 : -1];

extern "C" {
void spawn_item_timer__13TItemAttackerFiii(void *, void (*)(void *), int);
M2C_UNK launch_rare_weapon_special__10TObjPlayerFv(void *, void *, int, f32);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(void *, void *);

void fire_recoiling_weapon_projectile(RecoilWeaponView *arg0);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK draw_ginja_object(void *);
s32 get_player_list__10TObjPlayerFv();
void update_photon_chair_state__10TObjPlayerFPv(void *arg0);
void update_breath_pulse__10TObjPlayerFPv(void *arg0);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
void *item_equip_variant_deleting_dtor_80124AEC(void *arg0, s16 arg1);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
s32 spawn_shoot_particle_entity__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0);

void* enter_state_34__10TObjPlayerFPv(void* a0, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_enter_state_34__10TObjPlayerFPv(u8 *arg0);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1);
void restore_weapon_projectile_visibility(void *arg0);
void increment_burst_counter(u8 *arg0);
s32 get_anim_state__10TObjPlayerFPv(void* p);
s32 get_id__13TItemProArmorFPv(void *);
M2C_UNK roll_technique__11TItemWeaponFv(void *);
s32 __nw__15TItemHeapObjectFUl(M2C_UNK);
M2C_UNK init_vtable__13TItemProArmorFPv(s32, u32, s32, M2C_UNK);
void init_armor__10TObjPlayerFPv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
M2C_UNK draw_weapon_at_joint(void *, M2C_UNK, void *);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv(s32);
M2C_UNK set_model_fade_alpha__10TObjPlayerFf();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern s32 model_render_flags;
void draw_held_item__10TObjPlayerFPv(void *arg0);
void play_particle_effect_once__10TObjPlayerFv();
void TObjPlayer__sub_8012443C(MegidWeaponRenderView *arg0);
s32 get_current_floor();
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 is_item_area_enabled();
extern s32 tl_05;
void update_blink__10TObjPlayerFPv(void *arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_tp__10TObjPlayerFPv(void *);
M2C_UNK create_ex__9TTecMegidFiiii(void *, M2C_UNK *, s32, s32);
void cast_megid__10TObjPlayerFPv(void *arg0);
s32 __nw__7TObjectFUl(M2C_UNK);
void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void *find_item_by_id(s32);
s32 get_item_system_generation();
s32 spawn_star_light_2d(StarLightPosition *, StarLightParameters *, StarLightFollowerView *);
void __ct__7TObjectFP7TObject(void *, void *);
const StarLightParameters weapon_star_light_parameters[] = {
    { { 0x40400000, 0x40E00000, 0xB4FF0019, 0, 0x41A00000 } }
};
StarLightFollowerView *TObjPlayer__sub_801241D4(StarLightFollowerView *self, void *parent, s32 a, s32 b);
void __dt__7TObjectFv(void *, int);
void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s8 TObjPlayer__sub_80102C30();
M2C_UNK copy_position__15TEffStarLight2DFPv(u32, M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK queue_target_destruction__10TObjCameraFPv(u32);
void update_item_camera_target__10TObjPlayerFPv(void *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1);
void *TObjPlayer__sub_80124694(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void set_effect_state__10TObjPlayerFPvi(void *, int);
extern s32 tl_05;
u8 *TObjPlayer__sub_80124708(u8 *arg0);
s32 is_owner_alive__10TObjPlayerFPv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
M2C_UNK rotate_matrix_x(int, int);

void TObjPlayer__sub_8012480C(void);
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);
M2C_UNK spawn_slot_emitter__18TItemShootParticleFPvii(M2C_UNK, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(s32, s32, s32, f32);
typedef u8 *(*Fn_80124694_3)(void *, M2C_UNK, void *);
typedef s32 (*Fn_80124810_5)(s32, s32, s32, s32, f32);

extern "C" void render__7TObjectFv();
extern "C" void render_shadows__7TObjectFv();
void *weapon_star_light_follower_vtable[6] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_8012417C, (void *)&update_item_camera_target__10TObjPlayerFPv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define weapon_star_light_follower_vtable ((u8 *)weapon_star_light_follower_vtable)

void update_item_camera_target__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != ((u32)get_item_system_generation())) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        temp_r3 = ((s32)find_item_by_id(M2C_FIELD(arg0, s32 *, 0x1C)));
        if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2) && (draw_icon__10TObjPlayerFPvii((void *)(temp_r3), (M2C_UNK)(M2C_FIELD(arg0, s32 *, 0x20)), (M2C_UNK *)(&sp8)) != 0)) {
            if (get_flag_40__8TItemMagFPv((s32)(temp_r3)) == 0) {
                copy_position__15TEffStarLight2DFPv(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
                return;
            }
            queue_target_destruction__10TObjCameraFPv(M2C_FIELD(arg0, u32 *, 0x24));
            return;
        }
    }
    queue_destruction__7TObjectFv(arg0);
}

void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = ((M2C_UNK *)weapon_star_light_follower_vtable);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

StarLightFollowerView *TObjPlayer__sub_801241D4(StarLightFollowerView *self, void *parent, s32 a, s32 b) {
    StarLightPosition v;
    void *p;
    __ct__7TObjectFP7TObject(self, parent);
    self->vtbl = weapon_star_light_follower_vtable;
    self->f1c = a;
    self->f20 = b;
    self->f24 = 0;
    self->f28 = get_item_system_generation();
    p = find_item_by_id(self->f1c);
    if (p != NULL && draw_icon__10TObjPlayerFPvii((void *)(p), (M2C_UNK)(self->f20), (M2C_UNK *)(&v)) != 0) {
        StarLightParameters blk = weapon_star_light_parameters[0];
        self->f24 = spawn_star_light_2d(&v, &blk, self);
    }
    return self;
}

void create_icon__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    if (arg0 != 0) {
        temp_r3 = (void *)((u32)__nw__7TObjectFUl(0x2C));
        if (temp_r3 != (void *)0U) {
            TObjPlayer__sub_801241D4((StarLightFollowerView *)(temp_r3), (void *)(arg0), (s32)(arg1), (s32)(arg2));
        }
    }
}

void cast_megid__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    void *temp_r31;
    if (is_mode_two_and_ready__10TObjPlayerFPv((void *)(arg0)) != 0) {
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            temp_r31 = M2C_FIELD(arg0, void **, 0xF0);
            create_ex__9TTecMegidFiiii(temp_r31, &sp8, M2C_FIELD(temp_r31, s32 *, 0x60), get_tp__10TObjPlayerFPv(arg0));
            roll_technique__11TItemWeaponFv(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void update_blink__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xAAA);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x2000) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x2000;
            M2C_FIELD(arg0, s32 *, 0x1FC) = 1;
        }
    }
    temp_r3 = get_current_floor();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x204) != temp_r3) && ((u32) M2C_FIELD(arg0, u32 *, 0xF4) != 0U)) {
        M2C_FIELD(arg0, s32 *, 0x204) = temp_r3;
        if (is_item_area_enabled() != 0) {
            create_icon__10TObjPlayerFiii((s32)((s32)(tl_05)), (s32)((s32)(get_field_d8__10TObjPlayerFPv(arg0))), (s32)((s32)(5)));
        }
    }
}

void TObjPlayer__sub_8012443C(MegidWeaponRenderView *arg0) {
    switch (((u32)get_player_list__10TObjPlayerFv())) {
    case 1:
        rotate_matrix_y((int)(0), (int)(arg0->f200));
        return;
    case 2:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    case 3:
        rotate_matrix_y((int)(0), (int)(-arg0->f200));
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    case 6:
        play_particle_effect_once__10TObjPlayerFv();
        break;
    case 0:
    case 5:
        break;
    }
}

void draw_held_item__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r31;
    void *temp_r5;
    if (((void *) M2C_FIELD(arg0, void **, 0xF4) != NULL) && (get_flag_40__8TItemMagFPv((s32)(arg0)) == 0)) {
        temp_r5 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF4), void **, 0x2C), void **, 0x30);
        temp_r31 = M2C_FIELD(temp_r5, void **, 0x30);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x18);
        draw_weapon_at_joint(arg0, 0x30, temp_r5);
        M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFE7);
        if (draw_icon__10TObjPlayerFPvii(arg0, 5, &sp8) != 0) {
            push_matrix();
            TObjPlayer__sub_80364198();
            model_render_flags &= 0xFFFFFFEF;
            get_mag_scale__10TObjPlayerFPv(arg0);
            set_model_fade_alpha__10TObjPlayerFf();
            post_translate_matrix((void *)(&sp8));
            rotate_matrix_y((int)(0), (int)(M2C_FIELD(M2C_FIELD(arg0, void **, 0xF0), s32 *, 0x60)));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) | 0x11);
            draw_ginja_object(temp_r31);
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_object(M2C_FIELD(temp_r31, void **, 0x2C));
            end_effect_render__13TParticleCtrlFv();
            temp_r3 = M2C_FIELD(temp_r31, s32 *, 0);
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (temp_r3 & ~0x11);
            warn_if_gauge_low__10TObjPlayerFv(temp_r3);
            pop_matrix();
            pop_matrix();
        }
    }
}

void init_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x204) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            init_vtable__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
    roll_technique__11TItemWeaponFv(arg0);
    roll_technique__11TItemWeaponFv(arg0);
}

void reset_owner_target__10TObjPlayerFPv(u8 *);
extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItemWeapon__sub_8011E5C4();
extern "C" void TItemWeapon__sub_8011E5C8();
extern "C" void TItemWeapon__sub_8011E5CC();
extern "C" void TItemWeapon__sub_8011E5D4();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void TItemWeapon__sub_8011E5DC();
extern "C" void set_technique_roll__11TItemWeaponFl();
extern "C" void TItemWeapon__sub_801200C0();
extern "C" void TItemWeapon__sub_8012012C();
extern "C" void TItemWeapon__sub_80120568();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void TItemWeapon__write_item_data();
extern "C" void TItem__sub_801005D8();
extern "C" void TItem__sub_801005E0();
extern "C" void TItem__sub_801005E4();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void apply_equip__11TItemWeaponFPv();
extern "C" void apply_object_set_data();
extern "C" void bind_attribute_entries__11TItemWeaponFPv();
extern "C" void classify_actor_view_detail();
extern "C" void copy_item_to_data__11TItemWeaponFi();
extern "C" void deliver_hit__11TItemWeaponFPviPviif();
extern "C" void dispatch_attack_marker__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFPv();
extern "C" void draw_equipped_weapon__11TItemWeaponFPv();
extern "C" void draw_weapon_trails__11TItemWeaponFPv();
extern "C" void equip__14TItemEquipBaseFPv();
extern "C" void get_attack_flags__11TItemWeaponFPv();
extern "C" void get_motion_ptr__11TItemWeaponFPv();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void load_weapon_model__11TItemWeaponFPv();
extern "C" void register_attack__5TItemFPv();
extern "C" void release_member_90__10TObjPlayerFPv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render__5TItemFPv();
extern "C" void reset_entries__11TItemWeaponFPv();
extern "C" void reset_item_equip();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__10TItemShootFv();
extern "C" void run_task__5TItemFPv();
extern "C" void set_attach_slot__14TItemEquipBaseFPvc();
extern "C" void subtract_equip_stats__14TItemEquipBaseFPviPvPv();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFPviiPv();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFPv();
extern "C" void update_active_weapon__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFPv();
extern "C" void update_model_flags__11TItemWeaponFPv();
extern "C" void update_pickup_flag__5TItemFi();
extern "C" void update_weapon_trails__11TItemWeaponFPv();
void *megid_projectile_weapon_vtable[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_8012463C, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&get_motion_ptr__11TItemWeaponFPv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFPv,
    (void *)&update_weapon_trails__11TItemWeaponFPv, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&update_pickup_flag__5TItemFi,
    (void *)&get_attack_flags__11TItemWeaponFPv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__11TItemWeaponFPv, (void *)&copy_item_to_data__11TItemWeaponFi,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFPv, (void *)&TItemWeapon__sub_80120568, (void *)&load_weapon_model__11TItemWeaponFPv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFPv, (void *)&reset_entries__11TItemWeaponFPv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&cast_megid__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5DC, (void *)&TItemWeapon__sub_8011E5D8, (void *)&draw_held_item__10TObjPlayerFPv,
    (void *)&update_blink__10TObjPlayerFPv, (void *)&init_armor__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TObjPlayer__sub_8012443C, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)0x0,
};
void *recoil_weapon_shoot_model_vtable[7] = {
    (void *)0x0, (void *)0x0, (void *)&dt_item_shoot_model__10TObjPlayerFPvs, (void *)&run_task__10TItemShootFv,
    (void *)&reset_owner_target__10TObjPlayerFPv, (void *)&render_shadows__7TObjectFv, (void *)&TObjPlayer__sub_8012480C,
};
void *recoiling_projectile_weapon_vtable[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_80124AEC, (void *)&run_task__5TItemFPv,
    (void *)&dispatch_state__5TItemFPv, (void *)&render__5TItemFPv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFPv, (void *)&get_motion_ptr__11TItemWeaponFPv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFPv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFPvc,
    (void *)&equip__14TItemEquipBaseFPv, (void *)&unequip__14TItemEquipBaseFPv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFPviiPv, (void *)&subtract_equip_stats__14TItemEquipBaseFPviPvPv, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFPv,
    (void *)&update_weapon_trails__11TItemWeaponFPv, (void *)&update_equip__14TItemEquipBaseFPv, (void *)&dispatch_attack_marker__11TItemWeaponFv, (void *)&update_pickup_flag__5TItemFi,
    (void *)&get_attack_flags__11TItemWeaponFPv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&update_model_flags__11TItemWeaponFPv, (void *)&copy_item_to_data__11TItemWeaponFi,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&apply_equip__11TItemWeaponFPv, (void *)&TItemWeapon__sub_80120568, (void *)&load_weapon_model__11TItemWeaponFPv, (void *)&reset_item_equip,
    (void *)&bind_attribute_entries__11TItemWeaponFPv, (void *)&reset_entries__11TItemWeaponFPv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&fire_recoiling_weapon_projectile, (void *)&TItemWeapon__sub_8011E5DC, (void *)&TItemWeapon__sub_8011E5D8, (void *)&TItemWeapon__sub_8011E5D4,
    (void *)&update_breath_pulse__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5CC, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&update_photon_chair_state__10TObjPlayerFPv, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)0x0,
};
#define megid_projectile_weapon_vtable ((M2C_UNK *)megid_projectile_weapon_vtable)
#define recoil_weapon_shoot_model_vtable ((M2C_UNK *)recoil_weapon_shoot_model_vtable)
#define recoiling_projectile_weapon_vtable ((M2C_UNK *)recoiling_projectile_weapon_vtable)

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = megid_projectile_weapon_vtable;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void *TObjPlayer__sub_80124694(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = megid_projectile_weapon_vtable;
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    set_effect_state__10TObjPlayerFPvi(arg0, 12);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    M2C_FIELD(arg0, u32 *, 0x200) = 0;
    M2C_FIELD(arg0, u32 *, 0x204) = -1;
    return arg0;
}

u8 *TObjPlayer__sub_80124708(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((Fn_80124694_3)TObjPlayer__sub_80124694)(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

void reset_owner_target__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (is_owner_alive__10TObjPlayerFPv() != 0) {
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x58));
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U)) {
            temp_r3_2 = (unsigned char *) (M2C_FIELD(temp_r3, void **, 0x2C));
            temp_r31 = (unsigned char *) (M2C_FIELD(temp_r3_2, void **, 0x30));
            M2C_FIELD(temp_r31, s32 *, 0) = (s32) (M2C_FIELD(temp_r31, s32 *, 0) & 0xFFFFFFFB);
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) 10.0f;
            push_matrix();
            notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, u32 *, 0x5C)));
            post_translate_matrix((void *) (arg0 + 0x1C));
            rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x2C)));
            rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x28) - 0x4000));
            draw_ginja_object((void *) (M2C_FIELD(arg0, void **, 0x58)));
            pop_matrix();
            M2C_FIELD(temp_r31, f32 *, 0x20) = (f32) 1.0f;
        }
    }
}

void TObjPlayer__sub_8012480C(void) {  }

void *ct_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = recoil_weapon_shoot_model_vtable;
    return arg0;
}

s32 spawn_shoot_particle_entity__10TObjPlayerFiiif(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 var_r0;
    s32 var_r31;

    var_r31 = 0;
    if (arg0 != 0) {
        var_r0 = __nw__7TObjectFUl(0x6C);
        if (var_r0 != 0) {
            var_r0 = ((Fn_80124810_5)ct_shoot_model__10TObjPlayerFPv)(var_r0, arg0, arg1, arg2, farg0);
        }
        var_r31 = var_r0;
    }
    var_r0 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if (var_r0 != 0U) {
        spawn_slot_emitter__18TItemShootParticleFPvii(var_r0, 0x1BB, 0);
    }
    return var_r31;
}
typedef char BurstReadyOffset[offsetof(RecoilWeaponView, projectileVisible)==0x1F8 ? 1 : -1];
typedef char BurstModeOffset[offsetof(RecoilWeaponView, recoilPhase)==0x204 ? 1 : -1];
void fire_recoiling_weapon_projectile(RecoilWeaponView *arg0) {
    WeaponVector sp8;
    s32 temp_r31;
    s32 var_r30;
    if ((s32) arg0->projectileVisible == 1) {
        spawn_item_timer__13TItemAttackerFiii(arg0, restore_weapon_projectile_visibility, 0x1E);
        arg0->projectileVisible = 0;
    }
    arg0->recoilPhase = 2;
    temp_r31 = (s32)arg0->player + 0x7CC;
    if (get_anim_state__10TObjPlayerFPv((void*)((int) (temp_r31))) == 0) {
        var_r30 = 0;
        do {
            increment_burst_counter((u8 *)((int) (temp_r31)));
            var_r30 += 1;
        } while (var_r30 != 2);
    }
    draw_status_icon__10TObjPlayerFPvi((void *) (arg0), (void *) (&sp8));
    if (is_mode_two_and_ready__10TObjPlayerFPv((void *) (arg0)) != 0) {
        launch_rare_weapon_special__10TObjPlayerFv((void *) (arg0), (void *) (&sp8), (int) (1), (f32) (1.0f));
        return;
    }
    arg0->deliver_projectile(&sp8, 0, 0, 1);
}
void update_photon_chair_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    temp_r3 = get_player_list__10TObjPlayerFv();
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
    if (temp_r3 == 4) {
        if (M2C_FIELD(arg0, u32 *, 0x188) != 0U) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
                draw_ginja_object((void *)(M2C_FIELD(arg0, u32 *, 0x188)));
            }
        }
    }
}
void update_breath_pulse__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;
    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) + 0x1999);
    temp_r4 = M2C_FIELD(arg0, void **, 0x188);
    if (temp_r4 != NULL) {
        temp_r4_2 = M2C_FIELD(temp_r4, void **, 0x2C);
        M2C_FIELD(temp_r4_2, s32 *, 0) = (s32) (M2C_FIELD(temp_r4_2, s32 *, 0) & 0xFFFFFFFD);
        M2C_FIELD(temp_r4_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x1FC);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x204);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) >= 0) {
            M2C_FIELD(arg0, s32 *, 0x200) = 0;
            M2C_FIELD(arg0, s32 *, 0x204) = 0;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) - 0xE38);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x200) <= -0x31C7) {
            M2C_FIELD(arg0, s32 *, 0x200) = -0x31C7;
            M2C_FIELD(arg0, s32 *, 0x204) = 3;
            return;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x204) = 1;
        return;
    }
}
void *item_equip_variant_deleting_dtor_80124AEC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = recoiling_projectile_weapon_vtable;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void* enter_state_34__10TObjPlayerFPv(void* a0, M2C_UNK _w1, void * _w2) { TItemWeapon__ct((void *)(a0)); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)recoiling_projectile_weapon_vtable); *(int*)((char*)a0 + 0x1f0) = (int)spawn_shoot_particle_entity__10TObjPlayerFiiif; *(float*)((char*)a0 + 0x1e4) = 9.0f; set_status_flags__10TObjPlayerFPvUi((void *)(a0), (int)((void*)34)); *(int*)((char*)a0 + 0x1f8) = 1; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x200) = 0; return a0; }
u8 *create_enter_state_34__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)enter_state_34__10TObjPlayerFPv((void*)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = recoil_weapon_shoot_model_vtable;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void restore_weapon_projectile_visibility(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}
void increment_burst_counter(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}
s32 get_anim_state__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
