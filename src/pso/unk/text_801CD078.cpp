#include "types.h"
struct Rec_801CD078 { u8 pad[0x10]; s16 cost; };

struct Player_801CD078 { u8 pad[0x32E]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

struct Node_801CD424 { u8 pad[0x1C]; f32 pos[3]; u8 pad28[0x2C - 0x28]; };

struct Obj_801CD424 { u8 pad[0xA4]; Node_801CD424 *nodes; };

struct TechData_801CD424 { u16 target; s16 node; };

struct Player_801CD424 {
    u8 pad[0x60];
    s32 f60;
    u8 pad64[0xBA - 0x64];
    s16 fba;
    u8 padbc[0x326 - 0xBC];
    s16 f326;
    s16 f328;
    u8 pad32a[0x33C - 0x32A];
    s32 f33c;
    u8 pad340[0x3F0 - 0x340];
    s32 f3f0;
    u8 pad3f4[0x428 - 0x3F4];
    u8 techs[0x744 - 0x428];
    u8 f744[4];
};

struct Sub_801CD188 { u8 pad[0x508]; u16 f508; };

struct Player_801CD188 { u8 pad[0xB0]; u32 flags; u8 padb4[0x424 - 0xB4]; Sub_801CD188 *sub; };

typedef struct Msg1_801CD72C {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg1_801CD72C;

typedef struct Msg2_801CD72C {
    u8 pad0[2];
    s16 id;
    u8 tech;
    u8 pad5;
    u8 lv;
    u8 count;
    u32 data[13];
} Msg2_801CD72C;

typedef struct Player_801CD72C {
    u8 pad0[0x424];
    void *cursor;
    u8 techs[4];
} Player_801CD72C;

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Msg_801CD6BC {
    u8 pad0[2];
    u16 id;
    u8 level;
    u8 pad5[3];
} Msg_801CD6BC;

extern "C" {
s32 test_bit1_at_10__10TObjPlayerFPv(void *techs);
s32 obj_testFlags30(void *obj, u32 flags);
s32 test_action_mask__10TObjPlayerFPvi(void *obj, s32 id);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *obj);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 validate_and_clear_slot__10TObjPlayerFPv(void *techs, s16 tech);
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
s32 obj_getField1c(void *obj);
u8 get_cast_technique_level(void *techs, s16 tech);
Rec_801CD078 *calc_technique_parameters(s32 tech, s32 level, s32 id);
s32 can_start_technique__10TObjPlayerFPvi(Player_801CD078 *self, s32 tech);
void run_action_state_phase__10TObjPlayerFisi(void *obj, s16 a, s32 b);
TechData_801CD424 *get_technique_data__10TObjPlayerFPv(void *techs);
s32 obj_getField1c(void *obj);
s16 get_section_clamped__10TObjPlayerFPv(void *techs);
Obj_801CD424 *find_entity_by_id(u16 id);
void copy_position__10TObjPlayerFPv(void *dst, void *src);
void *get_field4_ptr__10TObjPlayerFPv(void *p);
void *get_position_ptr__10TObjPlayerFPv(void *obj);
s32 calc_angle_to__10TObjPlayerFPvPv(void *from, void *to);
void obj_setFlags30(void *obj, u32 flags);
void TObjPlayer__sub_8001053C(void *obj);
s32 obj_isState2_324(void *obj);
s16 ret_801D26AC();
s16 get_status__10TObjPlayerFPv(void *obj);
void set_action_state__10TObjPlayerFPvss(void *obj, s16 a, s16 b);
void enter_technique_cast__10TObjPlayerFPv(Player_801CD424 *self);
void TObjPlayer__sub_8011E204(void *obj, s32 v);
void obj_clearFlags30(void *obj, u32 flags);
void clear_status_bit6__10TObjPlayerFPv(void *obj);
void exit_technique_cast__10TObjPlayerFPv(Player_801CD188 *self);
s32 obj_isState2_324(void *obj);
s32 obj_getField1c(void *obj);
void set_cursor_pos__11TMainCursorFiUsi(void *, u16, s16);
void TNpcPlayer__sub_80152C48(void *);
void TNpcPlayer__sub_80152D04(void *);
void copy_tech_params__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801D22AC(void *);
void send_swap_field6__10TObjPlayerFPv(void *);
TechData_801CD424 *get_technique_data__10TObjPlayerFPv(void *techs);
s16 get_section_clamped__10TObjPlayerFPv(void *techs);
s16 get_or_init_field_4__10TObjPlayerFPv(void *);
void split_capped_value__10TObjPlayerFUcPvPv(u8, u8 *, u8 *);
u8 get_cast_technique_level(void *techs, s16 tech);
void capture_technique_targets__10TObjPlayerFv(s32, void *);
void request_technique_cast__10TObjPlayerFPv(Player_801CD72C *self);
M2C_UNK apply_velocity__10TObjPlayerFPv(void *);
s32 obj_isState2_324(void *obj);
s32 obj_getField1c(void *obj);
s32 TObjPlayer__sub_80082300(void *);
void TObjPlayer__sub_8011E204(void *obj, s32 v);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
s32 lerp_angle_half__10TObjPlayerFUsUs(int, int);
s32 objInBand__FP7GameObjf(void *, f32);
u32 resolve_move_collision__10TObjPlayerFPv(void *);
M2C_UNK pay_tp_and_send_6x48_cast__10TObjPlayerFPv(void *);
s16 get_idle_animation__10TObjPlayerFPv(void *);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
void clear_status_bit6__10TObjPlayerFPv(void *obj);
M2C_UNK set_technique_state__10TObjPlayerFPvi(void *, int);
M2C_UNK TObjPlayer__sub_801D2CAC(void *);
f32 get_float_14__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D2CC4(void *, f32);
u8 *TObjPlayer__sub_801D8DCC(void *);
s16 get_or_init_field_4__10TObjPlayerFPv(void *);
u8 TObjPlayer__sub_801D96CC(void *);
M2C_UNK create_technique_charge_light(s16, void *);
Rec_801CD078 *calc_technique_parameters(s32 tech, s32 level, s32 id);
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 TObjPlayer__data_805DC39C;
extern const f32 lbl_805DC3A0;
extern const f32 lbl_805DC3A4;
void update_technique_cast__10TObjPlayerFPv(u8 *arg0);
u8 *get_player_by_client_id(u16);
void swap_field6__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D2260(void *, void *);
void TObjPlayer__sub_801D22AC(void *);
void set_tech_override__10TObjPlayerFPvUc(void *, u8);
s32 validate_6x8D_set_technique_level_override(void *);
void handle_6x8D_set_technique_level_override(void *arg0);
}

extern "C" {

s32 can_start_technique__10TObjPlayerFPvi(Player_801CD078 *self, s32 tech) {
    if (test_bit1_at_10__10TObjPlayerFPv(self->techs) != 0 ||
        obj_testFlags30(self, 0x20006) != 0 ||
        obj_testFlags30(self, 0x2000000) != 0 ||
        test_action_mask__10TObjPlayerFPvi(self, 0x11E) == 0 ||
        (tech == 0xE && is_flag_clear__17TObjWarpBossMultiFPv(self) == 0) ||
        (tech == 0x11 && is_camera_mode_active__10TObjPlayerFv() != 0) ||
        validate_and_clear_slot__10TObjPlayerFPv(self->techs, tech) != 0 ||
        reset_volopt_state__10TObjPlayerFv(self) == 0) {
        return 0;
    }
    return self->tp - calc_technique_parameters(tech, get_cast_technique_level(self->techs, tech), obj_getField1c(self))->cost >= 0 ? 1 : 0;
}

void exit_technique_cast__10TObjPlayerFPv(Player_801CD188 *self) {
    self->flags &= ~0x40;
    TObjPlayer__sub_8011E204(self, 0x80);
    obj_clearFlags30(self, 0x400000);
    clear_status_bit6__10TObjPlayerFPv(self);
    if (self->sub != 0) {
        self->sub->f508 = 0xFFFF;
    }
}

void update_technique_cast__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r30;
    u8 temp_r31;
    u8 *temp_r3;
    M2C_FIELD(arg0, s32 *, 0x60) = lerp_angle_half__10TObjPlayerFUsUs((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x3F0)));
    temp_r3 = (u8 *)(TObjPlayer__sub_801D8DCC(arg0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 3:
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x80));
        create_technique_charge_light((s16) (get_or_init_field_4__10TObjPlayerFPv((void *) (arg0 + 0x428))), (void *) (arg0));
        set_technique_state__10TObjPlayerFPvi((void *) (arg0 + 0x428), (int) (M2C_FIELD(calc_technique_parameters(get_or_init_field_4__10TObjPlayerFPv((void *) (arg0 + 0x428)), TObjPlayer__sub_801D96CC((void *) (arg0 + 0x428)), obj_getField1c((void *) (arg0))), s16 *, 0x12)));
        TObjPlayer__sub_801D2CC4((void *) (arg0 + 0x428), (f32) (lbl_805DC3A0));
        break;
    case 1:
        if (is_flag_b0_4__10TObjPlayerFPv((void *) (arg0)) == 0) {
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x40);
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (M2C_FIELD(arg0, f32 *, 0xC0) + get_float_14__10TObjPlayerFPv((void *) (arg0 + 0x428)));
            if (get_float_14__10TObjPlayerFPv((void *) (arg0 + 0x428)) > TObjPlayer__data_805DC36C) {
                if (M2C_FIELD(arg0, f32 *, 0xC0) >= TObjPlayer__data_805DC39C) {
                    TObjPlayer__sub_801D2CC4((void *) (arg0 + 0x428), (f32) (lbl_805DC3A4));
                }
            } else if (M2C_FIELD(arg0, f32 *, 0xC0) < TObjPlayer__data_805DC36C) {
                TObjPlayer__sub_801D2CC4((void *) (arg0 + 0x428), (f32) (lbl_805DC3A0));
            }
        }
        TObjPlayer__sub_801D2CAC((void *) (arg0 + 0x428));
        if (TObjPlayer__sub_80082300((void *) (arg0 + 0x428)) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFBF);
        }
        break;
    case 2:
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (M2C_FIELD(temp_r3, f32 *, 0xC))) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            TObjPlayer__sub_8011E204((void *) (arg0), (int) (0x80));
            set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
            if (obj_isState2_324((void *) (arg0)) == 0) {
                pay_tp_and_send_6x48_cast__10TObjPlayerFPv((void *) (arg0));
            }
        }
        break;
    case 4:
        TObjPlayer__sub_801D2CAC((void *) (arg0 + 0x428));
        if (TObjPlayer__sub_80082300((void *) (arg0 + 0x428)) < 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 5;
            M2C_FIELD(arg0, s16 *, 0xB8) = get_idle_animation__10TObjPlayerFPv((void *) (arg0));
            clear_status_bit6__10TObjPlayerFPv((void *) (arg0));
        }
        break;
    }
    if (resolve_move_collision__10TObjPlayerFPv((void *) (arg0)) == 0U) {
        apply_velocity__10TObjPlayerFPv((void *) (arg0));
    }
}

