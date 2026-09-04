#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void increment_ref_and_set_flag__6TLobbyFPv(void *arg0);
void init_download_buffers__6TLobbyFv(void);
void load_bin_motion_callback(void *arg0);
void reset_battle_state__6TLobbyFPv(void *arg0);
M2C_UNK TItemDrop__sub_800FE2DC();
M2C_UNK TLobby__sub_8001F8D8(void *, void *);
s32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);
s32 alloc_load_data__6TLobbyFPviii(void *, s32, s32 *, M2C_UNK *);
M2C_UNK debug_print__6TLobbyFii(M2C_UNK *, ...);
s32 xmalloc__FUl(M2C_UNK);

extern s8 lbl_804FE148[];
extern s32 lbl_805D4ACC;
extern s32 lbl_805D4AD4;
extern s32 lbl_805D4AD8;

void init_download_buffers__6TLobbyFv(void) {
    lbl_805D4AD8 = xmalloc__FUl(0x4000);
    lbl_805D4ACC = alloc__22TQuestVmDownLoadServerFPv(0x40000);
    TItemDrop__sub_800FE2DC();
    lbl_805D4AD4 = 1;
    lbl_804FE148[0] = 0;
}

void increment_ref_and_set_flag__6TLobbyFPv(void *arg0) {
    s32 *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r4, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r4, s32 *, 0xC) + 1);
    TLobby__sub_8001F8D8(M2C_FIELD(arg0, void **, 0), temp_r4);
    temp_r3 = M2C_FIELD(arg0, s32 **, 4);
    *temp_r3 |= 1;
}

extern M2C_UNK lbl_80434C48[];
extern s32 lbl_805D4ACC;

void load_bin_motion_callback(void *arg0) {
    s32 spC;
    M2C_UNK sp8;
    s32 temp_r3;
    void *temp_r4;

    *M2C_FIELD(arg0, s32 **, 0) = 0;
    spC = 0;
    temp_r3 = alloc_load_data__6TLobbyFPviii(M2C_FIELD(arg0, void **, 4), lbl_805D4ACC, &spC, &sp8);
    if (temp_r3 == 0) {
        debug_print__6TLobbyFii(lbl_80434C48);
    }
    *M2C_FIELD(arg0, s32 **, 0) = temp_r3;
    temp_r4 = M2C_FIELD(arg0, void **, 4);
    M2C_FIELD(temp_r4, s32 *, 8) = (s32) (M2C_FIELD(temp_r4, s32 *, 8) + 1);
    TLobby__sub_8001F8D8(M2C_FIELD(arg0, void **, 4), temp_r4);
}

extern s32 lbl_805D4AD0;

void reset_battle_state__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x42C) = 0;
    M2C_FIELD(arg0, s32 *, 0x430) = 0;
    M2C_FIELD(arg0, s32 *, 0x434) = 0;
    M2C_FIELD(arg0, s32 *, 0x438) = 0;
    M2C_FIELD(arg0, s32 *, 0x43C) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x418) = 0;
    M2C_FIELD(arg0, s32 *, 0x428) = 0;
    lbl_805D4AD0 = 0;
}

}
