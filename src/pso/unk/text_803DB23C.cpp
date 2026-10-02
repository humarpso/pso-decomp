#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DB24C { void *a; s32 b; s32 c; };

typedef f32 Mtx_803DB270[3][4];
extern "C" {
extern u8 lbl_8058CD48[];
extern S_803DB24C lbl_8058CD70;
void TObjPlayer__sub_803DB24C(s32 x);
void PSMTXConcat(void *, void *, void *);
void PSMTXTranspose(void *, void *);
void PSMTXInverse(void *, void *);
void PSMTXTrans(void *, f32, f32, f32);
void PSMTXScale(void *, f32, f32, f32);
void GXLoadPosMtxImm(void *, u32);
void GXLoadNrmMtxImm(void *, u32);
void fn_803DB3C4(s32);
extern Mtx_803DB270 lbl_8058CB68[];
extern S_803DB24C lbl_8058CD70;
extern void *lbl_805D7774;
extern u32 some_id_805c6f74;
void queue_model_draw_matrix(s32 arg0, void *mtx);
}

extern "C" {

s32 TObjPlayer__sub_803DB23C(void);
s32 TObjPlayer__sub_803DB244(void);

s32 TObjPlayer__sub_803DB23C(void) {
    return 0;
}

s32 TObjPlayer__sub_803DB244(void) {
    return 0;
}
#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DB24C(s32 x) {
    lbl_8058CD70.a = lbl_8058CD48;
    lbl_8058CD70.b = 0;
    lbl_8058CD70.c = x;
}
#pragma pop

void queue_model_draw_matrix(s32 arg0, void *mtx) {
    Mtx_803DB270 inv;
    Mtx_803DB270 trans;
    Mtx_803DB270 scale;
    GXLoadPosMtxImm(mtx, lbl_8058CD70.b * 3);
    GXLoadNrmMtxImm(mtx, lbl_8058CD70.b * 3);
    if (some_id_805c6f74 & 0x100000) {
        PSMTXScale(scale, -0.5f, -0.5f, 0.0f);
        PSMTXTrans(trans, 0.5f, 0.5f, 1.0f);
        PSMTXInverse(lbl_805D7774, inv);
        PSMTXTranspose(inv, inv);
        PSMTXConcat(scale, inv, inv);
        PSMTXConcat(trans, inv, lbl_8058CB68[lbl_8058CD70.b]);
    }
    ((s32 *)lbl_8058CD70.a)[lbl_8058CD70.b] = arg0;
    if ((u32)++lbl_8058CD70.b == 10) {
        fn_803DB3C4(10);
        lbl_8058CD70.b = 0;
    }
}

}
