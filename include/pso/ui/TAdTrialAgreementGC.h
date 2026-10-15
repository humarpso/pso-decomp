#ifndef PSO_UI_TADTRIALAGREEMENTGC_H
#define PSO_UI_TADTRIALAGREEMENTGC_H

#include "types.h"

struct TAdTrialAgreementGC
{
    u8 _pad1C[0x1C];
    u32 m_38;
    void render();
    static void wait_for_load();
    void run_task();
    static void draw_record_with_camera(s32 arg0, s32 arg1, s32 arg2);
    void update_title_prompt();
    void handle_cursor_input();
    void render_screen();
    void run_state();
};

#endif
