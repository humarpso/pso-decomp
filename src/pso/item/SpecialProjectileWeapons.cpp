#include "types.h"
#include "pso/item/TUnk_804A2148.h"
#include "pso/item/TUnk_804A2018.h"

#include "pso/items/TItemWeapon.h"
#include "pso/TItemAttacker.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemMag.h"
#include "pso/object/TObjCamera.h"
#include "pso/player/TObjPlayer.h"
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
s32 launch_rare_weapon_special__10TObjPlayerFv(void *, void *, int, f32);

void drill_launcher_marker(RecoilWeaponView *arg0);
s32 rotate_matrix_z(s32, s32);
s32 draw_ginja_object(void *);
void drill_launcher_node_callback(void *arg0);
void drill_launcher_update(void *arg0);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
void *item_equip_variant_deleting_dtor_80124AEC(void *arg0, s16 arg1);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
s32 drill_launcher_create_shot(s32 arg0, s32 arg1, s32 arg2, f32 farg0);

void* drill_launcher_ct(void* a0, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_drill_launcher(u8 *arg0);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1);
void drill_launcher_return_timer(void *arg0);
void increment_burst_counter(u8 *arg0);
s32 get_burst_counter(void* p);
s32 get_id__13TItemProArmorFv(void *);
s32 __nw__15TItemHeapObjectFUl(s32);
s32 init_vtable__13TItemProArmorFPv(s32, u32, s32, s32);
void init_armor__10TObjPlayerFPv(void *arg0);
s32 post_translate_matrix(void *);
s32 draw_weapon_at_joint(void *, s32, void *);
s32 warn_if_gauge_low__10TObjPlayerFv(s32);
s32 set_model_fade_alpha__10TObjPlayerFf();
s32 TObjPlayer__sub_80364198();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
extern s32 model_render_flags;
void draw_held_item__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8012443C(MegidWeaponRenderView *arg0);
s32 get_current_floor();
s32 is_item_area_enabled();
extern s32 tl_05;
void update_blink__10TObjPlayerFPv(void *arg0);
s32 create_ex__9TTecMegidFllll(void *, s32 *, s32, s32);
void cast_megid__10TObjPlayerFPv(void *arg0);
s32 __nw__7TObjectFUl(s32);
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
s8 TObjPlayer__sub_80102C30();
s32 copy_position__15TEffStarLight2DFPv(u32, s32 *);
s32 queue_destruction__7TObjectFv(void *);
void run_task__13TUnk_804A2018Fv(void *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1);
void *TObjPlayer__sub_80124694(void *arg0);
extern s32 tl_05;
u8 *TObjPlayer__sub_80124708(u8 *arg0);
s32 is_owner_alive__15TItemShootModelFv();
s32 rotate_matrix_x(int, int);

void TObjPlayer__sub_8012480C(void);
void __ct__15TItemShootModelFPvPC3VecPC3Vecf(void *);
s32 spawn_slot_emitter__18TItemShootParticleFPvii(s32, s32, s32);
u32 spawn_shoot_particle__10TObjPlayerFUlllf(s32, s32, s32, f32);
typedef u8 *(*Fn_80124694_3)(void *, s32, void *);
typedef s32 (*Fn_80124810_5)(s32, s32, s32, s32, f32);

extern "C" void render__7TObjectFv();
extern "C" void render_shadows__7TObjectFv();
void *weapon_star_light_follower_vtable[6] = {
    (void *)0x0, (void *)0x0, (void *)&TObjPlayer__sub_8012417C, (void *)&run_task__13TUnk_804A2018Fv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define weapon_star_light_follower_vtable ((u8 *)weapon_star_light_follower_vtable)

void TUnk_804A2018::run_task() {
    s32 sp8;
    s32 temp_r3;
    if ((u32) this->m_28 != ((u32)get_item_system_generation())) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    if ((u32) *(u32 *)((s8 *)this + 0x24) != 0U) {
        temp_r3 = ((s32)find_item_by_id(*(s32 *)((s8 *)this + 0x1C)));
        if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2) && (((TObjPlayer *)temp_r3)->draw_icon((s32)((s32)(this->m_20)), (s32)((s32 *)(&sp8))) != 0)) {
            if (((TItemMag *)temp_r3)->get_flag_40() == 0) {
                copy_position__15TEffStarLight2DFPv(*(u32 *)((s8 *)this + 0x24), &sp8);
                return;
            }
            ((TObjCamera *)(*(u32 *)((s8 *)this + 0x24)))->queue_target_destruction();
            return;
        }
    }
    queue_destruction__7TObjectFv(this);
}

