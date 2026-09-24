#include "types.h"

struct Pkt_80010DE8 { u8 f0; u8 f1; u16 f2; u16 f4; u8 f6; u8 f7; };

struct Obj_80010DE8 { u8 pad[0x1c]; u16 f1c; };

extern "C" {
void TObjPlayer__sub_80019664(Pkt_80010DE8 *self);
void send_head__10TObjPlayerFPv(void *p);
void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c);
}

extern "C" {

void TObjPlayer__sub_80010E40(void);

void TObjPlayer__sub_80010DE8(Obj_80010DE8 *self, u16 a, u8 b, u8 c) {
    Pkt_80010DE8 pkt;
    TObjPlayer__sub_80019664(&pkt);
    pkt.f2 = self->f1c;
    pkt.f4 = a;
    pkt.f6 = b;
    pkt.f7 = c;
    send_head__10TObjPlayerFPv(&pkt);
}

}
