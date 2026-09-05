#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjPlayer__sub_8011E87C(void *, int);
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
void TObjPlayer__sub_80127F8C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80127F8C(u8 *arg0) {
    s32 temp_r31;
    TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x31));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (0));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (1));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x24));
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (2));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (3));
}

}
