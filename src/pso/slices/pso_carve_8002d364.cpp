#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern const f32 lbl_805D81A0;
void *__nw__7TObjectFUl(int);
void *TBoss8Dragon__sub_8002CD8C(void *, void *, int);

void fn_8002D364(void *arg0) {
    void *o;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D81A0;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        TBoss8Dragon__sub_8002CD8C(o, M2C_FIELD(arg0, void **, 0x10), 30);
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
}

}
