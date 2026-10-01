#include "types.h"
typedef s32 M2C_UNK;

extern "C" {
u8 TObjPlayer__sub_801C010C(void *self, s16 i);
u8 clamp_to_max__10TObjPlayerFiUcUc(M2C_UNK arg0, u8 arg1, u8 arg2);
void TObjPlayer__sub_801D9BE8(u8 *self, s16 idx);
void TItemProUnit__sub_801D98F8(void *, s16, void *);
s32 TObjPlayer__sub_801D9E08();
void TObjPlayer__sub_801D9B38(void *arg0, void *arg1);
s32 TObjPlayer__sub_801D9E08();
void TObjPlayer__sub_801D9B90(void *arg0, void *arg1);
u8 TObjPlayer__sub_801C010C(void *self, s16 i);
u8 clamp_to_max__10TObjPlayerFiUcUc(M2C_UNK arg0, u8 arg1, u8 arg2);
void TObjPlayer__sub_801D9C34(u8 *self, s16 idx, void *arg2);
}

extern "C" {

void TObjPlayer__sub_801D9B38(void *arg0, void *arg1) {
    s32 i;
    s32 n = TObjPlayer__sub_801D9E08();
    for (i = 0; i < n; i++) {
        TItemProUnit__sub_801D98F8(arg0, i, arg1);
    }
}

void TObjPlayer__sub_801D9B90(void *arg0, void *arg1) {
    s32 i;
    s32 n = TObjPlayer__sub_801D9E08();
    for (i = 0; i < n; i++) {
        TObjPlayer__sub_801D9C34((u8 *)(arg0), (s16)(i), (void *)(arg1));
    }
}

void TObjPlayer__sub_801D9BE8(u8 *self, s16 idx) {
    u8 v = *(self + idx + 0x70);
    u8 c = TObjPlayer__sub_801C010C(self, idx);
    clamp_to_max__10TObjPlayerFiUcUc((M2C_UNK)self, v, c);
}
void TObjPlayer__sub_801D9C34(u8 *self, s16 idx, void *arg2) {
    u8 c = TObjPlayer__sub_801C010C(self, idx);
    *(self + idx + 0x70) = ((u8 (*)(M2C_UNK, void *, u8))clamp_to_max__10TObjPlayerFiUcUc)((M2C_UNK)self, arg2, c);
}

}
