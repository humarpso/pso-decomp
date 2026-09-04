#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* get_entry_ptr__20TWindowSubStatusDispFi(int a0);
void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
s32 TItemData__sub_8010C52C(void *);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowSubStatusDisp__sub_802586FC(void *, s32, u8, u8, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_message__6TLobbyFiUi(s32, void *);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_item_data__6TLobbyFUi(void *);
M2C_UNK update_item_colors__20TWindowSubStatusDispFPvi(void *, void *);

extern const f32 lbl_805DCF08;

void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r31;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    temp_r31 = get_item_data__6TLobbyFUi(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), TItemData__sub_8010C52C(arg1));
    forward_message__6TLobbyFiUi(TLobby__sub_8001DC24(), arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80228F5C(M2C_FIELD(arg1, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_colors__20TWindowSubStatusDispFPvi(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

extern const f32 lbl_805DCF0C;

void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF0C;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

    extern unsigned char lbl_8044EE60[];
void* get_entry_ptr__20TWindowSubStatusDispFi(int a0) {  return (char*)lbl_8044EE60 + (unsigned char)(a0) * 8; }

}
