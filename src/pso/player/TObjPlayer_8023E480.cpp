#include "types.h"

extern "C" {

s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0);
int set_global_param__8TObjFishFi();

s32 notify_fish_if_valid__10TObjPlayerFUi(u32 arg0) {
    if (arg0 == 0U) {
        return 0;
    }
    set_global_param__8TObjFishFi();
    return 1;
}

}
