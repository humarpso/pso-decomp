#include "types.h"
struct Rec_801CCEDC { u8 pad[0x10]; s16 cost; };

struct Pkt_801CCEDC { u16 hdr; u16 id; s16 tech; u16 level; };

struct Player_801CCEDC { u8 pad[0x328]; s16 f328; u8 pad32a[0x32E - 0x32A]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

struct Pkt_801CCD38 { u16 hdr; u16 id; s16 tech; s16 level; };

struct Rec_801CCD38 { u8 pad[0x20]; s16 state; };

struct Player_801CCD38 { u8 pad[0x10]; u32 f10; u8 pad14[0x328 - 0x14]; s16 f328; u8 pad32a[0x428 - 0x32A]; u8 techs[4]; };

extern "C" {
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
s32 obj_isState2_324(void *obj);
s16 get_or_init_field_4__10TObjPlayerFPv(void *techs);
s32 obj_getField1c(void *obj);
u8 TObjPlayer__sub_801D96CC(void *techs);
Rec_801CCEDC *calc_technique_parameters(s32 tech, s32 level, s32 id);
void split_capped_value__10TObjPlayerFUcPvPv(u8 v, void *a, void *b);
void TObjPlayer__sub_801D2178(void *pkt);
void send_swapped_header__10TObjPlayerFPv(void *pkt);
void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self);
s32 obj_getField1c(void *obj);
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
Player_801CCD38 *get_player_by_client_id(u16);
s32 check_flag_4__10TObjPlayerFPv(void *);
void set_technique_id__10TObjPlayerFPvs(void *, s16);
void clamp_and_set_unit_value__10TObjPlayerFiUci(void *, u8, s32);
void swap_header__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D2134(void *, void *);
void TObjPlayer__sub_801D2178(void *pkt);
void set_technique_state__10TObjPlayerFPvi(void *, s32);
void set_technique_id__10TObjPlayerFPvUc(void *, u8);
s32 get_valid_technique__10TObjPlayerFPv(void *);
s32 check_technique_level__10TObjPlayerFiiUc(void *, s32, u8);
void launch_technique__10TObjPlayerFv(s32, s32, void *);
Rec_801CCEDC *calc_technique_parameters(s32 tech, s32 level, s32 id);
s32 validate_6x48_cast_technique_complete(void *);
extern u32 tl_03;
void handle_6x48_cast_technique_complete(void *arg);
}

extern "C" {

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void tail_801CCD38(Player_801CCD38 *p, s32 t, s8 lvl) {
    switch (t) {
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
        set_technique_state__10TObjPlayerFPvi(p->techs, ((Rec_801CCD38 *)calc_technique_parameters(t, lvl, obj_getField1c(p)))->state);
        p->f328 = 4;
        launch_technique__10TObjPlayerFv(t, lvl, p);
        return;
    }
    if (check_flag_4__10TObjPlayerFPv(p) == 0 && p->f10 == tl_03) {
        set_technique_state__10TObjPlayerFPvi(p->techs, ((Rec_801CCD38 *)calc_technique_parameters(t, lvl, obj_getField1c(p)))->state);
        p->f328 = 4;
        launch_technique__10TObjPlayerFv(t, lvl, p);
    }
}
void handle_6x48_cast_technique_complete(void *arg) {
    Pkt_801CCD38 pkt;
    s8 lvl;
    u8 ul;
    Player_801CCD38 *p;
    s16 tech;
    TObjPlayer__sub_801D2178(&pkt);
    TObjPlayer__sub_801D2134(&pkt, arg);
    swap_header__10TObjPlayerFPv(&pkt);
    if (validate_6x48_cast_technique_complete(&pkt) == 0) {
        return;
    }
    p = get_player_by_client_id(pkt.id);
    if (p == NULL) {
        return;
    }
    if (reset_volopt_state__10TObjPlayerFv(p) == 0) {
        return;
    }
    tech = pkt.tech;
    set_technique_id__10TObjPlayerFPvs(p->techs, tech);
    lvl = pkt.level;
    if (lvl == 0xE) {
        lvl += get_valid_technique__10TObjPlayerFPv(p->techs);
    }
    if (((s32 (*)(void *, s16, u8))check_technique_level__10TObjPlayerFiiUc)(p->techs, tech, (u8)lvl) == 0) {
        lvl = 0;
    }
    ul = lvl;
    set_technique_id__10TObjPlayerFPvUc(p->techs, ul);
    ((void (*)(void *, u8, s16))clamp_and_set_unit_value__10TObjPlayerFiUci)(p, ul, tech);
    tail_801CCD38(p, tech, lvl);
}
#pragma pop

void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self) {
    s16 tech;
    u8 hi;
    u8 lo;
    if (reset_volopt_state__10TObjPlayerFv(self) != 0) {
        if (self == 0 || obj_isState2_324(self) == 0) {
            Pkt_801CCEDC pkt;
            self->f328 = 4;
            tech = get_or_init_field_4__10TObjPlayerFPv(self->techs);
            self->tp -= calc_technique_parameters(tech, TObjPlayer__sub_801D96CC(self->techs), obj_getField1c(self))->cost;
            if (self->tp < 0) {
                self->tp = 0;
            }
            split_capped_value__10TObjPlayerFUcPvPv(TObjPlayer__sub_801D96CC(self->techs), &hi, &lo);
            TObjPlayer__sub_801D2178(&pkt);
            pkt.id = obj_getField1c(self);
            pkt.tech = tech;
            pkt.level = hi;
            send_swapped_header__10TObjPlayerFPv(&pkt);
        }
    }
}

}
