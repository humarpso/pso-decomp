#include "types.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEneRecobox.h"
#include "pso/misc/TWindowSubComCard.h"

struct Stack_8031FB6C {
    s32 sp8;
    f32 spC;
};

struct Obj_8031FACC { u8 pad[0x3F4]; s32 f3F4; s32 f3F8; u8 pad2[0x410 - 0x3FC]; s32 f410; s32 f414; };

extern "C" {
u8 *csnVectorUnder(s32 *, void *, s32);
s32 set_part_local_pos__9TObjEneDDFPvPvi(void *, void *, int);
extern const f32 lbl_805DF450;
extern const f32 lbl_805DF460;
void TObjEneRecon__sub_8031FB6C(u8 *arg0);
s32 has_child_in_anim_5__12TObjEneReconFv();
extern const f32 lbl_805DF45C;
u8 TObjEneRecon__sub_8031FACC(Obj_8031FACC *arg0);

u8 TObjEneRecon__sub_8031FACC(Obj_8031FACC *arg0) {
    s32 r;
    s32 t;
    if (has_child_in_anim_5__12TObjEneReconFv() == 1) {
        return 0;
    }
    t = (s32)TWindowSubComCard::trunc_float((f32)arg0->f3F8 * lbl_805DF45C);
    r = 0;
    if (arg0->f410 <= t && arg0->f414 < arg0->f3F4) {
        r = 1;
    }
    return (u8)r;
}

void TObjEneRecon__sub_8031FB6C(u8 *arg0) {
    Stack_8031FB6C stack;
    u8 *temp_r3;
    VecCopy((Vec *)(&stack.sp8), (const Vec *)(arg0 + 0x2FC));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3DC) == 1) {
        stack.spC -= lbl_805DF450;
    } else {
        stack.spC += lbl_805DF450;
    }
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15));
    if ((temp_r3 == NULL) || (*(f32 *)((s8 *)arg0 + 0x300) >= (lbl_805DF460 + *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 4)))) {
        ((TObjEneRecobox *)(arg0))->vfunc_97();
    }
    set_part_local_pos__9TObjEneDDFPvPvi((void *) (arg0), (void *) (arg0 + 0x2FC), (int) (0));
}

}
