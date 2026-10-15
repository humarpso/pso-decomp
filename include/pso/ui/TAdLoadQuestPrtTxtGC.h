#ifndef PSO_UI_TADLOADQUESTPRTTXTGC_H
#define PSO_UI_TADLOADQUESTPRTTXTGC_H

#include "types.h"

struct TAdLoadQuestPrtTxtGC
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x1FC];
    u32 m_220;
    u32 m_224;
    static void render();
    static void *create_particle(void *arg0, s32 arg1, s32 arg2);
    void run_task();
};

#endif
