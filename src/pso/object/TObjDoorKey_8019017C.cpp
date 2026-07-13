#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_key__11TObjDoorKeyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5BF8;
extern s32 TObjDoorKey__data_805D5BFC;
extern s32 TObjDoorKey__data_805D5C04;

void free_key__11TObjDoorKeyFv(void) {
    if ((u32) lbl_805D5BF8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BF8, 1);
        lbl_805D5BF8 = 0U;
    }
    free_if_valid__10TObjPlayerFi(TObjDoorKey__data_805D5BFC);
    TObjDoorKey__data_805D5BFC = 0;
    TObjDoorKey__data_805D5C04 = 0;
}

}
