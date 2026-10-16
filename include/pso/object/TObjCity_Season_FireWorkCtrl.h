#ifndef PSO_OBJECT_TOBJCITY_SEASON_FIREWORKCTRL_H
#define PSO_OBJECT_TOBJCITY_SEASON_FIREWORKCTRL_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjCity_Season_FireWorkCtrl : public TUnk_804B9870 {
    virtual ~TObjCity_Season_FireWorkCtrl();
    virtual void run_task();

    u8 unk_90[0x4];
};

typedef char TObjCity_Season_FireWorkCtrl_size[sizeof(TObjCity_Season_FireWorkCtrl) == 0x94 ? 1 : -1];
#endif
