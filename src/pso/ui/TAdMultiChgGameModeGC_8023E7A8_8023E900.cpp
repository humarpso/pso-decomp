#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0);
void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void);
void set_state_0x1a__21TAdMultiChgGameModeGCFv(void);
M2C_UNK TLobby__sub_80226C3C();
s32 TLobby__sub_8039DAFC(M2C_UNK, s32);
M2C_UNK TObjBgmColCtrl__sub_802274B8(s32);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0) {
    if (TLobby__sub_8039DAFC(TLobby__sub_80226C3C(), arg0) != 0) {
        TObjBgmColCtrl__sub_802274B8(arg0);
    }
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_state_0x1a__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x1A;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x19;
    lbl_805D63C8 = 1;
}

}