void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = ((s32 *)weapon_star_light_follower_vtable);
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
    if (p != NULL && ((TObjPlayer *)p)->draw_icon((s32)((s32)(self->f20)), (s32)((s32 *)(&v))) != 0) {
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
    s32 sp8;
    void *temp_r31;
    if (((TObjPlayer *)arg0)->is_mode_two_and_ready() != 0) {
        if (((TObjPlayer *)arg0)->draw_icon((s32)5, (s32)(&sp8)) != 0) {
            temp_r31 = *(void **)((s8 *)arg0 + 0xF0);
            create_ex__9TTecMegidFllll(temp_r31, &sp8, *(s32 *)((s8 *)temp_r31 + 0x60), ((TObjPlayer *)arg0)->get_tp());
            ((TItemWeapon *)arg0)->roll_technique();
        }
    } else {
        ((TObjPlayer *)arg0)->update_active_game_effect();
    }
}

void update_blink__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1FC) == 1) {
        *(s32 *)((s8 *)arg0 + 0x200) = (s32) (*(s32 *)((s8 *)arg0 + 0x200) + 0xAAA);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x200) >= 0x2000) {
            *(s32 *)((s8 *)arg0 + 0x200) = 0x2000;
            *(s32 *)((s8 *)arg0 + 0x1FC) = 0;
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x200) = (s32) (*(s32 *)((s8 *)arg0 + 0x200) - 0xAAA);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x200) <= -0x2000) {
            *(s32 *)((s8 *)arg0 + 0x200) = -0x2000;
            *(s32 *)((s8 *)arg0 + 0x1FC) = 1;
        }
    }
    temp_r3 = get_current_floor();
    if (((s32) *(s32 *)((s8 *)arg0 + 0x204) != temp_r3) && ((u32) *(u32 *)((s8 *)arg0 + 0xF4) != 0U)) {
        *(s32 *)((s8 *)arg0 + 0x204) = temp_r3;
        if (is_item_area_enabled() != 0) {
            create_icon__10TObjPlayerFiii((s32)((s32)(tl_05)), (s32)((s32)(((TObjPlayer *)arg0)->get_field_d8())), (s32)((s32)(5)));
        }
    }
}

void TObjPlayer__sub_8012443C(MegidWeaponRenderView *arg0) {
    switch (((u32)TObjPlayer::get_player_list())) {
    case 1:
        rotate_matrix_y((int)(0), (int)(arg0->f200));
        return;
    case 2:
        TObjPlayer::play_particle_effect_once();
        return;
    case 3:
        rotate_matrix_y((int)(0), (int)(-arg0->f200));
        return;
    case 4:
        TObjPlayer::play_particle_effect_once();
        return;
    case 6:
        TObjPlayer::play_particle_effect_once();
        break;
    case 0:
    case 5:
        break;
    }
}

void draw_held_item__10TObjPlayerFPv(void *arg0) {
    s32 sp8;
    s32 temp_r3;
    void *temp_r31;
    void *temp_r5;
    if (((void *) *(void **)((s8 *)arg0 + 0xF4) != NULL) && (((TItemMag *)arg0)->get_flag_40() == 0)) {
        temp_r5 = *(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0xF4)) + 0x2C)) + 0x30);
        temp_r31 = *(void **)((s8 *)temp_r5 + 0x30);
        *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) | 0x18);
        draw_weapon_at_joint(arg0, 0x30, temp_r5);
        *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) & 0xFFFFFFE7);
        if (((TObjPlayer *)arg0)->draw_icon((s32)5, (s32)(&sp8)) != 0) {
            push_matrix();
            TObjPlayer__sub_80364198();
            model_render_flags &= 0xFFFFFFEF;
            ((TObjPlayer *)arg0)->get_mag_scale();
            set_model_fade_alpha__10TObjPlayerFf();
            post_translate_matrix((void *)(&sp8));
            rotate_matrix_y((int)(0), (int)(*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xF0)) + 0x60)));
            *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) | 0x11);
            draw_ginja_object(temp_r31);
            TParticleCtrl::begin_effect_render();
            draw_ginja_object(*(void **)((s8 *)temp_r31 + 0x2C));
            TParticleCtrl::end_effect_render();
            temp_r3 = *(s32 *)((s8 *)temp_r31 + 0);
            *(s32 *)((s8 *)temp_r31 + 0) = (s32) (temp_r3 & ~0x11);
            warn_if_gauge_low__10TObjPlayerFv(temp_r3);
            pop_matrix();
            pop_matrix();
        }
    }
}

