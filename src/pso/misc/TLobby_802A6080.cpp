#include "types.h"
#include "pso/system/GinjaMaterial.h"
#include "pso/unk/text_803D853C.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/TObjSuisoChip.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSnapShot.h"

struct Chip_802A60CC {
    u8 pad0[0x18];
    s32 f18, f1c, f20;
    u8 pad24[0x38 - 0x24];
};

struct O_802A60CC {
    u8 pad0[0x54];
    s32 f54;
    u8 pad58[0xC];
    s32 f64;
    u8 pad68[8];
    Chip_802A60CC chips[3];
    u8 pad_[0x234 - 0x70 - 3 * 0x38];
    u8 f234[0xC];
    s32 f240;
    s32 f244;
};

extern "C" {
void rotate_matrix_y(s32, s32);
void push_matrix();
void post_translate_matrix(void *);
s32 TObjChip__vt6();
int TObjChip__vt8(void*, void*);

int TLobby::get_max_players() { return 8; }

void TObjSuisoChip::vfunc_8() {
    TObjChip__vt6();
}

void TObjSuisoChip::vfunc_10() { TObjChip__vt8(this, (char*)this + 0x234); }
void TObjSuisoChip::vfunc_12() {
    O_802A60CC *arg0 = (O_802A60CC *)this;
    Chip_802A60CC *p;
    s32 i;
    if (arg0->f244 != 1) {
        p = arg0->chips;
        push_matrix();
        post_translate_matrix(arg0->f234);
        rotate_matrix_y(0, arg0->f240);
        for (i = 0; i < arg0->f54; i++, p++) {
            push_matrix();
            post_translate_matrix(p);
            rotate_matrix_yxz(0, p->f18, p->f1c, p->f20);
            draw_ginja_object((void *)arg0->f64);
            pop_matrix();
        }
        pop_matrix();
    }
}

}
