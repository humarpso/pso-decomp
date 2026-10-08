#include "types.h"

extern "C" {

void TLobby__sub_803CCE40(void);
s32 memset(void *, int, int);
extern s32 lbl_805D75D0;
extern s32 lobby_adxf_current_file_id;
extern s32 lobby_adxf_open_file_handle;
extern s32 lobby_afs_toc_entry_index;
extern s32 lbl_805D75E0;
extern s32 lbl_805D75E4;
extern const char *const volatile lbl_805E0D80;

u8 lbl_8057B7B0[0x20];
u8 lbl_8057B7D0[0x1000];
u8 lbl_8057C7D0[0x400];
u8 lbl_8057CBD0[0x1380];

void dec_ref_and_reset_tables__6TLobbyFv(void) {
    if (--lbl_805D75D0 == 0) {
        TLobby__sub_803CCE40();
        lobby_adxf_current_file_id = -1;
        lobby_adxf_open_file_handle = 0;
        lobby_afs_toc_entry_index = 0;
        lbl_805D75E4 = 0;
        lbl_805D75E0 = 0;
        memset(lbl_8057B7B0, 0, 0x20);
        memset(lbl_8057B7D0, 0xFF, 0x1000);
        memset(lbl_8057C7D0, 0, 0x400);
        memset(lbl_8057CBD0, 0, 0x1380);
    }
}

void TLobby__sub_803CC1D0(void) {
    lbl_805E0D80;
    if (lbl_805D75D0 == 0) {
        memset(lbl_8057CBD0, 0, 0x1380);
        memset(lbl_8057C7D0, 0, 0x400);
        memset(lbl_8057B7D0, 0xFF, 0x1000);
        memset(lbl_8057B7B0, 0, 0x20);
        lbl_805D75E0 = 0;
        lbl_805D75E4 = 0;
        lobby_afs_toc_entry_index = 0;
        lobby_adxf_open_file_handle = 0;
        lobby_adxf_current_file_id = -1;
    }
    lbl_805D75D0++;
}

}
