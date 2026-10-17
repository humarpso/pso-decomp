#ifndef PSO_MISC_TWINDOWSUBEQUIPKIND_H
#define PSO_MISC_TWINDOWSUBEQUIPKIND_H

#include "types.h"
#include "pso/misc/TUnk_804D0618.h"

struct TWindowSubEquipKind : public TUnk_804D0618 {
    virtual ~TWindowSubEquipKind();
    virtual void render();
    s16 m_88;
    s16 m_8a;
    virtual void run_task();
};

typedef char TWindowSubEquipKind_size[sizeof(TWindowSubEquipKind) == 0x8C ? 1 : -1];
extern "C" {
u8 *TWindowSubEquipKind__ct(u8 *arg0, s32 arg1, s16 arg2);
void *__dt__19TWindowSubEquipKindFv(void *arg0, s16 arg1);
void render__19TWindowSubEquipKindFv(u8 *arg0);
}

#endif
