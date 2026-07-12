#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_and_close__6TLobbyFv(void);
M2C_UNK pop_and_close__6TLobbyFv();

extern u8 *lbl_805D5360;
extern s32 lbl_805D536C;

void notify_and_close__6TLobbyFv(void) {
    M2C_UNK (*temp_r12)(void *);
    s32 *temp_r3;

    temp_r3 = M2C_FIELD(lbl_805D5360, s32 **, 0x34);
    if (temp_r3 != NULL) {
        *temp_r3 = 1;
    }
    temp_r12 = M2C_FIELD(lbl_805D5360, M2C_UNK (**)(void *), 0x40);
    if (temp_r12 != NULL) {
        temp_r12(lbl_805D5360 + 0x44);
    }
    pop_and_close__6TLobbyFv();
    lbl_805D536C = 0;
}

}
