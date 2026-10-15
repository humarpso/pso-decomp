#include "types.h"

extern "C" {

void TObjNpcLappy__sub_8014B828(void);

extern u32 npc_lappy_cached_object;

void TObjNpcLappy__sub_8014B828(void) {
    if ((u32) npc_lappy_cached_object != 0U) {
        npc_lappy_cached_object = 0U;
    }
}

}
