#include "types.h"
#include "pso/misc/TTecLuker.h"

extern "C" {

s32 all_parents_unqueued_for_destruction__7TObjectFv();

s32 TTecLuker::is_parents_unqueued(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv()) {
        return 1;
    }
    return 0;
}

}
