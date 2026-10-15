#ifndef PSO_MISC_TJUDGMENTSEQUENCE_H
#define PSO_MISC_TJUDGMENTSEQUENCE_H

#include "types.h"

struct TJudgmentSequence
{
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u32 m_30;
    void handle_close_input();
    void handle_confirm();
    void setup_counter_camera();
    static void *create(void *arg0);
};

#endif
