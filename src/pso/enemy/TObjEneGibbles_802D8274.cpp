#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_motion__14TObjEneGibblesFPv(void *arg0);
M2C_UNK fn_800F6B14(void *);
M2C_UNK TLobby__sub_8020C5A4(void *);

void set_motion__14TObjEneGibblesFPv(void *arg0) {
    void *temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        fn_800F6B14(arg0);
        TLobby__sub_8020C5A4(arg0);
    }
}

}
