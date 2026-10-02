#include "types.h"
struct L_801B7E14 { u8 f0[2]; s16 f2; s32 f4; s32 f8; };

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef struct Cmd_801B7D68 {
    u8 cmd;
    u8 size;
    u16 client;
    u32 item_a;
    u32 item_b;
} Cmd_801B7D68;

extern "C" {
s32 obj_isState2_324(void *);
s32 obj_getField1c(void *);
void TObjPlayer__sub_801C0D7C(void *);
void TObjPlayer__sub_801C0D9C(void *);
void fn_801B7E14(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TItem__sub_801005EC(s32, s32);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK bswap_body_dwords2__10TObjPlayerFi(void *);
M2C_UNK copy_pair_fields2__10TObjPlayerFPvPv(void *, void *);
void TObjPlayer__sub_801C0D7C(void *);
u32 start_inventory_update__10TObjPlayerFPvi(s32, u32);
s32 get_owner_if_alive__10TObjPlayerFPv();
s32 validate_6x28_feed_mag(void *);
void handle_6x28_feed_mag(s32 arg0);
}

extern "C" {

void handle_6x28_feed_mag(s32 arg0) {
    Cmd_801B7D68 cmd;
    u8 *p;
    s32 a;
    s32 b;
    TObjPlayer__sub_801C0D7C(&cmd);
    copy_pair_fields2__10TObjPlayerFPvPv(&cmd, (void *)arg0);
    bswap_body_dwords2__10TObjPlayerFi(&cmd);
    if (validate_6x28_feed_mag(&cmd) != 0) {
        p = TPlayerBattleCtrl4P__sub_801BA74C(cmd.client);
        if (p != NULL && start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(p, s32 *, 0xD00), cmd.item_a) != 0U) {
            a = get_owner_if_alive__10TObjPlayerFPv();
            if (a != 0 && start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(p, s32 *, 0xD00), cmd.item_b) != 0U) {
                b = get_owner_if_alive__10TObjPlayerFPv();
                if (b != 0) {
                    TItem__sub_801005EC(a, b);
                }
            }
        }
    }
}

void fn_801B7E14(void *arg0, s32 arg1, s32 arg2) {
    L_801B7E14 sp8;
    if (arg0 == 0 || obj_isState2_324(arg0) == 0) {
        TObjPlayer__sub_801C0D7C(&sp8);
        sp8.f2 = obj_getField1c(arg0);
        sp8.f4 = arg1;
        sp8.f8 = arg2;
        TObjPlayer__sub_801C0D9C(&sp8);
    }
}

}
