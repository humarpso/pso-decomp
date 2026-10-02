#include "types.h"

extern "C" {
int TObjPlayer__sub_800112D4(void* a0 = 0, void* a1 = 0);

s32 obj_isState2_324();
s32 get_actor_level_index(void* p);

s32 check_can_act__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (obj_isState2_324() != 0) {
        return 0;
    }
    return TObjPlayer__sub_800112D4((void*)(arg0), (void*)(arg1));
}

}
