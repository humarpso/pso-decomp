#ifndef PSO_BOSS_TOBJBOSS8PILLERCTRL_H
#define PSO_BOSS_TOBJBOSS8PILLERCTRL_H

#include "types.h"
#include "pso/TObject.h"

struct TObjBoss8PillerCtrl : public TObject {
    virtual ~TObjBoss8PillerCtrl();
    void* m_1c;
    u8 _pad20[0x8];
    u32 m_28;
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    static void render();};

typedef char TObjBoss8PillerCtrl_size[sizeof(TObjBoss8PillerCtrl) == 0x38 ? 1 : -1];
#endif
