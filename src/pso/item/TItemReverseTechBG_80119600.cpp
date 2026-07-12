#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__18TItemReverseTechBGFv(void *arg0);
void TObjPlayer__sub_80141F1C(void *);
void TObjPlayer__sub_8023E480(void *);
void fn_803DEE6C(int);
void fn_803DEEAC(void);
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);

void render__18TItemReverseTechBGFv(void *arg0) {
    TObjPlayer__sub_80141F1C(arg0);
    TObjPlayer__sub_8023E480(M2C_FIELD(arg0, void **, 0x2C));
    fn_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x30), M2C_FIELD(arg0, void **, 0x34));
    TWindowSubComCard__sub_803DEECC((void *)((char *)arg0 + 56), M2C_FIELD(arg0, f32 *, 0x58));
    fn_803DEEAC();
}

}
