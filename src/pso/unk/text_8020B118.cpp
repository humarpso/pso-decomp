#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8020B118_lbl_8044BBF0 { char value[0x13]; };
typedef char RecoveredGlobal_8020B118_lbl_8044BBF0_size[sizeof(RecoveredGlobal_8020B118_lbl_8044BBF0) == 0x13 ? 1 : -1];

struct RecoveredGlobal_8020B118_lbl_8044BC04 { char value[0x12]; };
typedef char RecoveredGlobal_8020B118_lbl_8044BC04_size[sizeof(RecoveredGlobal_8020B118_lbl_8044BC04) == 0x12 ? 1 : -1];

extern "C" {
void TItemDrop__sub_800FDDF4(void);
void TItemDrop__sub_800FDE7C(s32);
s32 TLobby__sub_8020AF0C(void);
s32 TLobby__sub_8020AFA4(void);
void free_data_60F0__6TLobbyFv(void);
s32 init_handle__6TLobbyFi(s32);
extern RecoveredGlobal_8020B118_lbl_8044BBF0 lbl_8044BBF0;
extern RecoveredGlobal_8020B118_lbl_8044BC04 lbl_8044BC04;
extern s32 lbl_805D60D8;
extern s32 lbl_805D60DC;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s32 TLobby__data_805D60F4;
extern s16 TLobby__data_805D6134;
void TLobby__sub_8020B118(void);
}

extern "C" {

void TLobby__sub_8020B118(void) {
    lbl_805D60D8 = 0;
    lbl_805D60DC = 0;
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    TLobby__data_805D60F4 = 0;
    TLobby__data_805D6134 = 0;
    if (init_handle__6TLobbyFi(0x8000) != 0) {
        TItemDrop__sub_800FDE7C((s32) &lbl_8044BBF0.value);
        if (TLobby__sub_8020AFA4() == 0) {
            TItemDrop__sub_800FDDF4();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        TItemDrop__sub_800FDDF4();
        TItemDrop__sub_800FDE7C((s32) &lbl_8044BC04.value);
        if (TLobby__sub_8020AF0C() == 0) {
            TItemDrop__sub_800FDDF4();
            free_data_60F0__6TLobbyFv();
            TLobby__data_805D6134 |= 1;
            return;
        }
        TItemDrop__sub_800FDDF4();
        free_data_60F0__6TLobbyFv();
        TLobby__data_805D6134 |= 1;
    }
}

}
