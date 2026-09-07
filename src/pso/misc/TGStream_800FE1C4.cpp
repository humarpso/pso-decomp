#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800FE2DC_TItemDrop__data_805041E0 {
    s8 value;
    u8 remaining[0x1F];
};

extern "C" {
extern RecoveredGlobal_800FE2DC_TItemDrop__data_805041E0 TItemDrop__data_805041E0;
extern s32 lbl_805D53C0;
extern s32 TItemDrop__data_805D53C4;
extern s32 TItemDrop__data_805D53C8;
extern s32 TItemDrop__data_805D53CC;
extern s32 TItemDrop__data_805D53D0;
void TItemDrop__sub_800FE2DC(void);
}

extern "C" {

void TItemDrop__sub_800FE2D8(void);
void *open__8TGStreamFPvPvi(void *arg0, void *arg1, s32 arg2);
void *TItemDrop__sub_800FDD70(void *, M2C_UNK);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
M2C_UNK TLobby__sub_803CC578(s32, s32, M2C_UNK);
s32 TLobby__sub_803CD3A8(void *, M2C_UNK);
s32 get_file_size__6TLobbyFv(void *);
M2C_UNK pump_frames__6TLobbyFv();
M2C_UNK reset__8TGStreamFv();
M2C_UNK strncpy(void *, void *, M2C_UNK);

extern M2C_UNK lbl_8043DAF8[];
extern s32 lbl_805D53C0;
extern s32 TItemDrop__data_805D53C4;
extern s32 lbl_805D53E0;

void *open__8TGStreamFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x28) = NULL;
    reset__8TGStreamFv();
    M2C_FIELD(arg0, void **, 0x28) = TItemDrop__sub_800FDD70(arg1, 1);
    if ((void *) M2C_FIELD(arg0, void **, 0x28) != NULL) {
        M2C_FIELD(arg0, s32 *, 0x20) = (s32) TItemDrop__data_805D53C4;
        TLobby__sub_803CC578(M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x20), 0);
        lbl_805D53E0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x28), s32 *, 0x24);
        strncpy(arg0, M2C_FIELD(arg0, void **, 0x28), 0x20);
    } else {
        temp_r3 = get_file_size__6TLobbyFv(arg1);
        lbl_805D53E0 = temp_r3;
        if (temp_r3 > 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = TLobby__sub_803CD3A8(arg1, 0);
            strncpy(arg0, arg1, 0x20);
        } else {
            lbl_805D53E0 = 0;
            M2C_FIELD(arg0, s8 *, 0) = 0;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
        while (TLobby__sub_8001EEF4() == 0) {
            pump_frames__6TLobbyFv();
        }
        lbl_805D53C0 = TLobby__sub_8001EEFC(lbl_8043DAF8);
    }
    return arg0;
}

void TItemDrop__sub_800FE2D8(void) {  }
typedef char RecoveredGlobal_800FE2DC_TItemDrop__data_805041E0_size[sizeof(RecoveredGlobal_800FE2DC_TItemDrop__data_805041E0) == 0x20 ? 1 : -1];
void TItemDrop__sub_800FE2DC(void) {
    lbl_805D53C0 = 0;
    TItemDrop__data_805D53C4 = 0;
    TItemDrop__data_805041E0.value = 0;
    TItemDrop__data_805D53CC = 0;
    TItemDrop__data_805D53D0 = 0;
    TItemDrop__data_805D53C8 = 0;
}

}
