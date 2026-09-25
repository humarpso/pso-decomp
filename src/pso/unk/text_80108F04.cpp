#include "types.h"
extern "C" {
void *__nw__7TObjectFUl(u32 size);
void *TItemEffFlame__ct(void *self, void *parent, void *target);
void spawn_item_timer__13TItemAttackerFiii(void *obj, void *cb, s32 frames);
int destroy__14TItemEffHeavenFPv(void *p);
extern void *tl_05;
void fn_80108F8C(void *self, void *target);
}

extern "C" {

void fn_80108F8C(void *self, void *target) {
    void *p;
    if (target != NULL) {
        p = __nw__7TObjectFUl(0x28);
        if (p != NULL) {
            p = TItemEffFlame__ct(p, tl_05, target);
        }
        spawn_item_timer__13TItemAttackerFiii(p, (void *)destroy__14TItemEffHeavenFPv, 0x1E);
    }
}

}
