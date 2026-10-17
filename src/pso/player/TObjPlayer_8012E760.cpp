#include "types.h"
#include "pso/player/TObjPlayer_8012E760.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int queue_destruction__7TObjectFv(void*);

extern s32 lbl_804A5D10[];

void *__dt__13TUnk_804A5D10Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5D10;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

int expire_weapon_casing(void* p) { return queue_destruction__7TObjectFv(p); }

}
