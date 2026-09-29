#include "types.h"
struct PbPacket37_801CC194 {
    u8 hdr[2];
    s16 player;
    s16 gauge;
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Pkt_801CC0F4 {
    u16 f0;
    u16 player;
    u8 pad[0x10 - 4];
};

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
s16 get_sub_value__8TItemMagFi(void *);
void TObjPlayer__sub_801D1D88(struct PbPacket37_801CC194 *);
void update_and_send4__10TObjPlayerFPv(struct PbPacket37_801CC194 *);
void TObjPlayer__sub_801CC194(void *self);
s32 reset_volopt_state__10TObjPlayerFv(int);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 check_flag_4__10TObjPlayerFPv();
M2C_UNK swap_endian16__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801D1D44(void *, void *);
void TObjPlayer__sub_801D1D88(struct PbPacket37_801CC194 *);
M2C_UNK trigger_photon_blast__10TObjPlayerFPv(void *);
M2C_UNK check_photon_blast_flag__10TObjPlayerFPv(void *);
s32 validate_6x37_photon_blast(void *);
extern u32 tl_03;
void handle_6x37_photon_blast(s32 arg0);
}

extern "C" {

void handle_6x37_photon_blast(s32 arg0) {
    struct Pkt_801CC0F4 pkt;
    u8 *temp_r3;
    TObjPlayer__sub_801D1D88((struct PbPacket37_801CC194 *)((void *) (&pkt)));
    TObjPlayer__sub_801D1D44((void *) (&pkt), (void *) (arg0));
    swap_endian16__10TObjPlayerFPv((void *) (&pkt));
    if (validate_6x37_photon_blast((void *) (&pkt)) != 0) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(pkt.player);
        if ((temp_r3 != NULL) && (check_flag_4__10TObjPlayerFPv() == 0) && ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) == (u32) tl_03) && (reset_volopt_state__10TObjPlayerFv((int) (temp_r3)) != 0)) {
            check_photon_blast_flag__10TObjPlayerFPv((void *) (temp_r3 + 0x4AC));
            trigger_photon_blast__10TObjPlayerFPv((void *) (temp_r3 + 0x4AC));
        }
    }
}

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
