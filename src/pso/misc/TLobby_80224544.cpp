#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct SRock_80224544;

extern "C" {

void free_all_rocks__6TLobbyFv(void);
M2C_UNK TLobby__sub_800F957C(u32);
M2C_UNK free__11TOBoss4RockFUi(u32);

extern M2C_UNK lbl_80513F20[];
extern u32 lbl_805D6260;

void free_all_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    M2C_UNK *var_r29 = lbl_80513F20;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (M2C_UNK)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6260 != 0U) {
        TLobby__sub_800F957C(lbl_805D6260);
        lbl_805D6260 = var_r30;
    }
}

}
