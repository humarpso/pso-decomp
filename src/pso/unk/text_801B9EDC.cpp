#include "types.h"
struct Cmd_801B9EDC { u16 hdr; u16 id; void *item; };

extern "C" {
s32 obj_isState2_324(void *obj);
void init_cmd_6x26__10TObjPlayerFPv(void *cmd);
u16 obj_getField1c(void *obj);
void bswap_body_dwords4_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B9EDC(void *self, void *item);
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

}
