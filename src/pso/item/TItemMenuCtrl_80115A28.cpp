#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TItemMenuCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__13TItemMenuCtrl[];
extern void * TItemMenuCtrl__instance;
extern void *lbl_805D2C18;

void *TItemMenuCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TItemMenuCtrl;
    ((TObjPlayer *)((char *)arg0 + 28))->init_forward();
    TItemMenuCtrl__instance = arg0;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2C18;
    return arg0;
}

}
