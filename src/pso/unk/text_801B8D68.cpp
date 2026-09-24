#include "types.h"
struct Cmd_801B8DE8 { u8 hdr[2]; s16 id; s32 a; s32 b; };

extern "C" {
s32 is_volopt_phase_final__10TObjPlayerFv(void);
s32 obj_isState2_324(void *obj);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
s16 obj_getField1c(void *obj);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B8DE8(void *obj, s32 a, s32 b);
}

extern "C" {

void TObjPlayer__sub_801B8DE8(void *obj, s32 a, s32 b) {
    Cmd_801B8DE8 cmd;
    if (is_volopt_phase_final__10TObjPlayerFv() != 0) {
        return;
    }
    if (obj != 0 && obj_isState2_324(obj) != 0) {
        return;
    }
    init_cmd_6x29__10TObjPlayerFPv(&cmd);
    cmd.id = obj_getField1c(obj);
    cmd.a = a;
    cmd.b = b;
    bswap_body_dwords3_and_send__10TObjPlayerFPv(&cmd);
    TObjPlayer__sub_801B9634(obj);
}

}
