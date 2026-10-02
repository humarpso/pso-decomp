#include "types.h"
struct Cmd_801B8DE8 { u8 hdr[2]; s16 id; s32 a; s32 b; };

struct L_801B8D68 { u16 f0; u16 f2; s32 f4; s32 f8; };

extern "C" {
s32 is_volopt_phase_final__10TObjPlayerFv(void);
s32 obj_isState2_324(void *obj);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
s16 obj_getField1c(void *obj);
void bswap_body_dwords3_and_send__10TObjPlayerFPv(void *cmd);
void TObjPlayer__sub_801B9634(void *obj);
void TObjPlayer__sub_801B8DE8(void *obj, s32 a, s32 b);
s32 is_volopt_phase_final__10TObjPlayerFv(void);
void dispatch_action__10TObjPlayerFPvii(void *, s32, s32);
s32 get_player_by_client_id(s32);
void bswap_body_dwords3__10TObjPlayerFPv(void *);
void copy_pair_fields3__10TObjPlayerFPvPv(void *, void *);
void init_cmd_6x29__10TObjPlayerFPv(void *cmd);
s32 validate_6x29_delete_inventory_item(void *);
void handle_6x29_delete_inventory_item(void *arg0);
}

extern "C" {

void handle_6x29_delete_inventory_item(void *arg0) {
    L_801B8D68 sp8;
    init_cmd_6x29__10TObjPlayerFPv(&sp8);
    copy_pair_fields3__10TObjPlayerFPvPv(&sp8, arg0);
    bswap_body_dwords3__10TObjPlayerFPv(&sp8);
    if (validate_6x29_delete_inventory_item(&sp8) != 0) {
        s32 p = get_player_by_client_id(sp8.f2);
        if (p != 0 && is_volopt_phase_final__10TObjPlayerFv() == 0) {
            dispatch_action__10TObjPlayerFPvii((void *)p, sp8.f4, sp8.f8);
        }
    }
}

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
