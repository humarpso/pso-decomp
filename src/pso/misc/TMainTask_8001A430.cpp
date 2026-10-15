#include "types.h"

extern "C" {

s32 get_state_flag__9TMainTaskFv(void);

extern s32 some_main_task_flag;

s32 get_state_flag__9TMainTaskFv(void) {
    return some_main_task_flag;
}

}
