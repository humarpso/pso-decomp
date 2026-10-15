#include "types.h"
#include "pso/TMainTask.h"

extern "C" {

extern s32 some_main_task_flag;

s32 TMainTask::get_state_flag() {
    return some_main_task_flag;
}

}
