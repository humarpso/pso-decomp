#include "types.h"
typedef s32 M2C_UNK;

struct Rec_801815F8 { s32 a; s32 b; s32 c[2]; };

struct Obj_801815F8 { s32 f00; u8 pad0[0x14]; u8 *vptr; s32 f1C; f32 f20; s32 f24; Rec_801815F8 recs[5]; };

extern "C" {
M2C_UNK destroy_buffer_pair(void *, M2C_UNK);
extern void *lbl_8050DC08[];
void fn_80181750(void);
void __ct__7TObjectFP7TObject(void *);
extern u8 lbl_804B593C[];
extern s32 lbl_805D3248;
extern const f32 lbl_805DBBC8;
Obj_801815F8 *fn_801815F8(Obj_801815F8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_propagation off
Obj_801815F8 *fn_801815F8(Obj_801815F8 *arg0) {
    s32 i;
    s32 j;
    s32 off;
    Rec_801815F8 *r;
    s32 o;
    __ct__7TObjectFP7TObject(arg0);
    arg0->vptr = lbl_804B593C;
    arg0->f00 = lbl_805D3248;
    arg0->f1C = 0;
    arg0->f20 = lbl_805DBBC8;
    arg0->f24 = 0x14;
    for (i = 0; i < 5; i++) {
        r = &arg0->recs[i];
        r->a = 0;
        r->b = 0;
        for (j = 0; j < 2; j++) {
            r->c[j] = 0;
        }
    }
    return arg0;
}
#pragma pop

void fn_80181750(void) {
    s32 i;
    for (i = 4; i >= 0; i--) {
        if (lbl_8050DC08[i] != 0) {
            destroy_buffer_pair(lbl_8050DC08[i], 1);
            lbl_8050DC08[i] = 0;
        }
    }
}

}
