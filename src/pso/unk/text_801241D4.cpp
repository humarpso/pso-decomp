#include "types.h"
struct Vec_801241D4 { f32 x, y, z; };

struct Blk_801241D4 { u32 w[5]; };

struct Obj_801241D4 {
    u8 pad0[0x18];
    void *vtbl;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
};

extern "C" {
void *TLobby__sub_80101AB0(s32);
s32 get_item_ctrl__10TObjPlayerFv();
s32 fn_80115B14(Vec_801241D4 *, Blk_801241D4 *, Obj_801241D4 *);
s32 draw_icon__10TObjPlayerFPvii(void *, s32, Vec_801241D4 *);
void __ct__7TObjectFP7TObject(void *, void *);
extern const Blk_801241D4 lbl_8043E940[];
extern u8 lbl_804A2018[];
Obj_801241D4 *TObjPlayer__sub_801241D4(Obj_801241D4 *self, void *parent, s32 a, s32 b);
}

extern "C" {

Obj_801241D4 *TObjPlayer__sub_801241D4(Obj_801241D4 *self, void *parent, s32 a, s32 b) {
    Vec_801241D4 v;
    void *p;
    __ct__7TObjectFP7TObject(self, parent);
    self->vtbl = lbl_804A2018;
    self->f1c = a;
    self->f20 = b;
    self->f24 = 0;
    self->f28 = get_item_ctrl__10TObjPlayerFv();
    p = TLobby__sub_80101AB0(self->f1c);
    if (p != NULL && draw_icon__10TObjPlayerFPvii(p, self->f20, &v) != 0) {
        Blk_801241D4 blk = lbl_8043E940[0];
        self->f24 = fn_80115B14(&v, &blk, self);
    }
    return self;
}

}
