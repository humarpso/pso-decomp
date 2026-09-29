#include "types.h"
struct Cmd_801B9EDC { u16 hdr; u16 id; void *item; };

struct L_801BA0F0 { u16 f0; s16 f2; s32 f4; s32 f8; };

extern "C" {
s32 obj_isState2_324(void *obj);
void init_cmd_6x26__10TObjPlayerFPv(void *cmd);
u16 obj_getField1c(void *obj);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B9EDC(void *self, void *item);
s32 obj_isState2_324(void *obj);
u16 obj_getField1c(void *obj);
s32 check_switch_available__6TLobbyFPvi(void);
void init_command__10TObjPlayerFPv(void *);
void bswap_body_dwords5_and_send__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjPlayer__sub_801B9EDC(void *self, void *item) {
    if (self == 0 || obj_isState2_324(self) == 0) {
        Cmd_801B9EDC cmd;
        init_cmd_6x26__10TObjPlayerFPv(&cmd);
        cmd.id = obj_getField1c(self);
        cmd.item = item;
        bswap_body_dwords4_and_send__10TObjPlayerFPv(&cmd);
        TObjPlayer__sub_801B9634(self);
    }
}
void TObjPlayer__sub_801BA0F0(void *arg0, s32 arg1, s32 arg2) {
    L_801BA0F0 sp8;
    if (check_switch_available__6TLobbyFPvi() != 0 && (arg0 == 0 || obj_isState2_324(arg0) == 0)) {
        init_command__10TObjPlayerFPv(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        bswap_body_dwords5_and_send__10TObjPlayerFPv(&sp8);
    }
}

}
