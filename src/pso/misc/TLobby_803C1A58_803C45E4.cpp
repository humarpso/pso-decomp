#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_entry__6TLobbyFi(s32 arg0);
void set_packet_flags__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_once__6TLobbyFv(void);
M2C_UNK memset(void *, int, int);
void release_ref__6TLobbyFv(void);
M2C_UNK TLobby__sub_803D3988();
M2C_UNK TLobby__sub_803D39C0();

void set_packet_flags__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void clear_entry__6TLobbyFi(s32 arg0) {
    if (arg0 != 0) {
        init_once__6TLobbyFv();
        memset((void *) (arg0), (int) (0), (int) (0x30));
        release_ref__6TLobbyFv();
    }
}

extern s32 TLobby__init_ref_count;

void release_ref__6TLobbyFv(void) {
    s32 temp_r0;

    temp_r0 = TLobby__init_ref_count - 1;
    TLobby__init_ref_count = temp_r0;
    if (temp_r0 == 0) {
        TLobby__sub_803D3988();
    }
}

extern s32 TLobby__init_ref_count;

void init_once__6TLobbyFv(void) {
    if ((s32) TLobby__init_ref_count == 0) {
        TLobby__sub_803D39C0();
    }
    TLobby__init_ref_count += 1;
}

}
