#ifndef PSO_OBJECT_TOBJMISTCTRL_H
#define PSO_OBJECT_TOBJMISTCTRL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjMistCtrl : public TUnk_804B9870 {
    virtual ~TObjMistCtrl();
    void sub_802AF64C();
    void run_task();
    u8 unk_90[0x4];
};

typedef char TObjMistCtrl_size[sizeof(TObjMistCtrl) == 0x94 ? 1 : -1];
#endif
