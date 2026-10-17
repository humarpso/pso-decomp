#include "types.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/misc/TQuestColCtrl_8003F3BC.h"
#include "pso/misc/TQuestColCtrl.h"

extern "C" {

    extern int boss3_volopt_cage_flag;
void clear_volopt_cage_flag(void) { boss3_volopt_cage_flag = 0; }

u8 TUnk_804B6C24::check_value_equals(s32 arg1) {
    s32 *arg0 = (s32 *)this;
    return (u8) (*arg0 == arg1);
}

}
