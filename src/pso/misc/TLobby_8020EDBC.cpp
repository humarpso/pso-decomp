#include "types.h"

extern "C" {

void free_rocks__6TLobbyFv(void);
s32 free_nodes_with_id__6TLobbyFUi(u32);
s32 free__11TOBoss4RockFUi(u32);

extern u32 lbl_80513D78[];
extern u32 lbl_805D6158;

void free_rocks__6TLobbyFv(void) {
    s32 var_r28 = 3;
    u32 *var_r29 = lbl_80513D78;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            free__11TOBoss4RockFUi(v);
            var_r29[var_r31] = (u32)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6158 != 0U) {
        free_nodes_with_id__6TLobbyFUi(lbl_805D6158);
        lbl_805D6158 = var_r30;
    }
}

}
