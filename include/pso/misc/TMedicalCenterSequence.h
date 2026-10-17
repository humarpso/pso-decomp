#ifndef PSO_MISC_TMEDICALCENTERSEQUENCE_H
#define PSO_MISC_TMEDICALCENTERSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TMedicalCenterSequence : public TShopSequence {
    virtual ~TMedicalCenterSequence();
    virtual void close_window();
    virtual void restore_player_state();
    void vfunc_11();
    static void clear_window_slots();
    static void clear_slot_data();
    s32 open_greeting_window();
    void handle_confirm();
    void handle_window_result();
    void exec_heal();
    void show_declined();
    void show_already_healthy();
    s32 handle_window_input();
    u8 unk_1C[0x4];
    u32 m_20;
    u8 unk_24[0x8];
    s32 m_2c;
    u32 m_30;
    u8 unk_34[0x4];
    void show_fee_prompt();
};

typedef char TMedicalCenterSequence_size[sizeof(TMedicalCenterSequence) == 0x38 ? 1 : -1];
#endif
