#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80122CDC(s32 arg0);
void *TObjPlayer__sub_80122D38(void *arg0);
u8 TItemProShield__sub_8010B734();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8011F63C(s32);
void TObjPlayer__sub_80120D50(void *);

extern s32 tl_05;

void TObjPlayer__sub_80122CDC(s32 arg0) {
    if ((TItemProShield__sub_8010B734() < 4U) && (TObjPlayer__sub_8011F63C(arg0) == 0)) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 1, 2);
    }
}

extern M2C_UNK lbl_804A1478[];

void *TObjPlayer__sub_80122D38(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A1478;
    return arg0;
}

}
