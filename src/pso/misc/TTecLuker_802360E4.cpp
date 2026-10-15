#include "types.h"

extern "C" {

s32 is_parents_unqueued__9TTecLukerFUi(u32 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv();

s32 is_parents_unqueued__9TTecLukerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv()) {
        return 1;
    }
    return 0;
}

}
