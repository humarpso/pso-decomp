#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TTecZarua__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjPlayer::create_tec_zarua(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecZarua__ct(o, arg0, arg1, arg2, arg3);
    }
}

}
