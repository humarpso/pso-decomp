#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TBoss4ZakoDraw.h"
#include "pso/TParticleCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void *fn_8030A83C(void *arg0);
void *__ct__14TBoss4ZakoDrawFv(void *, void *);
void *__nw__7TObjectFUl(int);
    extern int lobby_online_ready_flag;
int TLobby::get_online_ready_flag() {  return lobby_online_ready_flag; }

void *fn_8030A83C(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__14TBoss4ZakoDrawFv(o, arg0);
    }
    return o;
}

}
