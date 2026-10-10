#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DB24C { void *a; s32 b; s32 c; };

typedef f32 Mtx_803DB270[3][4];
extern "C" {
extern u8 lbl_8058CD48[];
extern S_803DB24C model_draw_queue_state;
void init_model_draw_queue(s32 x);
void PSMTXConcat(void *, void *, void *);
void PSMTXTranspose(void *, void *);
void PSMTXInverse(void *, void *);
void PSMTXTrans(void *, f32, f32, f32);
void PSMTXScale(void *, f32, f32, f32);
void GXLoadPosMtxImm(void *, u32);
void GXLoadNrmMtxImm(void *, u32);
void draw_queued_models(s32);
extern Mtx_803DB270 lbl_8058CB68[];
extern S_803DB24C model_draw_queue_state;
extern void *current_matrix;
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
void init_model_draw_queue(s32 x) {
    model_draw_queue_state.a = lbl_8058CD48;
    model_draw_queue_state.b = 0;
    model_draw_queue_state.c = x;
}
#pragma pop

void queue_model_draw_matrix(s32 arg0, void *mtx) {
    Mtx_803DB270 inv;
    Mtx_803DB270 trans;
    Mtx_803DB270 scale;
    GXLoadPosMtxImm(mtx, model_draw_queue_state.b * 3);
    GXLoadNrmMtxImm(mtx, model_draw_queue_state.b * 3);
    if (some_id_805c6f74 & 0x100000) {
        PSMTXScale(scale, -0.5f, -0.5f, 0.0f);
        PSMTXTrans(trans, 0.5f, 0.5f, 1.0f);
        PSMTXInverse(current_matrix, inv);
        PSMTXTranspose(inv, inv);
        PSMTXConcat(scale, inv, inv);
        PSMTXConcat(trans, inv, lbl_8058CB68[model_draw_queue_state.b]);
    }
    ((s32 *)model_draw_queue_state.a)[model_draw_queue_state.b] = arg0;
    if ((u32)++model_draw_queue_state.b == 10) {
        draw_queued_models(10);
        model_draw_queue_state.b = 0;
    }
}

}
