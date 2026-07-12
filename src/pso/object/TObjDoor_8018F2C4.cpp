#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__8TObjDoorFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern s32 TObjDoor__data_805D5BC0;
extern u32 lbl_805D5BC4;

void free_resources__8TObjDoorFv(void) {
    fn_801E483C(TObjDoor__data_805D5BC0);
    TObjDoor__data_805D5BC0 = 0;
    if ((u32) lbl_805D5BC4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5BC4, 1);
        lbl_805D5BC4 = 0U;
    }
}

}
