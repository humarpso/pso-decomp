#include "types.h"
struct Obj_8007FA94 { u8 pad[0x20]; s32 state; s32 value; };

extern "C" {
void *__nw__7TObjectFUl(int);
void *__ct__17TDuelEffectStringFv(void *p, s32 v, void *s, s32 n);
void send_neg50__6TLobbyFPvPv(void *a, s32 b);
void queue_destruction__7TObjectFv(void *);
extern u8 lbl_80438D48[];
extern u8 lbl_80438D50[];
void fn_8007FA94(Obj_8007FA94 *self);
}

extern "C" {

void fn_8007FA94(Obj_8007FA94 *self) {
    switch (self->state) {
    case 0: {
        void *p = __nw__7TObjectFUl(0x2C);
        if (p != NULL) {
            __ct__17TDuelEffectStringFv(p, self->value, lbl_80438D48, 1);
        }
        send_neg50__6TLobbyFPvPv(lbl_80438D50, 0x96);
        break;
    }
    case 30:
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}
