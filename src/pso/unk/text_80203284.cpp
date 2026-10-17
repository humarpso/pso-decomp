#include "types.h"
struct Obj_80203284 { u8 pad[0x1c]; s32 state; };

extern "C" {
extern Obj_80203284 *challenge_task;
u8 fn_80203284(void);
u8 fn_80203284(void) {
    s32 r = 0;
    if (challenge_task != 0 && challenge_task->state == 2) r = 1;
    return r;
}

}
