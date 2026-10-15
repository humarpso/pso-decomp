#include "types.h"

extern "C" {

void *create_remote_player_object(void *arg0);
s32 TItem__sub_80101CF0();
void *__ct__10TObjPlayerFPvPvPv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *create_remote_player_object(void *arg0) {
    void *o;

    TItem__sub_80101CF0();
    o = __nw__7TObjectFUl(0xDB8);
    if (o != NULL) {
        o = __ct__10TObjPlayerFPvPvPv(o, tl_03, arg0);
    }
    return o;
}

}
