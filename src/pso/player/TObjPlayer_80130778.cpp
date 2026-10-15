#include "types.h"

extern "C" {

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1);
void TObjPlayer__sub_801307D0(void *arg0);
void yasminkov_9000m_draw(void* p);
int draw_icon__10TObjPlayerFPvii(void*, void*, void*);
int draw_weapon_model(void*);
int draw_weapon_at_joint(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern s32 lbl_804A69C0[];

void *TObjPlayer__sub_80130778(void *arg0, s16 arg1) {
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

void yasminkov_9000m_draw(void* p) { draw_weapon_model(p); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x208); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x220); draw_weapon_at_joint(p, (void*)35); draw_icon__10TObjPlayerFPvii(p, (void*)3, (char*)p + 0x214); draw_icon__10TObjPlayerFPvii(p, (void*)1, (char*)p + 0x22c); }

}
