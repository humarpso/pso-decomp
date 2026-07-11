#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_8011B130(void *arg0);
M2C_UNK TLobby__sub_8011B188();

void *TLobby__sub_8011B130(void *arg0) {
    TLobby__sub_8011B188();
    M2C_FIELD(arg0, s8 *, 0) = 0x5F;
    M2C_FIELD(arg0, s8 *, 0x28) = 2;
    M2C_FIELD(arg0, s8 *, 0x29) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x2B) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0xB;
    return arg0;
}

}
