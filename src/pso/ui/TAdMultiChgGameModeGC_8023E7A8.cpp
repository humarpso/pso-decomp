#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_8023E834 { s32 x; s32 y; s32 z; };

extern "C" {
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
M2C_UNK TLobby__sub_80226C3C();
s32 strcmp(M2C_UNK, s32);
M2C_UNK TObjBgmColCtrl__sub_802274B8(s32);
void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_state_0x1a__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_mode_18__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_mode_17__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void set_mode_0x14__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();
extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;
void request_transition__21TAdMultiChgGameModeGCFv(void);
u32 get_main_phase();
extern s32 lbl_805D3848;
s32 TAdMultiChgGameModeGC__sub_8023E7A8();
s32 TCameraCtrl__sub_80069C94(void *, void *);
s32 TCameraCtrl__sub_80069E7C(int);
extern V3_8023E834 lbl_8044DD00;
extern V3_8023E834 lbl_8044DD0C;
void TAdMultiChgGameModeGC__sub_8023E834(void);
}

extern "C" {

void set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

s32 TAdMultiChgGameModeGC__sub_8023E7A8() {
    s32 r = 0;
    switch (get_main_phase()) {
    case 0:
    case 1:
    case 3:
    case 8:
    case 11:
    case 12:
        break;
    case 2:
    case 4:
    case 6:
    case 7:
    case 9:
    case 10:
    case 13:
        switch (lbl_805D3848) {
        case 7:
        case 14:
        case 24:
            r = 1;
            break;
        default:
            r = 0;
            break;
        }
        break;
    case 5:
        r = 1;
        break;
    }
    return r;
}

void TAdMultiChgGameModeGC__sub_8023E834(void) {
    V3_8023E834 a = lbl_8044DD00;
    V3_8023E834 b = lbl_8044DD0C;
    TCameraCtrl__sub_80069E7C(9);
    TCameraCtrl__sub_80069C94(&a, &b);
}

void set_mode_change_state__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 3;
    lbl_805D63C8 = 1;
}
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void) { sync_mode_state__21TAdMultiChgGameModeGCFv(); (*(int *)&lbl_805D3848) = 1; (*(int *)&lbl_805D63C8) = 1; }
void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0) {
    if (strcmp(TLobby__sub_80226C3C(), arg0) != 0) {
        TObjBgmColCtrl__sub_802274B8(arg0);
    }
}
void set_state_0x1a__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x1A;
    lbl_805D63C8 = 1;
}
void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x19;
    lbl_805D63C8 = 1;
}
void set_mode_18__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x18;
    lbl_805D63C8 = 1;
}
void set_mode_17__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x17;
    lbl_805D63C8 = 1;
}
void set_mode_0x15__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x15;
    lbl_805D63C8 = 1;
}
void set_mode_0x14__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x14;
    lbl_805D63C8 = 1;
}
void request_transition__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x11;
    lbl_805D63C8 = 1;
}

}
