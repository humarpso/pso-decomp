#include "musyx/runtime/musyx_runtime_a.h"

#define ARR_GET_803A3D8C(arr, offset) ((void *)(offset + (u32)arr))
#define SEQ_CUR (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D7360)
#define SEQ_FREE_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D7378)
#define SEQ_RUN_LIST ((SEQ_INSTANCE_803A49C8 *)lbl_805D737C)
#define SEQ_RUN_L (*(SEQ_INSTANCE_803A49C8 **)&lbl_805D737C)
#define ARR_GET_803A5A78(arr, offset) ((void *)(offset + (u32)arr))
#define ARR_GET_803A6364(arr, offset) ((void *)(offset + (u32)arr))
extern "C" {

void TLobby__sub_803AA864(void) {

}

void TLobby__sub_803AB0E0(void) {

}

void TLobby__sub_803AB0E4(s32 arg0) {
    extern Rec_803AB0E4 lbl_80558570[];
    Rec_803AB0E4 *r = &lbl_80558570[arg0];

    switch (r->state) {
    case 1:
    case 2:
        if (r->state == 2) {
            TLobby__sub_803B3628(r->f48);
        }
        r->state = 3;
        r->cb(0, 0, 0, 0, r->f4c);
        break;
    }
}

s32 TLobby__sub_803AB168(u32 arg0) {
    extern Rec_803AB0E4 lbl_80558570[];
    Rec_803AB0E4 *r = lbl_80558570;
    s32 i;

    for (i = 0; i < 64; r++, i++) {
        if (r->state != 0 && arg0 == *(u32 *)r->pad) {
            return i;
        }
    }
    return -1;
}

void TLobby__sub_803AB574(s8 *arg0, s8 *arg1) {
    if (lbl_805D73AC & 1) {
        *arg0 = 0x40;
        *arg1 = 0;
        return;
    }
    if (!(lbl_805D73AC & 2)) {
        *arg1 = 0;
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
#pragma opt_common_subs on
static inline void CheckOutputMode_803AB5A8(u8 *pan, u8 *span) {
    if (lbl_805D73AC & 1) {
        *pan = 64;
        *span = 0;
    } else if (!(lbl_805D73AC & 2)) {
        *span = 0;
    }
}

static inline void SetHWMix_803AB5A8(const Stream_803AB5A8 *si) {
    set_sound_voice_mix(si->voice, 0, (si->pan << 16), (si->span << 16), si->vol * (1 / 127.f), si->auxa * (1 / 127.f), si->auxb * (1 / 127.f));
}

void TLobby__sub_803AB5A8(void) {
    extern Stream_803AB5A8 lbl_80558570[64];
    u32 i;

    sound_disable_irq();
    for (i = 0; i < lbl_80557348.count; ++i) {
        if (lbl_80558570[i].state != 0) {
            lbl_80558570[i].pan = lbl_80558570[i].orgPan;
            lbl_80558570[i].span = lbl_80558570[i].orgSPan;
            CheckOutputMode_803AB5A8(&lbl_80558570[i].pan, &lbl_80558570[i].span);
            if (lbl_80558570[i].state != 3) {
                SetHWMix_803AB5A8(&lbl_80558570[i]);
            }
        }
    }
    sound_enable_irq();
}
#pragma pop

u32 TLobby__sub_803ABB10(u32 arg0, u32 arg1) {
    if (arg1 & 1) {
        return (((arg0 + 13) / 7 * 4 & ~7) + 31) & ~31;
    }
    return ((arg0 * 2) + 31) & ~31;
}

}
