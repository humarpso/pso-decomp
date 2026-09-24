#include "types.h"
struct Line_80269454 { u32 flags; u32 f4; };

struct Entry_80269454 { u16 flags; };

struct Win_80269454 { u8 pad[0x5c]; u32 f5c; u8 pad2[0xc]; f32 f6c; u8 pad3[0xc]; Line_80269454 *lines; u8 pad4[4]; f32 f84; u8 pad5[4]; u32 count; };

extern "C" {
Entry_80269454 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void *get_field_20__17TWindowSubComCardFPv(void *);
void reset_float_field__15TWindowHelpItemFPv(void *);
void TLobby__sub_80269454(Win_80269454 *self);
}

extern "C" {

void TLobby__sub_80269454(Win_80269454 *self) {
    Line_80269454 *lines;
    u32 i;
    Entry_80269454 *e;
    self->f5c = 0x01000000;
    self->f6c = self->f84;
    for (i = 0; i < self->count; i++) {
        e = get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        lines = self->lines;
        if (get_field_20__17TWindowSubComCardFPv(e) != 0) {
            if (lines[i].flags & 8) {
                lines[i].flags &= ~8;
                e->flags &= ~8;
            }
            reset_float_field__15TWindowHelpItemFPv(e);
        }
    }
}

}
