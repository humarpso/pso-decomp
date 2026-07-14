#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__18TItemReverseTechBGFv(void *arg0);
void reset_transform_state__10TObjPlayerFv(void *);
void notify_fish_if_valid__10TObjPlayerFUi(void *);
void TWindowSubStatusDisp__sub_803DEE6C(int);
void TWindowSubStatusDisp__sub_803DEEAC(void);
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);

void render__18TItemReverseTechBGFv(void *arg0) {
    reset_transform_state__10TObjPlayerFv(arg0);
    notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, void **, 0x2C));
    TWindowSubStatusDisp__sub_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x30), M2C_FIELD(arg0, void **, 0x34));
    TWindowSubComCard__sub_803DEECC((void *)((char *)arg0 + 56), M2C_FIELD(arg0, f32 *, 0x58));
    TWindowSubStatusDisp__sub_803DEEAC();
}

}
