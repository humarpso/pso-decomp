#include "types.h"
struct PbPacket37_801CC194 {
    u8 hdr[2];
    s16 player;
    s16 gauge;
};

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
s16 get_sub_value__8TItemMagFi(void *);
void TObjPlayer__sub_801D1D88(struct PbPacket37_801CC194 *);
void update_and_send4__10TObjPlayerFPv(struct PbPacket37_801CC194 *);
void TObjPlayer__sub_801CC194(void *self);
}

extern "C" {

void TObjPlayer__sub_801CC194(void *self) {
    struct PbPacket37_801CC194 packet;
    if (self == NULL || obj_isState2_324(self) == 0) {
        TObjPlayer__sub_801D1D88(&packet);
        packet.player = obj_getField1c(self);
        packet.gauge = get_sub_value__8TItemMagFi(self);
        update_and_send4__10TObjPlayerFPv(&packet);
    }
}

}
