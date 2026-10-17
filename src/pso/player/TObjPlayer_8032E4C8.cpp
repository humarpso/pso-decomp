#include "types.h"
#include "pso/player/TObjPlayer_8032E4C8.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 construct_card_effect_on_target(void *, s32, u32 *, s32, s32, s32);
void *__nw__7TObjectFUl(s32);
s32 __ct__13TUnk_804EDD44FP7TObjectPfPfll(void*, s32, s32, s32, s32, s32);
}

extern s32 tl_05;

void start_guardianna_wall_card(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl(0x70);
    if (obj != 0) {
        __ct__13TUnk_804EDD44FP7TObjectPfPfll(obj, tl_05, arg1, arg2, -0x100, arg0);
    }
}
extern "C" {

void TObjPlayer::start_guardianna_hit_card(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl(0x70);
        if (obj != NULL) {
            construct_card_effect_on_target(obj, tl_05, arg1, arg2, -0x100, arg0);
        }
    }
}

void TItemWpnCardEffect__sub_8032E588(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl(0x70);
    if (obj != 0) {
        __ct__13TUnk_804EDD44FP7TObjectPfPfll(obj, tl_05, arg1, arg2, 0xFFFF0000, arg0);
    }
}

void TObjPlayer::create_aux_object(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl(0x70);
        if (obj != NULL) {
            construct_card_effect_on_target(obj, tl_05, arg1, arg2, 0xFFFF0000, arg0);
        }
    }
}

void TObjPlayer__sub_8032E648(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl(0x70);
    if (obj != 0) {
        __ct__13TUnk_804EDD44FP7TObjectPfPfll(obj, tl_05, arg1, arg2, 0, arg0);
    }
}

void TObjPlayer::create_network_object(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl(0x70);
        if (obj != NULL) {
            construct_card_effect_on_target(obj, tl_05, arg1, arg2, 0, arg0);
        }
    }
}
}
