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

extern "C" {
s32 test_bit1_at_10__10TObjPlayerFPv(void *techs);
s32 obj_testFlags30(void *obj, u32 flags);
s32 TLobby__sub_800822E8(void *obj, s32 id);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *obj);
s32 is_camera_mode_active__10TObjPlayerFv();
s32 validate_and_clear_slot__10TObjPlayerFPv(void *techs, s16 tech);
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
s32 obj_getField1c(void *obj);
u8 fn_801D9870(void *techs, s16 tech);
Rec_801CD078 *TTecCtrl__sub_8022DBC4(s32 tech, s32 level, s32 id);
s32 TObjPlayer__sub_801CD078(Player_801CD078 *self, s32 tech);
void TObjPlayer__sub_801D0BC0(void *obj, s16 a, s32 b);
TechData_801CD424 *get_technique_data__10TObjPlayerFPv(void *techs);
s32 obj_getField1c(void *obj);
s16 get_section_clamped__10TObjPlayerFPv(void *techs);
Obj_801CD424 *TPhotonMylla__sub_80154CB4(u16 id);
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
void TObjPlayer__sub_801CD424(Player_801CD424 *self);
void TObjPlayer__sub_8011E204(void *obj, s32 v);
void obj_clearFlags30(void *obj, u32 flags);
void clear_status_bit6__10TObjPlayerFPv(void *obj);
void TObjPlayer__sub_801CD188(Player_801CD188 *self);
}

extern "C" {

s32 TObjPlayer__sub_801CD078(Player_801CD078 *self, s32 tech) {
    if (test_bit1_at_10__10TObjPlayerFPv(self->techs) != 0 ||
        obj_testFlags30(self, 0x20006) != 0 ||
        obj_testFlags30(self, 0x2000000) != 0 ||
        TLobby__sub_800822E8(self, 0x11E) == 0 ||
        (tech == 0xE && is_flag_clear__17TObjWarpBossMultiFPv(self) == 0) ||
        (tech == 0x11 && is_camera_mode_active__10TObjPlayerFv() != 0) ||
        validate_and_clear_slot__10TObjPlayerFPv(self->techs, tech) != 0 ||
        reset_volopt_state__10TObjPlayerFv(self) == 0) {
        return 0;
    }
    return self->tp - TTecCtrl__sub_8022DBC4(tech, fn_801D9870(self->techs, tech), obj_getField1c(self))->cost >= 0 ? 1 : 0;
}

void TObjPlayer__sub_801CD188(Player_801CD188 *self) {
    self->flags &= ~0x40;
    TObjPlayer__sub_8011E204(self, 0x80);
    obj_clearFlags30(self, 0x400000);
    clear_status_bit6__10TObjPlayerFPv(self);
    if (self->sub != 0) {
        self->sub->f508 = 0xFFFF;
    }
}

void TObjPlayer__sub_801CD424(Player_801CD424 *self) {
    TechData_801CD424 *td;
    u16 target;
    Obj_801CD424 *o;
    self->f33c = 8;
    TObjPlayer__sub_801D0BC0(self, self->f326, 6);
    td = get_technique_data__10TObjPlayerFPv(self->techs);
    target = td->target;
    if (target == 0xFFFF || target == (u16)obj_getField1c(self) ||
        get_section_clamped__10TObjPlayerFPv(self->techs) == 0) {
        self->f3f0 = self->f60;
    } else {
        o = TPhotonMylla__sub_80154CB4(target);
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

}
