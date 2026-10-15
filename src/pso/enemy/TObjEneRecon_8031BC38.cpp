#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

void TObjEneRecon__sub_8031BC38(void);
void TObjEneRecon__sub_8031BC94(void);
int TObjEneRecobox__sub_803201D0(void);
void *TObjEneReconBomb__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjEneRecon__sub_8031BC38(void) {  }

void *TObjEneRecon::create_bomb(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x364);
    if (o != NULL) {
        o = TObjEneReconBomb__ct(o, arg0, arg1, arg2);
    }
    return o;
}

    extern int recon_bomb_bml_resource;
void TObjEneRecon__sub_8031BC94(void) { recon_bomb_bml_resource = TObjEneRecobox__sub_803201D0(); }

}
