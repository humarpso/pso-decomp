#include "types.h"
#include "pso/TAdPlayerLoadGC.h"

extern "C" {

s32 probe_and_check_card__15TAdPlayerLoadGCFv(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFv(s32);
s32 check_memcard_status__15TAdPlayerLoadGCFl(s32);
s32 has_no_save_files__23TAdSinglePlyChrSelectGCFv(s32);
s32 TAdSinglePlyChrSelectGC__sub_8033BA84(s32);
s32 fn_8033BAB4(void *);

s32 TAdPlayerLoadGC::poll_memcard_status() {
    s32 var_r31;

    if (probe_card_slot__15TAdPlayerLoadGCFv(0) == 0) {
        *(s32 *)((s8 *)this + 0x2C) = 0;
        return 1;
    }
    if (probe_and_check_card__15TAdPlayerLoadGCFv(0) == 0) {
        *(s32 *)((s8 *)this + 0x2C) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        *(s32 *)((s8 *)this + 0x24) = (s32) (*(s32 *)((s8 *)this + 0x24) + 1);
        *(s32 *)((s8 *)this + 0x2C) = 0;
        return 2;
    }
    *(s32 *)((s8 *)this + 0x24) = 0;
    if (check_memcard_status__15TAdPlayerLoadGCFl(0) != 0) {
        *(s32 *)((s8 *)this + 0x2C) = 0;
        return 8;
    }
    if ((s32) *(s32 *)((s8 *)this + 0x2C) != 0) {
        return *(s32 *)((s8 *)this + 0x28);
    }
    *(s32 *)((s8 *)this + 0x2C) = 1;
    var_r31 = fn_8033BAB4(this);
    if ((s32) *(s32 *)((s8 *)this + 0x1C) != 0) {
        if (TAdSinglePlyChrSelectGC__sub_8033BA84(0) == 0) {
            var_r31 |= 0x10;
        }
    } else if (has_no_save_files__23TAdSinglePlyChrSelectGCFv(0) == 0) {
        var_r31 |= 0x10;
    }
    return var_r31;
}

}
