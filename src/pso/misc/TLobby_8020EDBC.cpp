#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 free_nodes_with_id__6TLobbyFUl(u32);
s32 mem_free(u32);

extern u32 lbl_80513D78[];
extern u32 lbl_805D6158;

void TLobby::free_rocks() {
    s32 var_r28 = 3;
    u32 *var_r29 = lbl_80513D78;
    s32 var_r30 = 0;
    s32 var_r31 = 3;
    do {
        u32 v = (u32)var_r29[var_r31];
        if (v != 0U) {
            mem_free(v);
            var_r29[var_r31] = (u32)var_r30;
        }
        var_r28 -= 1;
        var_r31 -= 1;
    } while (var_r28 >= 0);
    if ((u32) lbl_805D6158 != 0U) {
        free_nodes_with_id__6TLobbyFUl(lbl_805D6158);
        lbl_805D6158 = var_r30;
    }
}

}
