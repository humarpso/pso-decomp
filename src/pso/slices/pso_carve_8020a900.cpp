#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK copy_name(M2C_UNK *);
M2C_UNK fn_801A2514(u16);
M2C_UNK fn_801A2528(u16);
M2C_UNK TLobby__sub_8020A768(s32, s32);
M2C_UNK TLobby__sub_8020A834(s32, s32);
M2C_UNK free_data_60F0__6TLobbyFv();
s32 init_handle__6TLobbyFi(M2C_UNK);
extern s32 lbl_805D60D8;
extern s32 lbl_805D60DC;
extern s32 TLobby__data_805D60E0;
extern s32 TLobby__data_805D60E4;
extern s32 TLobby__data_805D60E8;
extern s32 TLobby__data_805D60EC;
extern s16 TLobby__data_805D6134;
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;
extern M2C_UNK lbl_805DC620;
extern M2C_UNK lbl_805DC624;

void load_map_set_data(s32 arg0, s32 arg1) {
    lbl_805D60D8 = 0;
    lbl_805D60DC = 0;
    TLobby__data_805D60E0 = 0;
    TLobby__data_805D60E4 = 0;
    TLobby__data_805D60E8 = 0;
    TLobby__data_805D60EC = 0;
    copy_name(&lbl_805DC620);
    TLobby__data_805D6134 = 0;
    if (init_handle__6TLobbyFi(0x8000) != 0) {
        TLobby__sub_8020A834(arg0, arg1);
        TLobby__sub_8020A768(arg0, arg1);
        fn_801A2528((u16) TLobby__data_805D60E8);
        TLobby__data_805D6148 = TLobby__data_805D60E0;
        fn_801A2514((u16) TLobby__data_805D60EC);
        TLobby__data_805D614C = TLobby__data_805D60E4;
        free_data_60F0__6TLobbyFv();
        TLobby__data_805D6134 |= 1;
    }
    copy_name(&lbl_805DC624);
}

}
