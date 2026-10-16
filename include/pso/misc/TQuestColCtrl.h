#ifndef PSO_MISC_TQUESTCOLCTRL_H
#define PSO_MISC_TQUESTCOLCTRL_H

#include "types.h"
#include "pso/TObject.h"

struct TQuestColCtrl : public TObject {
    virtual ~TQuestColCtrl();
    virtual void render();
    virtual void run_task();
    static u8 check_value_equals(s32 *arg0, s32 arg1);
    static void delete_by_param(s32 arg0);
    static void init();};

typedef char TQuestColCtrl_size[sizeof(TQuestColCtrl) == 0x1C ? 1 : -1];
#endif
