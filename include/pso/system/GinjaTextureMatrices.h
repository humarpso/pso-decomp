#ifndef PSO_GINJA_TEXTURE_MATRICES_H
#define PSO_GINJA_TEXTURE_MATRICES_H
#include "types.h"

typedef f32 GinjaMatrix[3][4];
struct GinjaModelQueue {
    void** models;
    u32 count;
    void (*draw)(void*);
};
extern "C" {
extern GinjaMatrix* lbl_805D7774;
extern u32 some_id_805c6f74;
extern GinjaModelQueue lbl_8058CD70;
extern GinjaMatrix lbl_8058CB68[10];
void GXLoadPosMtxImm(const GinjaMatrix,u32);
void GXLoadNrmMtxImm(const GinjaMatrix,u32);
void GXLoadTexMtxImm(const GinjaMatrix,u32,u32);
void GXSetCurrentMtx(u32);
void PSMTXScale(GinjaMatrix,f32,f32,f32);
void PSMTXTrans(GinjaMatrix,f32,f32,f32);
u32 PSMTXInverse(const GinjaMatrix,GinjaMatrix);
void PSMTXTranspose(const GinjaMatrix,GinjaMatrix);
void PSMTXConcat(const GinjaMatrix,const GinjaMatrix,GinjaMatrix);
}
#endif
