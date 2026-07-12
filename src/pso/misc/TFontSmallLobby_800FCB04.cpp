#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TFontSmallLobbyFPv(void *arg0);
void *__nw__7TObjectFUl(int);
void *fn_800FCC78(void *, void *);

void *create__15TFontSmallLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = fn_800FCC78(o, arg0);
    }
    return o;
}

}
