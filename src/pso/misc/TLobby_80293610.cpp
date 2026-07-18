#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void maybe_handle_destruction__6TLobbyFPv(void* p);
void update_destruction_countdown__6TLobbyFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1510();
int TLobby__sub_802933FC(void*);
int TLobby__sub_8029359C(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

void maybe_handle_destruction__6TLobbyFPv(void* p) { if (TLobby__sub_8029359C((void*)(p)) == 0) { TLobby__sub_802933FC(p); } }

void update_destruction_countdown__6TLobbyFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1510() != 1) {
        if (TLobby__sub_8029359C((void*)(arg0)) == 1) {
            queue_destruction__7TObjectFv(arg0);
        }
        maybe_handle_destruction__6TLobbyFPv((void*)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    }
}

}
