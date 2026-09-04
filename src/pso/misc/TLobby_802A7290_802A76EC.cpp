#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* TLobby__sub_802A7780(void* p);
void* TLobby__sub_802A7788(void* p);
int TLobby__sub_802A7790(void);
void *__dt__6TLobbyFPvs(void *arg0, s16 arg1);
void *ct_variant__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_802A7AF8(M2C_UNK, M2C_UNK *);
void TLobby__sub_802A7B50(void *);
M2C_UNK free__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804DDBF0[];

void *__dt__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804DDBF0;
        TLobby__sub_802A7AF8((M2C_UNK)arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

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
