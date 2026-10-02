#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Msg_8014DC5C { s16 hdr; s16 type; s16 angle; s16 flag; };

struct Pl_8014DC5C { u8 pad[0x38]; u8 pos[0x7cc - 0x38]; u8 state[4]; };

struct Npc_8014DC5C { u8 pad[0x94]; Pl_8014DC5C *pl; };

struct Self_8014DC5C {
    u8 pad[0x5c];
    u8 f5C[0x78 - 0x5c];
    Npc_8014DC5C *npc;
};

extern "C" {
u32 get_npc_state__10TNpcPlayerFPv(s32);
M2C_UNK npc_counter_reset_if_reached(void *, M2C_UNK, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8015296C(void *, M2C_UNK, M2C_UNK);
u32 TNpcPlayer__sub_80152978(s32);
void TNpcPlayer__sub_8014DF0C(u8 *arg0);
u8 *find_active_entity_by_id(s32);
u8 *get_state_ptr__10TObjPlayerFPv(void *);
s16 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
void request_chatter__10TNpcPlayerFPvUi(void *, s32);
void reset_partner_counter(void *, s32);
void increment_partner_counter(void *, s32);
s16 TNpcPlayer__sub_801528DC(void *);
u32 get_npc_state__10TNpcPlayerFPv(s32);
s16 get_npc_type__10TNpcPlayerFPv(void *);
s16 get_partner_counter(void *, s32);
void update__10TNpcPlayerFPv(void *);
void TNpcPlayer__sub_80152B08(void *);
void update_players__10TNpcPlayerFPv(void *);
void TNpcPlayer__sub_80152B98(void *);
void update_lobby__10TNpcPlayerFPv(void *);
void TNpcPlayer__sub_80152C28(void *);
void set_field2__10TNpcPlayerFPvs(void *, s32);
void set_field_0__10TNpcPlayerFPvs(void *, s32);
void set_state__10TNpcPlayerFPvi(void *, s32);
void TNpcPlayer__sub_8014DC5C(Self_8014DC5C *self);
}

extern "C" {

void TNpcPlayer__sub_8014DC30(void);
int TNpcPlayer__sub_8014DC3C(void* p);
void init_equipment__10TNpcPlayerFPv(void *arg0);
int TNpcPlayer__sub_80150A34(void*);
M2C_UNK TNpcPlayer__sub_801528A8(s32, M2C_UNK, u8);
M2C_UNK clamp_and_set_unit_value__10TObjPlayerFiUci(s32, u8, M2C_UNK);

void init_equipment__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94);
    if (temp_r4 & 4) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 0);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 1);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 1, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 8) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 3);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 4);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 3, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 4, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 0x10) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 6);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 8);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 6, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 8, M2C_FIELD(arg0, u8 *, 0x50));
    }
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0xF);
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0x10);
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0xF, M2C_FIELD(arg0, u8 *, 0x51));
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0x10, M2C_FIELD(arg0, u8 *, 0x51));
}

    extern int TNpcPlayer__data_805D5864;
void TNpcPlayer__sub_8014DC30(void) { TNpcPlayer__data_805D5864 = 1; }

int TNpcPlayer__sub_8014DC3C(void* p) { return TNpcPlayer__sub_80150A34(p); }

typedef u16 (*GetState_8014DC5C)(void *);
void TNpcPlayer__sub_8014DC5C(Self_8014DC5C *self) {
    Msg_8014DC5C m0;
    Msg_8014DC5C m1;
    Msg_8014DC5C m2;
    Pl_8014DC5C *pl;
    u8 *tgt;
    switch (get_partner_counter(self->f5C, 1)) {
    case 0:
        TNpcPlayer__sub_80152C28(&m0);
        if (self->npc != NULL) {
            m0.type = get_npc_type__10TNpcPlayerFPv(self->npc);
            m0.flag = 0;
            tgt = find_active_entity_by_id(((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
            if (tgt != NULL) {
                m0.angle = calc_angle_to__10TObjPlayerFPvPv(self->npc->pl->pos, tgt + 0x38);
                pl = self->npc->pl;
                set_state__10TNpcPlayerFPvi(get_state_ptr__10TObjPlayerFPv(pl->state), 1);
                set_field_0__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, ((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
                set_field2__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, TNpcPlayer__sub_801528DC(self->npc));
                update_lobby__10TNpcPlayerFPv(&m0);
                increment_partner_counter(self->f5C, 1);
            }
        }
        break;
    case 1:
        TNpcPlayer__sub_80152B98(&m1);
        if (self->npc != NULL) {
            m1.type = get_npc_type__10TNpcPlayerFPv(self->npc);
            m1.flag = 1;
            tgt = find_active_entity_by_id(((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
            if (tgt != NULL) {
                m1.angle = calc_angle_to__10TObjPlayerFPvPv(self->npc->pl->pos, tgt + 0x38);
                pl = self->npc->pl;
                set_state__10TNpcPlayerFPvi(get_state_ptr__10TObjPlayerFPv(pl->state), 1);
                set_field_0__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, ((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
                set_field2__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, TNpcPlayer__sub_801528DC(self->npc));
                update_players__10TNpcPlayerFPv(&m1);
                increment_partner_counter(self->f5C, 1);
            }
        }
        break;
    case 2:
        TNpcPlayer__sub_80152B08(&m2);
        if (self->npc != NULL) {
            m2.type = get_npc_type__10TNpcPlayerFPv(self->npc);
            m2.flag = 1;
            tgt = find_active_entity_by_id(((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
            if (tgt != NULL) {
                m2.angle = calc_angle_to__10TObjPlayerFPvPv(self->npc->pl->pos, tgt + 0x38);
                pl = self->npc->pl;
                set_state__10TNpcPlayerFPvi(get_state_ptr__10TObjPlayerFPv(pl->state), 1);
                set_field_0__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, ((GetState_8014DC5C)get_npc_state__10TNpcPlayerFPv)(self->npc));
                set_field2__10TNpcPlayerFPvs(get_state_ptr__10TObjPlayerFPv(pl->state) + 4, TNpcPlayer__sub_801528DC(self->npc));
                update__10TNpcPlayerFPv(&m2);
                reset_partner_counter(self->f5C, 1);
                request_chatter__10TNpcPlayerFPvUi(self, 0xD);
            }
        }
        break;
    }
}

#pragma push
#pragma scheduling off
void TNpcPlayer__sub_8014DF0C(u8 *arg0) {
    u32 temp_r31;
    u32 temp_r3;
    temp_r31 = TNpcPlayer__sub_80152978(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r3 = get_npc_state__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    if (temp_r3 != temp_r31) {
        TNpcPlayer__sub_8015296C(arg0 + 0x5C, 1, 0);
    }
    npc_counter_reset_if_reached(arg0 + 0x5C, 1, 3);
    TNpcPlayer__sub_8014DC5C((Self_8014DC5C *)(arg0));
}
#pragma pop

}