void enter_technique_cast__10TObjPlayerFPv(Player_801CD424 *self) {
    TechData_801CD424 *td;
    u16 target;
    Obj_801CD424 *o;
    self->f33c = 8;
    run_action_state_phase__10TObjPlayerFisi(self, self->f326, 6);
    td = get_technique_data__10TObjPlayerFPv(self->techs);
    target = td->target;
    if (target == 0xFFFF || target == (u16)obj_getField1c(self) ||
        get_section_clamped__10TObjPlayerFPv(self->techs) == 0) {
        self->f3f0 = self->f60;
    } else {
        o = find_entity_by_id(target);
        if (o == 0) {
            td->target = 0xFFFF;
        } else {
            copy_position__10TObjPlayerFPv(self->f744, o->nodes[td->node].pos);
            self->f3f0 = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(self),
                                                         get_field4_ptr__10TObjPlayerFPv(self->f744));
        }
    }
    obj_setFlags30(self, 0x400000);
    TObjPlayer__sub_8001053C(self);
    self->f328 = 0;
    if (obj_isState2_324(self) != 0) {
        self->fba = ret_801D26AC();
    }
    set_action_state__10TObjPlayerFPvss(self, 8, get_status__10TObjPlayerFPv(self));
}

void handle_6x8D_set_technique_level_override(void *arg0) {
    Msg_801CD6BC m;
    u8 *p;
    TObjPlayer__sub_801D22AC(&m);
    TObjPlayer__sub_801D2260(&m, arg0);
    swap_field6__10TObjPlayerFPv(&m);
    if (validate_6x8D_set_technique_level_override(&m) != 0) {
        p = get_player_by_client_id(m.id);
        if (p != NULL) {
            set_tech_override__10TObjPlayerFPvUc(p + 0x428, m.level);
        }
    }
}

