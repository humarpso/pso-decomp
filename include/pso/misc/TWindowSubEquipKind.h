#ifndef PSO_MISC_TWINDOWSUBEQUIPKIND_H
#define PSO_MISC_TWINDOWSUBEQUIPKIND_H

#include "types.h"
#include "pso/misc/TUnk_804D0618.h"

struct TWindowSubEquipKind : public TUnk_804D0618 {
    virtual ~TWindowSubEquipKind();
    s16 m_88;
    s16 m_8a;
    void run_task();};

typedef char TWindowSubEquipKind_size[sizeof(TWindowSubEquipKind) == 0x8C ? 1 : -1];
#endif
