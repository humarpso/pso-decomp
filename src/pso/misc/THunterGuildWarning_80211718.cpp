#include "types.h"
struct Obj_802119CC { u8 pad[0x24]; s32 a[4]; };

struct S_80211718 { u8 pad[0x24]; u32 w[4]; };

extern "C" {
void THunterGuildWarning__sub_802119CC(Obj_802119CC *self);
void TWindow__close(u32);
void close_windows__19THunterGuildWarningFPv(S_80211718 *self);
}

extern "C" {

void close_windows__19THunterGuildWarningFPv(S_80211718 *self) {
    s32 i = 0;
    do {
        if (self->w[i] != 0) {
            TWindow__close(self->w[i]);
            self->w[i] = 0;
        }
        i++;
    } while (i < 4);
}

void THunterGuildWarning__sub_802119CC(Obj_802119CC *self) {
    s32 i;
    for (i = 0; i < 4; i++) self->a[i] = 0;
}

}
