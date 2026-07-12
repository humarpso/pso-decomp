#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_menu__15TWindowMainMenuFPvPv(void *arg0, void *arg1);
void *TWindowMenuMainMenu__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_menu__15TWindowMainMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x144);
    if (o != NULL) {
        o = TWindowMenuMainMenu__ct(o, arg0, arg1);
    }
    return o;
}

}
