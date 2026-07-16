#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8001FE7C(void *, s16);
M2C_UNK destroy_buffers__6TSceneFPvs(void *, s16);
extern void *TObjDoorJung__data_805D5BD0;
extern void *TObjDoorJung__data_805D5BE0;

void TObjDoorJung__sub_8018F458(void) {
    if (TObjDoorJung__data_805D5BE0 != NULL) {
        destroy_buffers__6TSceneFPvs(TObjDoorJung__data_805D5BE0, 1);
        TObjDoorJung__data_805D5BE0 = NULL;
    }
    if (TObjDoorJung__data_805D5BD0 != NULL) {
        TLobby__sub_8001FE7C(TObjDoorJung__data_805D5BD0, 1);
        TObjDoorJung__data_805D5BD0 = NULL;
    }
}

}
