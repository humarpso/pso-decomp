#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_8003B1FC { u8 pad[0x14]; Obj_8003B1FC *child; u8 pad2[0x3c - 0x18]; u8 xf[0xC]; };

struct Ch_802F1960 { u8 pad[0x44]; f32 f; };

struct Obj_802F1960 { u8 pad0[0x14]; Ch_802F1960 *child; };

extern "C" {
s32 TBoss4Zako__sub_803D8910(void *, void *);
s32 set_parent__7TObjectFP7TObject(void *, void *);
extern void *lbl_805D6960;
void fn_802F190C(Obj_8003B1FC *self, void *arg);
s32 set_parent__7TObjectFP7TObject(void *, void *);
extern void *lbl_805D6960;
void fn_802F1960(Obj_802F1960 *o, f32 d);
}

extern "C" {

void fn_802F190C(Obj_8003B1FC *self, void *arg) {
    Obj_8003B1FC *c;
    while ((c = self->child) != 0) {
        TBoss4Zako__sub_803D8910(c->xf, arg);
        set_parent__7TObjectFP7TObject(c, lbl_805D6960);
    }
}
void fn_802F1960(Obj_802F1960 *o, f32 d) {
    Ch_802F1960 *c;
    while ((c = o->child) != 0) {
        c->f = c->f + d;
        set_parent__7TObjectFP7TObject(c, lbl_805D6960);
    }
}

}
