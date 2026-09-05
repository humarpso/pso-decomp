#include "pso/TChCrEffWall.h"

TChCrEffWall::~TChCrEffWall() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void *fn_8029AE88(void *arg0);
void * __ct__12TChCrEffWallFv(void *, void * = 0);
void *__nw__7TObjectFUl(int);
void * fn_8029AE88(void *arg0);
}

extern "C" {

void TChCrEffTagStr__sub_8029AED0(void* p);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__12TChCrEffWall[];
extern void *lbl_805D3D10;

void *__ct__12TChCrEffWallFv(void *arg0, void * _w1) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TChCrEffWall;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D10;
    return arg0;
}
void *fn_8029AE88(void *arg0) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__12TChCrEffWallFv((void *)(o), (void *)(arg0));
    }
    return o;
}

}