void init_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    *(s32 *)((s8 *)arg0 + 0x204) = -1;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x174) != 0U) {
        temp_r3 = __nw__15TItemHeapObjectFUl(0x2C);
        if (temp_r3 != 0) {
            init_vtable__13TItemProArmorFPv(temp_r3, *(u32 *)((s8 *)arg0 + 0x174), get_id__13TItemProArmorFv(arg0), 0x5A);
        }
    }
    ((TItemWeapon *)arg0)->roll_technique();
    ((TItemWeapon *)arg0)->roll_technique();
}

void render__13TUnk_804A2148Fv(u8 *);
extern "C" void TItemEquipBase__sub_8010A77C();
extern "C" void TItemWeapon__sub_8011E5C4();
extern "C" void TItemWeapon__sub_8011E5C8();
extern "C" void TItemWeapon__sub_8011E5CC();
extern "C" void reserved_53__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_8011E5D8();
extern "C" void update_attack__11TItemWeaponFv();
extern "C" void set_technique_roll__11TItemWeaponFl();
extern "C" void TItemWeapon__sub_801200C0();
extern "C" void TItemWeapon__sub_8012012C();
extern "C" void reserved_43__11TItemWeaponFv();
extern "C" void TItemWeapon__sub_80121064();
extern "C" void TItemWeapon__write_item_data();
extern "C" void TItem__sub_801005D8();
extern "C" void TItem__sub_801005E0();
extern "C" void TItem__sub_801005E4();
extern "C" void TItem__sub_80100648();
extern "C" void TItem__sub_80100B8C();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void add_equip_stats__14TItemEquipBaseFPvi();
extern "C" void reserved_42__11TItemWeaponFv();
extern "C" void apply_object_set_data();
extern "C" void reserved_46__11TItemWeaponFv();
extern "C" void classify_actor_view_detail();
extern "C" void deliver_hit__11TItemWeaponFPviPviif();
extern "C" void reserved_28__11TItemWeaponFv();
extern "C" void dispatch_state__5TItemFv();
extern "C" void draw_equipped_weapon__11TItemWeaponFv();
extern "C" void draw_weapon_trails__11TItemWeaponFPv();
extern "C" void equip__14TItemEquipBaseFv();
extern "C" void get_attack_flags__11TItemWeaponFv();
extern "C" void get_motion_ptr__11TItemWeaponFv();
extern "C" void launch_shot__11TItemWeaponFPvPviii();
extern "C" void reserved_44__11TItemWeaponFv();
extern "C" void register_attack__5TItemFv();
extern "C" void release_member_90__10TObjPlayerFv();
extern "C" void remove_equip_stats__14TItemEquipBaseFPvi();
extern "C" void render_shadows__5TItemFv();
extern "C" void reserved_47__11TItemWeaponFv();
extern "C" void reset_item_equip();
extern "C" void ret_8010064C();
extern "C" void ret_80100654();
extern "C" void ret_8010065C();
extern "C" void ret_80100664();
extern "C" void run_task__10TItemShootFv();
extern "C" void run_task__5TItemFv();
extern "C" void set_attach_slot__14TItemEquipBaseFSc();
extern "C" void subtract_equip_stats__14TItemEquipBaseFlPUcPUc();
extern "C" void subtract_item_stat_bonus__14TItemEquipBaseFllPs();
extern "C" void try_pick_up_item__5TItemFPvi();
extern "C" void unequip__14TItemEquipBaseFv();
extern "C" void update_active_weapon__11TItemWeaponFv();
extern "C" void update_equip__14TItemEquipBaseFv();
extern "C" void reserved_32__11TItemWeaponFv();
extern "C" void update_weapon_trails__11TItemWeaponFv();
void *megid_projectile_weapon_vtable[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_8012463C, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render_shadows__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFv,
    (void *)&update_weapon_trails__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&reserved_28__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&reserved_32__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&reserved_42__11TItemWeaponFv, (void *)&reserved_43__11TItemWeaponFv, (void *)&reserved_44__11TItemWeaponFv, (void *)&reset_item_equip,
    (void *)&reserved_46__11TItemWeaponFv, (void *)&reserved_47__11TItemWeaponFv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&cast_megid__10TObjPlayerFPv, (void *)&update_attack__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5D8, (void *)&draw_held_item__10TObjPlayerFPv,
    (void *)&update_blink__10TObjPlayerFPv, (void *)&init_armor__10TObjPlayerFPv, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&TObjPlayer__sub_8012443C, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)0x0,
};
void *recoil_weapon_shoot_model_vtable[7] = {
    (void *)0x0, (void *)0x0, (void *)&dt_item_shoot_model__10TObjPlayerFPvs, (void *)&run_task__10TItemShootFv,
    (void *)&render__13TUnk_804A2148Fv, (void *)&render_shadows__7TObjectFv, (void *)&TObjPlayer__sub_8012480C,
};
void *recoiling_projectile_weapon_vtable[63] = {
    (void *)0x0, (void *)0x0, (void *)&item_equip_variant_deleting_dtor_80124AEC, (void *)&run_task__5TItemFv,
    (void *)&dispatch_state__5TItemFv, (void *)&render_shadows__5TItemFv, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&release_member_90__10TObjPlayerFv, (void *)&get_motion_ptr__11TItemWeaponFv, (void *)&TItem__sub_80100B8C, (void *)&classify_actor_view_detail,
    (void *)&register_attack__5TItemFv, (void *)&try_pick_up_item__5TItemFPvi, (void *)&TItemWeapon__sub_801200C0, (void *)&TItem__sub_801005E0,
    (void *)&update_active_weapon__11TItemWeaponFv, (void *)&set_technique_roll__11TItemWeaponFl, (void *)&TItemWeapon__write_item_data, (void *)&set_attach_slot__14TItemEquipBaseFSc,
    (void *)&equip__14TItemEquipBaseFv, (void *)&unequip__14TItemEquipBaseFv, (void *)&add_equip_stats__14TItemEquipBaseFPvi, (void *)&remove_equip_stats__14TItemEquipBaseFPvi,
    (void *)&subtract_item_stat_bonus__14TItemEquipBaseFllPs, (void *)&subtract_equip_stats__14TItemEquipBaseFlPUcPUc, (void *)&draw_weapon_trails__11TItemWeaponFPv, (void *)&draw_equipped_weapon__11TItemWeaponFv,
    (void *)&update_weapon_trails__11TItemWeaponFv, (void *)&update_equip__14TItemEquipBaseFv, (void *)&reserved_28__11TItemWeaponFv, (void *)&TItem::update_pickup_flag,
    (void *)&get_attack_flags__11TItemWeaponFv, (void *)&TItemEquipBase__sub_8010A77C, (void *)&reserved_32__11TItemWeaponFv, (void *)&TItemWeapon::copy_item_to_data,
    (void *)&ret_80100664, (void *)&ret_8010065C, (void *)&ret_80100654, (void *)&ret_8010064C,
    (void *)&TItem__sub_80100648, (void *)&TItem__sub_801005E4, (void *)&TItem__sub_801005D8, (void *)&TItemWeapon__sub_80121064,
    (void *)&reserved_42__11TItemWeaponFv, (void *)&reserved_43__11TItemWeaponFv, (void *)&reserved_44__11TItemWeaponFv, (void *)&reset_item_equip,
    (void *)&reserved_46__11TItemWeaponFv, (void *)&reserved_47__11TItemWeaponFv, (void *)&TItemWeapon__sub_8012012C, (void *)&launch_shot__11TItemWeaponFPvPviii,
    (void *)&drill_launcher_marker, (void *)&update_attack__11TItemWeaponFv, (void *)&TItemWeapon__sub_8011E5D8, (void *)&reserved_53__11TItemWeaponFv,
    (void *)&drill_launcher_update, (void *)&TItemWeapon__sub_8011E5CC, (void *)&TItemWeapon__sub_8011E5C8, (void *)&TItemWeapon__sub_8011E5C4,
    (void *)&drill_launcher_node_callback, (void *)&deliver_hit__11TItemWeaponFPviPviif, (void *)0x0,
};
#define megid_projectile_weapon_vtable ((s32 *)megid_projectile_weapon_vtable)
#define recoil_weapon_shoot_model_vtable ((s32 *)recoil_weapon_shoot_model_vtable)
#define recoiling_projectile_weapon_vtable ((s32 *)recoiling_projectile_weapon_vtable)

