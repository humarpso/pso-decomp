#include "types.h"
struct Obj_80269004 { u8 p0[0x18]; void *f18; };

extern "C" {
void construct_with_parent__15TWindowAdditionFPvPv(void *, void *, s32, void *);
void TWindowMenuInfomation__ct(void *, void *);
extern u8 lbl_804D0644[];
extern u8 lbl_804D0658[];
Obj_80269004 *fn_80269004(Obj_80269004 *self, void *parent, void *arg2);
}

extern "C" {

Obj_80269004 *fn_80269004(Obj_80269004 *self, void *parent, void *arg2) {
    construct_with_parent__15TWindowAdditionFPvPv(self, lbl_804D0644, 4, parent);
    self->f18 = lbl_804D0658;
    TWindowMenuInfomation__ct(self, arg2);
    return self;
}

}
