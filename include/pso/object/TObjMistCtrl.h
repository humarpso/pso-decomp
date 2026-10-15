#ifndef PSO_OBJECT_TOBJMISTCTRL_H
#define PSO_OBJECT_TOBJMISTCTRL_H

#include "types.h"

struct TObjMistCtrl
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    int run_task();
};

#endif