void *item_equip_variant_deleting_dtor_8012463C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = megid_projectile_weapon_vtable;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void *TObjPlayer__sub_80124694(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = megid_projectile_weapon_vtable;
    ((TObjPlayer *)((char *)arg0 + 376))->set_flags(32);
    set_status_flags__10TObjPlayerFPvUi(arg0, 35);
    ((TObjPlayer *)arg0)->set_effect_state(12);
    *(u32 *)((s8 *)arg0 + 0x1F8) = 0;
    *(u32 *)((s8 *)arg0 + 0x200) = 0;
    *(u32 *)((s8 *)arg0 + 0x204) = -1;
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

void TUnk_804A2148::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;

    if (is_owner_alive__15TItemShootModelFv() != 0) {
        temp_r3 = (unsigned char *) (*(void * *)&this->m_58);
        if ((temp_r3 != NULL) && ((u32) *(u32 *)&this->m_5C != 0U)) {
            temp_r3_2 = (unsigned char *) (*(void **)((s8 *)temp_r3 + 0x2C));
            temp_r31 = (unsigned char *) (*(void **)((s8 *)temp_r3_2 + 0x30));
            *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) & 0xFFFFFFFB);
            *(f32 *)((s8 *)temp_r31 + 0x20) = (f32) 10.0f;
            push_matrix();
            TObjPlayer::notify_fish_if_valid((int) (*(u32 *)&this->m_5C));
            post_translate_matrix((void *) (arg0 + 0x1C));
            rotate_matrix_y((int) (0), (int) (this->m_count));
            rotate_matrix_x((int) (0), (int) (this->m_28 - 0x4000));
            draw_ginja_object((void *) (*(void * *)&this->m_58));
            pop_matrix();
            *(f32 *)((s8 *)temp_r31 + 0x20) = (f32) 1.0f;
        }
    }
}

