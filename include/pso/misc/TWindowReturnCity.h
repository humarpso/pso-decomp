#ifndef PSO_MISC_TWINDOWRETURNCITY_H
#define PSO_MISC_TWINDOWRETURNCITY_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowReturnCity : public TObject {
    virtual ~TWindowReturnCity();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    s32 query_battle_state();
    virtual void render();
    virtual void run_task();
    static void clear_flag_bit5();};

typedef char TWindowReturnCity_size[sizeof(TWindowReturnCity) == 0x28 ? 1 : -1];
#endif
