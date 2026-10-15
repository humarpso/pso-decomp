#include "types.h"

extern "C" {

u8 is_active__12TTecReverserFPv(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();

u8 is_active__12TTecReverserFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((arg0 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && !(*(s32 *)((s8 *)arg0 + 0x30) & 0x02040800)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
