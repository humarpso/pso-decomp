#include "types.h"

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
