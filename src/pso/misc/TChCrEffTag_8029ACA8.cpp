#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_TChCrEffTag(void *arg0);
void set_eff_tag__11TChCrEffTagFi(int a0);
void *__ct__11TChCrEffTagFv(void *, void *);
void *__nw__7TObjectFUl(int);

    extern int TChCrEffTag__data_805D3D0C;
void set_eff_tag__11TChCrEffTagFi(int a0) { TChCrEffTag__data_805D3D0C = a0; }

void *create_TChCrEffTag(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__11TChCrEffTagFv(o, arg0);
    }
    return o;
}

}
