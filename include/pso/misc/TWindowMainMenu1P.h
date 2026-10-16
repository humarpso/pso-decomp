#ifndef PSO_MISC_TWINDOWMAINMENU1P_H
#define PSO_MISC_TWINDOWMAINMENU1P_H

#include "types.h"
#include "pso/misc/TWindowMainMenu.h"

struct TWindowMainMenu1P : public TWindowMainMenu {
    virtual ~TWindowMainMenu1P();
    u8 m_60;
    u8 m_61;
    u8 _pad62[0x2];
    void* m_64;
    void update_backdrop_transition();
    void render();
    void run_task();
    void create_char_select_slot();
    u8 unk_4C[0x60];
};

typedef char TWindowMainMenu1P_size[sizeof(TWindowMainMenu1P) == 0xAC ? 1 : -1];
#endif
