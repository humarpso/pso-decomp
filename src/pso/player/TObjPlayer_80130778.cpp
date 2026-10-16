#include "types.h"
#include "pso/item/TUnk_804A6AD8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *__dt__13TUnk_804A69C0Fv(void *arg0, s16 arg1);
void TObjPlayer__sub_801307D0(void *arg0);
int draw_weapon_model(void*);
int draw_weapon_at_joint(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern s32 lbl_804A69C0[];

void *__dt__13TUnk_804A69C0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A69C0;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_801307D0(void *arg0) {
    if (arg0 != NULL) {
        *(s32 *)((s8 *)arg0 + 0x204) = 1;
    }
}

void TUnk_804A6AD8::reserved_53() { draw_weapon_model(this); ((TObjPlayer *)this)->draw_icon((s32)((void*)3), (s32)((char*)this + 0x208)); ((TObjPlayer *)this)->draw_icon((s32)((void*)1), (s32)((char*)this + 0x220)); draw_weapon_at_joint(this, (void*)35); ((TObjPlayer *)this)->draw_icon((s32)((void*)3), (s32)((char*)this + 0x214)); ((TObjPlayer *)this)->draw_icon((s32)((void*)1), (s32)((char*)this + 0x22c)); }

}
