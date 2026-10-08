#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Base_80171E7C { char pad[0x18]; };

struct VIcon_80171E7C : Base_80171E7C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Icon_80171E7C {
    s32 f0;
    u8 pad4[0x18 - 4];
    void **vt;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u32 f30;
    s32 f34;
    u8 pad38[0x68 - 0x38];
    f32 f68;
    f32 f6C;
    u8 pad70[0x84 - 0x70];
    s32 f84;
    s32 f88;
    s32 f8C;
    u8 pad90[0x326 - 0x90];
    s16 f326;
    u8 pad328[0x34C - 0x328];
    f32 f34C;
    f32 f350;
    s32 f354;
    f32 f358;
    u16 f35C;
    u8 pad35E[0x374 - 0x35E];
    s32 f374;
    s32 f378;
};

extern "C" {
u32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(int, void *, int, int);
void TOMineIcon04__vt78(s32 arg0);
void calc_attach_pos__10TObjPlayerFPv(void *);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void init_position_vectors__10TObjPlayerFi(void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void refresh_collision_body_centers(void *);
void init_collision_body_parts(void *, void *, s32);
void update_state__10TOMineTrapFPv(void *);
void TOMine__ct(void *, void *, void *);
extern u8 lbl_804B2F3C[];
extern void *__vt__12TOMineIcon04[];
extern s32 lbl_805D30A8;
extern s32 lbl_805D5550;
extern void *lbl_805D5A50;
extern const f32 lbl_805DB8D8;
extern const f32 lbl_805DB8DC;
extern const f32 lbl_805DB8E0;
extern const f32 lbl_805DB8E4;
extern const f32 lbl_805DB8E8;
void *TOMineIcon04__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

int TOMineIcon04__vt80(void* p);
void TOMineIcon04__vt82(void);
void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1);
void *create__12TOMineIcon04FPv(void *arg0);
int spawn_particle_effect(void*, int);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

void TOMineIcon04__vt82(void) {  }
int TOMineIcon04__vt80(void* p) { return spawn_particle_effect((char*)p + 0x2fc, 140); }

extern void *tl_05;

void TOMineTrap__sub_80170340();
void TOMineTrap__sub_80170348();
void TOMineTrap__sub_80170350();
void TOMineTrap__sub_80170354();
void TOMineTrap__sub_80170450();
void TOMineTrap__sub_80170524();
void TOMineTrap__sub_80170570();
void TOMineTrap__sub_80170768();
void TOMineTrap__sub_80170924();
void TOMineTrap__sub_80170A5C();
void TOMine__sub_801710E4();
void TObjPlayer__sub_8000FF3C();
void TObjPlayer__sub_80010A78();
void TObjPlayer__sub_80010A80();
void TObjPlayer__sub_80011010();
void TObjPlayer__sub_800111D8();
void TObjPlayer__sub_80014830();
void TObjPlayer__sub_80014838();
void TObjPlayer__sub_80014840();
void TObjPlayer__sub_80014884();
void TObjPlayer__sub_80014888();
void TObjPlayer__sub_8001488C();
void TObjPlayer__sub_80014890();
void TObjPlayer__sub_80014894();
void TObjPlayer__sub_80014898();
void apply_slow_status__10TObjPlayerFPv();
void update_shock_clock__10TObjPlayerFPv();
void TObjPlayer__sub_800172CC();
void TObjPlayer__sub_80018E6C();
void TObjPlayer__sub_80019568();
void add_actor_exp();
void apply_action_hold_status();
void apply_anti_technique__10TObjPlayerFv();
void apply_attack_stat_status__10TObjPlayerFv();
void apply_confusion_status__10TObjPlayerFv();
void apply_defense_stat_status__10TObjPlayerFv();
void apply_movement_ailment__10TObjPlayerFv();
void apply_paralysis__10TObjPlayerFv();
void apply_poison_status__10TObjPlayerFv();
void apply_shock_status__10TObjPlayerFv();
void apply_switch_attack__10TObjPlayerFi();
void calc_trigger_range__10TOMineTrapFPvi();
void can_trigger__10TOMineTrapFPvUi();
void check_trigger__10TOMineTrapFPvUi();
void classify_actor_view_detail();
void clear_all_status_effects();
void clear_harmful_statuses__10TObjPlayerFv();
void cure_paralysis__10TObjPlayerFv();
void cure_poison_ailment();
void enemy_spawn_jellen_effect();
void enemy_spawn_zalure_effect();
void fn_80010EBC();
void fn_80010EC0();
void fn_80010EC4();
void fn_80010EC8();
void get_actor_body_center();
void get_actor_level_index();
void get_pos__10TObjPlayerFii();
void has_flag_0x800__10TObjPlayerFPv();
void init_trap__10TOMineTrapFv();
void is_actor_cadence_frame();
void is_target_in_attack_range__10TObjPlayerFv();
void render_shadows__7TObjectFv();
void reset_actor_action_state();
void reset_pose__10TObjPlayerFPv();
void run_task__6TOMineFPv();
void spawn_effect__10TOMineTrapFi();
void test_flag30_512__10TObjPlayerFPv();
void test_flag_1000__10TObjPlayerFPv();
void test_flag_256__10TObjPlayerFPv();
void trigger_explosion__10TOMineTrapFPv();
void trigger_switch_attack__10TObjPlayerFi();
void update_action_hold_status__10TObjPlayerFv();
void update_action_timer__10TObjPlayerFPv();
void update_actor_ground_y();
void update_attack_stat_status();
void update_defense_stat_status();
void update_flag30_timer__10TObjPlayerFPv();
void update_movement_status__10TObjPlayerFv();
void update_object_view_visibility();
void update_poison_status__10TObjPlayerFv();

void *__vt__12TOMineIcon04[87] = {
    0,
    0,
    (void *)__dt__12TOMineIcon04Fv,
    (void *)run_task__6TOMineFPv,
    (void *)TOMine__sub_801710E4,
    (void *)render_shadows__7TObjectFv,
    (void *)TOMineTrap__sub_80170768,
    (void *)TOMineTrap__sub_80170524,
    (void *)reset_actor_action_state,
    (void *)get_actor_body_center,
    (void *)update_object_view_visibility,
    (void *)classify_actor_view_detail,
    (void *)init_trap__10TOMineTrapFv,
    (void *)TObjPlayer__sub_80019568,
    (void *)add_actor_exp,
    (void *)TObjPlayer__sub_800111D8,
    (void *)get_actor_level_index,
    (void *)update_actor_ground_y,
    (void *)TObjPlayer__sub_80018E6C,
    (void *)is_actor_cadence_frame,
    (void *)can_trigger__10TOMineTrapFPvUi,
    (void *)check_trigger__10TOMineTrapFPvUi,
    (void *)trigger_explosion__10TOMineTrapFPv,
    (void *)TOMineTrap__sub_80170924,
    (void *)calc_trigger_range__10TOMineTrapFPvi,
    (void *)TOMineTrap__sub_80170350,
    (void *)TOMineTrap__sub_80170348,
    (void *)TOMineTrap__sub_80170340,
    (void *)TObjPlayer__sub_80011010,
    (void *)TObjPlayer__sub_8000FF3C,
    (void *)is_target_in_attack_range__10TObjPlayerFv,
    (void *)test_flag_256__10TObjPlayerFPv,
    (void *)test_flag30_512__10TObjPlayerFPv,
    (void *)has_flag_0x800__10TObjPlayerFPv,
    (void *)test_flag_1000__10TObjPlayerFPv,
    (void *)update_poison_status__10TObjPlayerFv,
    (void *)update_action_hold_status__10TObjPlayerFv,
    (void *)update_action_timer__10TObjPlayerFPv,
    (void *)update_flag30_timer__10TObjPlayerFPv,
    (void *)update_movement_status__10TObjPlayerFv,
    (void *)update_shock_clock__10TObjPlayerFPv,
    (void *)update_attack_stat_status,
    (void *)update_defense_stat_status,
    (void *)TObjPlayer__sub_800172CC,
    (void *)apply_poison_status__10TObjPlayerFv,
    (void *)apply_paralysis__10TObjPlayerFv,
    (void *)apply_slow_status__10TObjPlayerFPv,
    (void *)apply_confusion_status__10TObjPlayerFv,
    (void *)apply_movement_ailment__10TObjPlayerFv,
    (void *)apply_shock_status__10TObjPlayerFv,
    (void *)clear_harmful_statuses__10TObjPlayerFv,
    (void *)apply_attack_stat_status__10TObjPlayerFv,
    (void *)apply_defense_stat_status__10TObjPlayerFv,
    (void *)cure_poison_ailment,
    (void *)cure_paralysis__10TObjPlayerFv,
    (void *)clear_all_status_effects,
    (void *)apply_action_hold_status,
    (void *)apply_anti_technique__10TObjPlayerFv,
    (void *)TObjPlayer__sub_80014898,
    (void *)TObjPlayer__sub_80014894,
    (void *)TObjPlayer__sub_80014890,
    (void *)TObjPlayer__sub_8001488C,
    (void *)TObjPlayer__sub_80014888,
    (void *)TObjPlayer__sub_80014884,
    (void *)reset_pose__10TObjPlayerFPv,
    (void *)TObjPlayer__sub_80014840,
    (void *)TObjPlayer__sub_80014838,
    (void *)TObjPlayer__sub_80014830,
    (void *)get_pos__10TObjPlayerFii,
    (void *)apply_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_jellen_effect,
    (void *)trigger_switch_attack__10TObjPlayerFi,
    (void *)enemy_spawn_zalure_effect,
    (void *)TObjPlayer__sub_80010A80,
    (void *)TObjPlayer__sub_80010A78,
    (void *)fn_80010EC8,
    (void *)fn_80010EC4,
    (void *)fn_80010EC0,
    (void *)fn_80010EBC,
    (void *)TOMineTrap__sub_80170354,
    (void *)TOMineIcon04__vt78,
    (void *)spawn_effect__10TOMineTrapFi,
    (void *)TOMineIcon04__vt80,
    (void *)TOMineTrap__sub_80170450,
    (void *)TOMineIcon04__vt82,
    (void *)TOMineTrap__sub_80170570,
    (void *)TOMineTrap__sub_80170A5C,
};

void TOMineIcon04__vt78(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 1:
    case 2:
        play_sound_effect((int) (0x4C111), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 3:
    case 4:
    case 5:
        play_sound_effect((int) (0x44110), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 6:
    case 7:
        play_sound_effect((int) (0x4004C10A), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 8:
    case 9:
    case 10:
        play_sound_effect((int) (0x4004C111), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 19:
    case 20:
        play_sound_effect((int) (0x4BC07), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 21:
    case 22:
        play_sound_effect((int) (0x4004BC07), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
        play_sound_effect((int) (0x4BC19), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    case 28:
    case 29:
        play_sound_effect((int) (0x4004BC19), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    default:
        return;
    }
}

void *create__12TOMineIcon04FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x37C);
    if (o != NULL) {
        o = TOMineIcon04__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern void *__vt__12TOMineIcon04[];

void *__dt__12TOMineIcon04Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__12TOMineIcon04;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
void *TOMineIcon04__ct(void *arg0, void *arg1, void *arg2) {
    TOMine__ct(arg0, arg1, arg2);
#define self ((Icon_80171E7C *)arg0)
    self->vt = ((void * *)&__vt__12TOMineIcon04);
    self->f0 = lbl_805D30A8;
    ((VIcon_80171E7C *)self)->m5(arg2);
    init_position_vectors__10TObjPlayerFi(self);
    calc_attach_pos__10TObjPlayerFPv(self);
    self->f34 = get_bml_model(lbl_805D5A50, 7);
    self->f24 = TObjFish__sub_8001EDB0(lbl_805D5A50, 7);
    self->f374 = get_bml_model(lbl_805D5A50, 3);
    self->f378 = TObjFish__sub_8001EDB0(lbl_805D5A50, 3);
    self->f326 = 0;
    if (self->f84 < 0) {
        self->f84 = 0;
    }
    if (self->f88 < 0) {
        self->f88 = 0;
    } else if (self->f88 > 5) {
        self->f88 = 5;
    }
    if (self->f8C < 0) {
        self->f8C = 0;
    }
    self->f358 = (f32)self->f84 * (lbl_805DB8DC * (f32)lbl_805D5550 + lbl_805DB8D8);
    if (lbl_805D5550 == 3) {
        self->f358 *= lbl_805DB8DC;
    }
    self->f354 = self->f88;
    self->f34C = lbl_805DB8E4 * self->f68 + lbl_805DB8E0;
    self->f350 = lbl_805DB8E4 * self->f6C + lbl_805DB8E8;
    update_state__10TOMineTrapFPv(self);
    self->f35C = 0xFFFF;
    self->f30 |= 0x60000000;
    init_collision_body_parts(self, lbl_804B2F3C, 1);
    refresh_collision_body_centers(self);
    reset_photon_effect__10TObjPlayerFPv(self);
    return self;
#undef self
}
#pragma pop

}
