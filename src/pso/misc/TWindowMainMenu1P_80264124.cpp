#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TWindowMainMenu1P__sub_80264124(void *arg0);
void *__nw__7TObjectFUl(int);
void fn_80263B28(void *);
void fn_802640E4(void *);
void *fn_802C7250(void *, void *, void *);

void TWindowMainMenu1P__sub_80264124(void *arg0) {
    void *o;
    fn_802640E4(arg0);
    fn_80263B28(arg0);
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = fn_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    M2C_FIELD(arg0, void **, 0x20) = o;
}

}
