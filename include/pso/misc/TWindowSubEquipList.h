#ifndef PSO_MISC_TWINDOWSUBEQUIPLIST_H
#define PSO_MISC_TWINDOWSUBEQUIPLIST_H

#include "types.h"
#include "pso/misc/TUnk_804D0618.h"

struct TWindowSubEquipList : public TUnk_804D0618 {
    virtual ~TWindowSubEquipList();
    void run_task();};

typedef char TWindowSubEquipList_size[sizeof(TWindowSubEquipList) == 0x88 ? 1 : -1];
#endif
