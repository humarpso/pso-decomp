#ifndef PSO_MISC_TQUESTCOLCTRL_H
#define PSO_MISC_TQUESTCOLCTRL_H

#include "types.h"

struct TQuestColCtrl
{
    static void render();
    static void run_task();
    static u8 check_value_equals(s32 *arg0, s32 arg1);
    static void delete_by_param(s32 arg0);
    static void init();
};

#endif
