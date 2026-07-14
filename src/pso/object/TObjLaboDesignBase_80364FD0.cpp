#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TObjLaboDesignBaseFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
M2C_UNK TObjFish__sub_803DA798();
M2C_UNK TObjLaboDesignBase__sub_80364F18(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();

void render__18TObjLaboDesignBaseFPv(u8 *arg0) {
    TObjFish__sub_8001EDB0((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0));
    TObjFish__sub_803DA798();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjLaboDesignBase__sub_80364F18((void *) (arg0), (int) (TObjFish__sub_8001EDC4((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0))));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
