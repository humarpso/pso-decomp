#ifndef PSO_MISC_TWINDOWSUBCOMCARDLIST_H
#define PSO_MISC_TWINDOWSUBCOMCARDLIST_H

#include "types.h"
#include "pso/misc/TWindowMenu.h"

struct TWindowSubComCardList : public TWindowMenu {
    virtual ~TWindowSubComCardList();
    void set_flag70_bit100();
    void set_flag70_bit10();
    virtual void render();
    u32 m_8c;
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u8 m_9c;
    virtual void run_task();
    void init(int a1, int a2, int a3);
    u8 unk_9D[0x3];
};

typedef char TWindowSubComCardList_size[sizeof(TWindowSubComCardList) == 0xA0 ? 1 : -1];
#endif
