#include "types.h"
#include "pso/item/TItemShootModel_dtor.h"
#include "pso/player/TObjPlayer_8012C950.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"

extern "C" {

s32 test_flags_any(void *, int);
void __dl__7TObjectFPv(void *);

extern s32 lbl_804A5340[];

void *__dt__13TUnk_804A5340Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A5340;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void rocket_punch_return_timer(u32 arg0) {
    if (arg0 != 0U) {
        ((TAdRicoRing *)(arg0 + 0x1F8))->clear_flags(2);
    }
}

s32 TObjPlayer::get_hp_by_flag() {
    u8 *arg0 = (u8 *)this;
    if (test_flags_any((u8 *)&this->unk_1F8, 4) != 0) {
        return *(s32 *)((s8 *)arg0 + 0x188);
    }
    return this->m_184;
}

}
