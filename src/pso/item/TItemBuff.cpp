#include "types.h"

extern "C" {

void free_all_and_init__9TItemBuffFv(void);
s32 TItemBuff__ct();
s32 free__11TOBoss4RockFUi(s32);

extern s32 item_nj_chunk_buffer_table[];

void free_all_and_init__9TItemBuffFv(void) {
    s32 var_r28;
    s32 *var_r29;
    s32 var_r30;
    s32 var_r31;

    TItemBuff__ct();
    var_r31 = 0;
    var_r30 = var_r31;
    var_r28 = 0;
    var_r29 = item_nj_chunk_buffer_table;
    do {
        free__11TOBoss4RockFUi(var_r29[var_r31]);
        var_r28 += 1;
        var_r29[var_r31] = var_r30;
        var_r31 += 1;
    } while (var_r28 != 2);
}

}
