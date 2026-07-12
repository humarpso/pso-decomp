#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_object__6TLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *fn_80338F3C(void *, void *);

void *create_object__6TLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x8C);
    if (o != NULL) {
        o = fn_80338F3C(o, arg0);
    }
    return o;
}

}
