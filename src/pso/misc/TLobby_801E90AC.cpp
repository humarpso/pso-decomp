#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E90AC(void);
void TLobby__sub_801E90D8(void);
M2C_UNK clear_flag_3__7TObjectFv(void *);
M2C_UNK fn_801F34D0(void *);

extern void *tl_04;

void TLobby__sub_801E90AC(void) {
    void *temp = tl_04;
    if (temp != 0) {
        clear_flag_3__7TObjectFv(temp);
    }
}

extern void *tl_04;

void TLobby__sub_801E90D8(void) {
    void *temp = tl_04;
    if (temp != 0) {
        fn_801F34D0(temp);
    }
}

}
