#include "types.h"

extern "C" {

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1);
s32 TObjPlayer__sub_801290D0(u8 *arg0);
void TObjPlayer__sub_80129118(u8 *arg0, s32 arg1, s32 arg2);
void TObjPlayer__sub_80129124(void* p);
void clear_rico_ring_flag__10TObjPlayerFUi(u32 arg0);
int rotate_matrix_z(void*, void*);
s32 test_flags_any(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
s32 clear_flags__11TAdRicoRingFUl(s32, s32);
int get_player_list__10TObjPlayerFv(void*);

extern s32 lbl_804A4020[];

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A4020;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void clear_rico_ring_flag__10TObjPlayerFUi(u32 arg0) {
    if (arg0 != 0U) {
        clear_flags__11TAdRicoRingFUl(arg0 + 0x1FC, 2);
    }
}

#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801290D0(u8 *arg0) {
    if (test_flags_any((void *) (arg0 + 0x1FC), (int) (4)) != 0) {
        return *(s32 *)((s8 *)arg0 + 0x188);
    }
    return *(s32 *)((s8 *)arg0 + 0x184);
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
}

extern "C" {

}

void TObjPlayer__sub_80129118(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((s8 *)arg0 + 0x58) = arg1;
    *(s32 *)((s8 *)arg0 + 0x5C) = arg2;
}

void TObjPlayer__sub_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void TObjPlayer::handle_tunnel_state_0() { if (get_player_list__10TObjPlayerFv(this) == 0) { rotate_matrix_z((void*)0, *(void**)((char*)this + 0x1fc)); } }

}
