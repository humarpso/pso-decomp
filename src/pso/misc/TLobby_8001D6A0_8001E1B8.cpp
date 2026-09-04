#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TLobby__sub_8001E270(int a0, int a1);
void* TLobby__sub_8001E2A8(int a0, int a1);
void dispatch_shared_handler_a__6TLobbyFPv(void* a0);
void dispatch_shared_handler_b__6TLobbyFPv(void* a0);
void* get_entry__6TLobbyFii(int a0, int a1);
void* get_player_entry__6TLobbyFii(int a0, int a1);
u8 is_valid_player_index__6TLobbyFi(s32 arg0);
void register_boss__6TLobbyFPv(void* a0);
void register_object__6TLobbyFPv(void* a0);
void set_difficulty__6TLobbyFi(s32 arg0);

u8 is_valid_player_index__6TLobbyFi(s32 arg0) {
    s32 var_r0;

    var_r0 = 0;
    if ((arg0 >= 0) && (arg0 < 0x60)) {
        var_r0 = 1;
    }
    return (u8)var_r0;
}

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_a__6TLobbyFPv(void* a0) { get_player_entry__6TLobbyFii((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AB0;
void* get_player_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AB0) + a1 * 48; }

    extern int TLobby__data_805D4AB4;
void register_object__6TLobbyFPv(void* a0) { get_entry__6TLobbyFii((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AAC;
void* get_entry__6TLobbyFii(int a0, int a1) {  return (char*)(TLobby__data_805D4AAC) + a1 * 32; }

    extern int TLobby__data_805D4AB4;
void dispatch_shared_handler_b__6TLobbyFPv(void* a0) { TLobby__sub_8001E270((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AA8;
void* TLobby__sub_8001E270(int a0, int a1) {  return (char*)(TLobby__data_805D4AA8) + a1 * 48; }

    extern int TLobby__data_805D4AB4;
void register_boss__6TLobbyFPv(void* a0) { TLobby__sub_8001E2A8((int)((void*)(TLobby__data_805D4AB4)), (int)(a0)); }

    extern int TLobby__data_805D4AA4;
void* TLobby__sub_8001E2A8(int a0, int a1) {  return (char*)(TLobby__data_805D4AA4) + a1 * 36; }

extern s32 TLobby__data_805D4AB8;

void set_difficulty__6TLobbyFi(s32 arg0) {
    TLobby__data_805D4AB8 = arg0;
}

}
