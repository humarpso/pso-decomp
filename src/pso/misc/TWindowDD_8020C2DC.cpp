#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_all_ready__9TWindowDDFi(s32 arg0);
u8 *TLobby__sub_8020B334();
s32 TLobby__sub_8020B454(s32);

s32 check_all_ready__9TWindowDDFi(s32 arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    s32 i;
    u8 *var_r31;

    var_r31 = TLobby__sub_8020B334();
    temp_r3 = TLobby__sub_8020B454(arg0);
    if (var_r31 != NULL) {
        for (i = 0; i < temp_r3; i++) {
            temp_r3_2 = M2C_FIELD(var_r31, s16 *, 2);
            if (!(temp_r3_2 & 8) && (temp_r3_2 & 2)) {
                return 0;
            }
            var_r31 += 0x48;
        }
    }
    return 1;
}

}
