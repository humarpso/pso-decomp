#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"
#include "pso/TItemShootModel.h"

extern "C" {

void *TObjPlayer__sub_80129048(void *arg0, s16 arg1);
s32 TObjPlayer__sub_801290D0(u8 *arg0);
void TObjPlayer__sub_80129124(void* p);
int rotate_matrix_z(void*, void*);
s32 test_flags_any(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);
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

void TObjPlayer::clear_rico_ring_flag() {
    u32 arg0 = (u32)this;
    if (arg0 != 0U) {
        ((TAdRicoRing *)(arg0 + 0x1FC))->clear_flags(2);
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

void TItemShootModel::sub_80129118(s32 arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    *(s32 *)&this->m_58 = arg1;
    *(s32 *)&this->m_5C = arg2;
}

void TObjPlayer__sub_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void TObjPlayer::handle_tunnel_state_0() { if (get_player_list__10TObjPlayerFv(this) == 0) { rotate_matrix_z((void*)0, *(void* *)&this->m_1fc); } }

}
