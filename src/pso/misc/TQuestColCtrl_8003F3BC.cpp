#include "types.h"

extern "C" {

    extern int boss3_volopt_cage_flag;
void clear_volopt_cage_flag(void) { boss3_volopt_cage_flag = 0; }

u8 check_value_equals__13TQuestColCtrlFPvi(s32 *arg0, s32 arg1) {
    return (u8) (*arg0 == arg1);
}

}