void request_technique_cast__10TObjPlayerFPv(Player_801CD72C *self) {
    u8 hi;
    u8 lo;
    Msg1_801CD72C m1;
    Msg2_801CD72C m2;
    TechData_801CD424 *td;
    s16 tech;
    s32 i;
    s32 count;
    TechData_801CD424 *src;
    u32 *dst;
    capture_technique_targets__10TObjPlayerFv(get_or_init_field_4__10TObjPlayerFPv(self->techs), self);
    if (self->cursor != NULL) {
        td = get_technique_data__10TObjPlayerFPv(self->techs);
        set_cursor_pos__11TMainCursorFiUsi(self->cursor, td->target, td->node);
    }
    tech = get_or_init_field_4__10TObjPlayerFPv(self->techs);
    split_capped_value__10TObjPlayerFUcPvPv(get_cast_technique_level(self->techs, tech), &hi, &lo);
    if (self == NULL || obj_isState2_324(self) == 0) {
        TObjPlayer__sub_801D22AC(&m1);
        m1.id = obj_getField1c(self);
        m1.level = lo;
        send_swap_field6__10TObjPlayerFPv(&m1);
        TNpcPlayer__sub_80152D04(&m2);
        m2.id = obj_getField1c(self);
        m2.tech = tech;
        m2.lv = hi;
        count = get_section_clamped__10TObjPlayerFPv(self->techs);
        m2.count = count;
        src = get_technique_data__10TObjPlayerFPv(self->techs);
        dst = m2.data;
        for (i = 0; i < count; i++) {
            copy_tech_params__10TObjPlayerFPvPv(dst++, src++);
        }
        TNpcPlayer__sub_80152C48(&m2);
    }
}

}
