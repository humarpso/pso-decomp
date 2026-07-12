#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_801D4BB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3);
void TLobby__sub_801D4C58(void* a0, int a1, int a2);
int TLobby__sub_801D4C84(void* a0, int a1, int a2);
int TLobby__sub_801D5004(void*);
int TLobby__sub_801D50E0(void*);
M2C_UNK TObjPlayer__sub_80011138(s32, s32);
int TObjPlayer__sub_801D52A8(void*);
M2C_UNK reduce_item_amount__6TLobbyFPviii(s32, s32, s32, s32);
s32 start_inventory_update__10TObjPlayerFPvi(s32, s32);

s32 TLobby__sub_801D4BB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 == -1) {
        TObjPlayer__sub_80011138(arg1, arg3);
        return 1;
    }
    temp_r3 = start_inventory_update__10TObjPlayerFPvi(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    reduce_item_amount__6TLobbyFPviii(arg0, arg1, temp_r3, arg3);
    return 1;
}

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
    extern unsigned char lbl_805D5E05;
void TLobby__sub_801D4C28(void* a0, int a1, int a2, int a3) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; lbl_805D5E05 = a3; TLobby__sub_801D5004((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE0;
    extern unsigned char lbl_805D5E04;
void TLobby__sub_801D4C58(void* a0, int a1, int a2) { lbl_805D5DE0 = a1; lbl_805D5E04 = a2; TLobby__sub_801D50E0((void*)(*(int*)((char*)a0 + 0x1c4))); }

    extern int lbl_805D5DE4;
    extern int lbl_805D5DF4;
int TLobby__sub_801D4C84(void* a0, int a1, int a2) { lbl_805D5DE4 = a2; lbl_805D5DF4 = 0; TObjPlayer__sub_801D52A8((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

}
