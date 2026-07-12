#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_802930C8(void);
void *TChallenge4P__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_su;

void *TLobby__sub_802930C8(void) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TChallenge4P__ct(o, tl_su);
    }
    return o;
}

}