void TObjPlayer__sub_8012480C(void) {  }

void *ct_shoot_model__10TObjPlayerFPv(void *arg0) {
    __ct__15TItemShootModelFPvPC3VecPC3Vecf(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = recoil_weapon_shoot_model_vtable;
    return arg0;
}

s32 drill_launcher_create_shot(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
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
    var_r0 = spawn_shoot_particle__10TObjPlayerFUlllf(arg0, arg1, arg2, farg0);
    if (var_r0 != 0U) {
        spawn_slot_emitter__18TItemShootParticleFPvii(var_r0, 0x1BB, 0);
    }
    return var_r31;
}
typedef char BurstReadyOffset[offsetof(RecoilWeaponView, projectileVisible)==0x1F8 ? 1 : -1];
typedef char BurstModeOffset[offsetof(RecoilWeaponView, recoilPhase)==0x204 ? 1 : -1];
void drill_launcher_marker(RecoilWeaponView *arg0) {
    WeaponVector sp8;
    s32 temp_r31;
    s32 var_r30;
    if ((s32) arg0->projectileVisible == 1) {
        TItemAttacker::spawn_item_timer((s32)arg0, (s32)drill_launcher_return_timer, (s32)0x1E);
        arg0->projectileVisible = 0;
    }
    arg0->recoilPhase = 2;
    temp_r31 = (s32)arg0->player + 0x7CC;
    if (get_burst_counter((void*)((int) (temp_r31))) == 0) {
        var_r30 = 0;
        do {
            increment_burst_counter((u8 *)((int) (temp_r31)));
            var_r30 += 1;
        } while (var_r30 != 2);
    }
    ((TObjPlayer *)arg0)->draw_status_icon((s32)((void *) (&sp8)));
    if (((TObjPlayer *)arg0)->is_mode_two_and_ready() != 0) {
        launch_rare_weapon_special__10TObjPlayerFv((void *) (arg0), (void *) (&sp8), (int) (1), (f32) (1.0f));
        return;
    }
    arg0->deliver_projectile(&sp8, 0, 0, 1);
}
void drill_launcher_node_callback(void *arg0) {
    s32 temp_r3;
    temp_r3 = TObjPlayer::get_player_list();
    if ((temp_r3 > 0) && (temp_r3 < 4)) {
        rotate_matrix_z(0, *(s32 *)((s8 *)arg0 + 0x200));
        return;
    }
    if (temp_r3 == 4) {
        if (*(u32 *)((s8 *)arg0 + 0x188) != 0U) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) == 1) {
                draw_ginja_object((void *)(*(u32 *)((s8 *)arg0 + 0x188)));
            }
        }
    }
}
void drill_launcher_update(void *arg0) {
    s32 temp_r0;
    void *temp_r4;
    void *temp_r4_2;
    *(s32 *)((s8 *)arg0 + 0x1FC) = (s32) (*(s32 *)((s8 *)arg0 + 0x1FC) + 0x1999);
    temp_r4 = *(void **)((s8 *)arg0 + 0x188);
    if (temp_r4 != NULL) {
        temp_r4_2 = *(void **)((s8 *)temp_r4 + 0x2C);
        *(s32 *)((s8 *)temp_r4_2 + 0) = (s32) (*(s32 *)((s8 *)temp_r4_2 + 0) & 0xFFFFFFFD);
        *(s32 *)((s8 *)temp_r4_2 + 0x18) = (s32) *(s32 *)((s8 *)arg0 + 0x1FC);
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x204);
    switch (temp_r0) {
    case 1:
        *(s32 *)((s8 *)arg0 + 0x200) = (s32) (*(s32 *)((s8 *)arg0 + 0x200) + 0xE38);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x200) >= 0) {
            *(s32 *)((s8 *)arg0 + 0x200) = 0;
            *(s32 *)((s8 *)arg0 + 0x204) = 0;
        }
        return;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x200) = (s32) (*(s32 *)((s8 *)arg0 + 0x200) - 0xE38);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x200) <= -0x31C7) {
            *(s32 *)((s8 *)arg0 + 0x200) = -0x31C7;
            *(s32 *)((s8 *)arg0 + 0x204) = 3;
            return;
        }
        break;
    case 3:
        *(s32 *)((s8 *)arg0 + 0x204) = 1;
        return;
    }
}
void *item_equip_variant_deleting_dtor_80124AEC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = recoiling_projectile_weapon_vtable;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void* drill_launcher_ct(void* a0, s32 _w1, void * _w2) { TItemWeapon__ct((void *)(a0)); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)recoiling_projectile_weapon_vtable); *(int*)((char*)a0 + 0x1f0) = (int)drill_launcher_create_shot; *(float*)((char*)a0 + 0x1e4) = 9.0f; set_status_flags__10TObjPlayerFPvUi((void *)(a0), (int)((void*)34)); *(int*)((char*)a0 + 0x1f8) = 1; *(int*)((char*)a0 + 0x1fc) = 0; *(int*)((char*)a0 + 0x200) = 0; return a0; }
u8 *create_drill_launcher(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x208));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)drill_launcher_ct((void*)(temp_r3), (s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}
void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = recoil_weapon_shoot_model_vtable;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void drill_launcher_return_timer(void *arg0) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = 1;
    }
}
void increment_burst_counter(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x18) = (s32) (*(s32 *)((s8 *)arg0 + 0x18) + 1);
}
s32 get_burst_counter(void* p) { return *(s32*)((char*)p + 0x18); }

}
