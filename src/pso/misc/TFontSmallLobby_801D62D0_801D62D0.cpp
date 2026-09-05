#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TFontSmallLobby__sub_801D60B4();
extern const f32 lbl_805DC3DC;
void TFontSmallLobby__sub_801D63DC(u8 *arg0, f32 farg0);
M2C_UNK TFontSmallLobby__sub_801D60B4();
int update_ready__15TFontSmallLobbyFPv(void*);
M2C_UNK TFontSmallLobby__sub_801D677C(void *);
extern const f32 lbl_805DC3DC;
extern const f32 lbl_805DC3E4;
void TFontSmallLobby__sub_801D6350(u8 *arg0, f32 farg0);
}

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
void update_if_ready__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801D67AC(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u16 get_type__15TFontSmallLobbyFPv();
M2C_UNK send_field_state__10TObjPlayerFPv();

void TFontSmallLobby__sub_801D6350(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            TFontSmallLobby__sub_801D60B4();
        }
    } else if (temp_f0 < lbl_805DC3E4) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3E4) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3E4;
            update_ready__15TFontSmallLobbyFPv((void*)(arg0));
            TFontSmallLobby__sub_801D677C((void *) (arg0));
        }
    }
}

void TFontSmallLobby__sub_801D63DC(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3DC;
            TFontSmallLobby__sub_801D60B4();
        }
    }
}

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(get_type__15TFontSmallLobbyFPv()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC(p) != 0) { update_ready__15TFontSmallLobbyFPv((void*)(p)); } }

}
