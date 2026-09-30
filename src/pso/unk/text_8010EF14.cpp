#include "types.h"
typedef void (*Fn_801Fn)(void);
struct Ent_8010F0C0 { Fn_801Fn a; Fn_801Fn b; };
struct Set_8010F0C0 {
    s32 count;
    Ent_8010F0C0 *ents;
    u8 *order;
    u8 pad[4];
};
struct O_8010EFE8 { s32 count; s32 f4; u8 *buf; };

extern "C" {
void fn_8010EFE8(O_8010EFE8 *self);
void set_flags__10TObjPlayerFPvUi(void *, u32);
void clear_flags__11TAdRicoRingFPvUi(void *, u32);
s32 TObjPlayer__sub_8001BEF8(void *, s32);
void fn_8010EF14(void *);
}

extern "C" {

void fn_8010EFE8(O_8010EFE8 *self) {
    s32 i;
    if (self->buf == 0) {
        return;
    }
    for (i = 0; i != self->count; i++) {
        self->buf[i] = i;
    }
}

#pragma push
#pragma opt_common_subs off
void fn_8010F018(Set_8010F0C0 *s) {
    s32 i;
    Fn_801Fn f;
    if (TObjPlayer__sub_8001BEF8((u8 *)s + 0xC, 1) != 0) {
        for (i = s->count - 1; i >= 0; i--) {
            if (s->order != 0) {
                f = s->ents[s->order[i]].b;
            } else {
                f = s->ents[i].b;
            }
            if (f != 0) {
                f();
            }
        }
        clear_flags__11TAdRicoRingFPvUi((u8 *)s + 0xC, 1);
    }
}

void fn_8010F0C0(Set_8010F0C0 *s) {
    s32 i;
    Fn_801Fn f;
    if (TObjPlayer__sub_8001BEF8((u8 *)s + 0xC, 1) == 0) {
        fn_8010EF14(s);
        for (i = 0; i != s->count; i++) {
            if (s->order != 0) {
                f = s->ents[s->order[i]].a;
            } else {
                f = s->ents[i].a;
            }
            if (f != 0) {
                f();
            }
        }
        set_flags__10TObjPlayerFPvUi((u8 *)s + 0xC, 1);
    }
}
#pragma pop

}
