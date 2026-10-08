#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int is_valid_state__6TLobbyFPvi(void*);
int is_state_valid_flag__6TLobbyFi(s32 arg0);
int check_valid_state__6TLobbyFi(void*);
int is_check_state_valid__6TLobbyFPv(void* object);
}

extern "C" {

int TLobby__sub_803293F0(void* p);
int TLobby__sub_80329470(void);
int is_invalid_state__6TLobbyFPv(void* p);
int is_valid_state__6TLobbyFPvi(void*);

int is_invalid_state__6TLobbyFPv(void* p) { return (is_valid_state__6TLobbyFPvi(p)) == 0; }
int TLobby__sub_803293F0(void* p) { return (check_valid_state__6TLobbyFi((void*)(p))) == 0; }

int is_state_valid_flag__6TLobbyFi(s32 arg0) {
    return (u8) (((s32)is_valid_state__6TLobbyFPvi((void*)(arg0))) == 1);
}

    extern int lbl_805D6C80;

int is_check_state_valid__6TLobbyFPv(void* object) {
    return (u8) (((s32)check_valid_state__6TLobbyFi(object)) == 1);
}

int TLobby__sub_80329470(void) {  return lbl_805D6C80; }

}
