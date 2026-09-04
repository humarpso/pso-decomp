#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TSceneSora__sub_8029F3E4(void);
int TScene__sub_8029F3E8(void);
void clear_state_if_flag80__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK set_global_effect_state__10TObjPlayerFi(M2C_UNK);

extern s32 some_id_805c6f74;

void clear_state_if_flag80__10TObjPlayerFi(s32 arg0) {
    if (arg0 & 0x80) {
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
        set_global_effect_state__10TObjPlayerFi(0);
        some_id_805c6f74 &= 0xFFF7FFFF;
    }
}

void TSceneSora__sub_8029F3E4(void) {  }

int TScene__sub_8029F3E8(void) { return 0; }

}
