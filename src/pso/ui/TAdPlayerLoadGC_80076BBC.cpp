#include "types.h"

extern "C" {

s32 get_instance__15TAdPlayerLoadGCFv(void);

extern s32 card_load_sequence_state;

s32 get_instance__15TAdPlayerLoadGCFv(void) {
    return card_load_sequence_state;
}

}
