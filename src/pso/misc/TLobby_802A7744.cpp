#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *ct_variant__6TLobbyFPv(void *arg0);
void* TLobby__sub_802A7780(void* p);
void* TLobby__sub_802A7788(void* p);
int TLobby__sub_802A7790(void);
void TLobby__sub_802A7B50(void *);

extern M2C_UNK lbl_804DDBF0[];

void *ct_variant__6TLobbyFPv(void *arg0) {
    TLobby__sub_802A7B50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x8) = lbl_804DDBF0;
    return arg0;
}

void* TLobby__sub_802A7780(void* p) { return (char*)p + 0xc; }
void* TLobby__sub_802A7788(void* p) { return (char*)p + 0xc; }

    extern int lbl_805D6680;
int TLobby__sub_802A7790(void) {  return lbl_805D6680; }

}
