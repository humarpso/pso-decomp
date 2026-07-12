#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TLobby__sub_802A7260(void* a0 = 0);
int TLobby__sub_802A7278(void* a0 = 0);

void TLobby__sub_802A7318(void* p);
void TObjSeabedSuisoBrakable__vt17(void);

s32 get_valid_child__6TLobbyFPv(void *arg0) {
    if (TLobby__sub_802A7260((void*)(M2C_FIELD(arg0, s32 *, 4))) != 0) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    return 0;
}
s32 validate_handle__6TLobbyFPv(s32 *arg0) {
    if (TLobby__sub_802A7278((void*)(*arg0)) != 0) {
        return *arg0;
    }
    return 0;
}
void TLobby__sub_802A7318(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

}
