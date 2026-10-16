#ifndef PSO_MISC_TWINDOWGETCOMCARD_H
#define PSO_MISC_TWINDOWGETCOMCARD_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowGetComCard : public TObject {
    virtual ~TWindowGetComCard();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    static void render();
    static void remove_entry(s32 arg0, s32 arg1, s32 arg2);
    static void construct_card_tags();};

typedef char TWindowGetComCard_size[sizeof(TWindowGetComCard) == 0x2C ? 1 : -1];
#endif
