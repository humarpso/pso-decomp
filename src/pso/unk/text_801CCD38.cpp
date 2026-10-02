#include "types.h"
struct Rec_801CCEDC { u8 pad[0x10]; s16 cost; };

struct Pkt_801CCEDC { u16 hdr; u16 id; s16 tech; u16 level; };

struct Player_801CCEDC { u8 pad[0x328]; s16 f328; u8 pad32a[0x32E - 0x32A]; s16 tp; u8 pad330[0x428 - 0x330]; u8 techs[4]; };

extern "C" {
s32 reset_volopt_state__10TObjPlayerFv(void *obj);
s32 obj_isState2_324(void *obj);
s16 get_or_init_field_4__10TObjPlayerFPv(void *techs);
s32 obj_getField1c(void *obj);
u8 TObjPlayer__sub_801D96CC(void *techs);
Rec_801CCEDC *TTecCtrl__sub_8022DBC4(s32 tech, s32 level, s32 id);
void split_capped_value__10TObjPlayerFUcPvPv(u8 v, void *a, void *b);
void TObjPlayer__sub_801D2178(void *pkt);
void send_swapped_header__10TObjPlayerFPv(void *pkt);
void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self);
}

extern "C" {

void pay_tp_and_send_6x48_cast__10TObjPlayerFPv(Player_801CCEDC *self) {
    s16 tech;
    u8 hi;
    u8 lo;
    if (reset_volopt_state__10TObjPlayerFv(self) != 0) {
        if (self == 0 || obj_isState2_324(self) == 0) {
            Pkt_801CCEDC pkt;
            self->f328 = 4;
            tech = get_or_init_field_4__10TObjPlayerFPv(self->techs);
            self->tp -= TTecCtrl__sub_8022DBC4(tech, TObjPlayer__sub_801D96CC(self->techs), obj_getField1c(self))->cost;
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
