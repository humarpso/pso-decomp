#ifndef PSO_UI_TADAGREEMENTBASEGC_H
#define PSO_UI_TADAGREEMENTBASEGC_H

#include "types.h"

struct TAdAgreementBaseGC
{
    u32 m_1c;
    u8 _pad20[0x4];
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    static void check_main_task_state(void *self);
    static void draw_agreement_text();
    static void create_agreement_callback();
    void update_state();
};

#endif
