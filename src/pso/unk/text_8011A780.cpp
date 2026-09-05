#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 lbl_805D54E8;
extern s32 lbl_805D54EC;
void TLobby__sub_8011AF58(s32 arg0);
M2C_UNK TLobby__sub_80103BFC(s32, s32);
void TLobby__sub_8011AA44(s16 arg0, s32 _w1);
}

extern "C" {

int TLobby__sub_8011AED8(void);
void handle_6x5C_destroy_floor_item(void *arg0);
void handle_6x62(void);
M2C_UNK bswap_packet__6TLobbyFPv();

void handle_6x5C_destroy_floor_item(void *arg0) {
    bswap_packet__6TLobbyFPv();
    TLobby__sub_80103BFC(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 4));
}

void TLobby__sub_8011AA44(s16 arg0, s32 _w1) {
    TLobby__sub_80103BFC((s32)((void *) (arg0)), (s32)(_w1));
}

int TLobby__sub_8011AED8(void) { return 0; }
void handle_6x62(void) {  }
void TLobby__sub_8011AF58(s32 arg0) {
    s32 temp_r4;
    s32 temp_r4_2;
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        temp_r4 = (arg0 * 4) & 0x3FFFC;
        M2C_FIELD(lbl_805D54EC, M2C_UNK *, temp_r4) = M2C_FIELD(lbl_805D54EC, M2C_UNK *, temp_r4) + 1;
        return;
    }
    temp_r4_2 = (arg0 * 4) & 0x3FFFC;
    M2C_FIELD(lbl_805D54E8, M2C_UNK *, temp_r4_2) = M2C_FIELD(lbl_805D54E8, M2C_UNK *, temp_r4_2) + 1;
}

}
