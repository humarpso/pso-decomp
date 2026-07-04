#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern M2C_UNK lbl_8044F280[];
void *__nw__7TObjectFUl(int);
void *TWindowLoadItemTexture__ct(void *, void *, void *, void *);
void TWindowSubStatusDisp__sub_80223B88(void *, int);
extern const f32 lbl_805DD0EC;
extern const f32 lbl_805DD0F4;
extern const f32 lbl_805DD0F8;
void fn_8025B078(f32, f32, f32, f32);

void *fn_8026297C(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TWindowLoadItemTexture__ct(o, arg0, lbl_8044F280, arg1);
    }
    TWindowSubStatusDisp__sub_80223B88(o, 0);
    fn_8025B078(lbl_805DD0EC, lbl_805DD0EC, lbl_805DD0F4, lbl_805DD0F8);
    return o;
}

}
