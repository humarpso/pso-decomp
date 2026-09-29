#include "types.h"
typedef s32 M2C_UNK;
extern "C" {
u8 TObjPlayer__sub_801C010C(void *self, s16 i);
u8 clamp_to_max__10TObjPlayerFiUcUc(M2C_UNK arg0, u8 arg1, u8 arg2);
void TObjPlayer__sub_801D9BE8(u8 *self, s16 idx);
}

extern "C" {

void TObjPlayer__sub_801D9BE8(u8 *self, s16 idx) {
    u8 v = *(self + idx + 0x70);
    u8 c = TObjPlayer__sub_801C010C(self, idx);
    clamp_to_max__10TObjPlayerFiUcUc((M2C_UNK)self, v, c);
}

}
