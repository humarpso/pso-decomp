#include "types.h"

extern "C" {

void * create_mist_ctrl__6TLobbyFPvPv(void *arg0, void *arg1);
void *TObjMistCtrl__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_mist_ctrl__6TLobbyFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TObjMistCtrl__ct(o, arg0, arg1);
    }
    return o;
}

}
