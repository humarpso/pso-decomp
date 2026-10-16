#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
struct Line_80269454 { u32 flags; u32 f4; };

struct Entry_80269454 { u16 flags; };

struct Win_80269454 { u8 pad[0x5c]; u32 f5c; u8 pad2[0xc]; f32 f6c; u8 pad3[0xc]; Line_80269454 *lines; u8 pad4[4]; f32 f84; u8 pad5[4]; u32 count; };

struct Win_802693B4 { u8 pad[0x6c]; f32 f6c; u8 pad2[0x84 - 0x70]; f32 f84; u8 pad3[4]; u32 count; };

extern "C" {
Entry_80269454 *get_array_entry__13TUnk_804CE018Fi(void *, s32);
void *get_field_20__17TWindowSubComCardFv(void *);
void complete_reveal__14TWindowMessageFPv(Win_80269454 *self);
Entry_80269454 *get_array_entry__13TUnk_804CE018Fi(void *, s32);
void *get_field_20__17TWindowSubComCardFv(void *);
s32 is_window_reveal_complete();
s32 is_message_window_ready(struct Win_802693B4 *arg0);
}

extern "C" {

s32 is_message_window_ready(struct Win_802693B4 *arg0) {
    Entry_80269454 *e;
    u32 i;
    if (is_window_reveal_complete() == 0) {
        return 0;
    }
    if (arg0->f6c != arg0->f84) {
        return 0;
    }
    for (i = 0; i < arg0->count; i++) {
        e = get_array_entry__13TUnk_804CE018Fi(arg0, i);
        if (get_field_20__17TWindowSubComCardFv(e) != 0 && !(e->flags & 0x10)) {
            return 0;
        }
    }
    return 1;
}

void complete_reveal__14TWindowMessageFPv(Win_80269454 *self) {
    Line_80269454 *lines;
    u32 i;
    Entry_80269454 *e;
    self->f5c = 0x01000000;
    self->f6c = self->f84;
    for (i = 0; i < self->count; i++) {
        e = get_array_entry__13TUnk_804CE018Fi(self, i);
        lines = self->lines;
        if (get_field_20__17TWindowSubComCardFv(e) != 0) {
            if (lines[i].flags & 8) {
                lines[i].flags &= ~8;
                e->flags &= ~8;
            }
            ((TWindowHelpItem *)e)->reset_float_field();
        }
    }
}

}
