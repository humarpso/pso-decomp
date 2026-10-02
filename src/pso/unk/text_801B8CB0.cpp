#include "types.h"
struct L_801B8CB0 { u16 f0; u16 f2; s32 f4; u8 f8[0x78]; };

extern "C" {
s32 TFontSmallLobby__sub_801AFEE0(void);
void dispatch_input__10TObjPlayerFPvii(void *, void *, s32);
s32 get_player_by_client_id(s32);
void byteswap_data__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801C1268(void *, void *);
void TObjPlayer__sub_801C12C8(void *);
s32 validate_6xAC(void *);
void handle_6xAC(void *arg0);
}

extern "C" {

void handle_6xAC(void *arg0) {
    L_801B8CB0 sp8;
    TObjPlayer__sub_801C12C8(&sp8);
    TObjPlayer__sub_801C1268(&sp8, arg0);
    byteswap_data__10TObjPlayerFPv(&sp8);
    if (validate_6xAC(&sp8) != 0) {
        s32 p = get_player_by_client_id(sp8.f2);
        if (p != 0 && TFontSmallLobby__sub_801AFEE0() == 0) {
            dispatch_input__10TObjPlayerFPvii((void *)p, sp8.f8, sp8.f4);
        }
    }
}

}
