#include "types.h"

extern "C" {
extern u8 item_light_interaction_blocked_flag;
bool is_item_light_interaction_blocked(void);
}

extern "C" {

bool is_item_light_interaction_blocked(void) {
    return (s8) item_light_interaction_blocked_flag != 0;
}

}
