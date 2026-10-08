#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_logout__6TLobbyFv(void);
void TLobby__sub_8013A16C(void);
void TLobby__sub_8013A170(s32 arg0, ...);
int get_seq_phase__6TLobbyFPv(void* p);
M2C_UNK send_logout__9TProtocolFv(void*);
int fn_8013ADD0(void*);

extern u32 TLobby__data_805D5580;

void send_logout__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D5580 != 0U) {
        send_logout__9TProtocolFv((void*)TLobby__data_805D5580);
    }
}

int get_seq_phase__6TLobbyFPv(void* p) { return fn_8013ADD0(p); }
void TLobby__sub_8013A16C(void) {  }
void TLobby__sub_8013A170(s32 arg0, ...) {}

}
