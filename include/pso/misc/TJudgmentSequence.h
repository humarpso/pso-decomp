#ifndef PSO_MISC_TJUDGMENTSEQUENCE_H
#define PSO_MISC_TJUDGMENTSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TJudgmentSequence : public TShopSequence {
    virtual ~TJudgmentSequence();
    virtual void restore_player_state();
    void vfunc_11();
    void handle_close_input();
    void handle_confirm();
    void setup_counter_camera();
    static void *create(void *arg0);
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x10];
    void open_judgment_window();
};

typedef char TJudgmentSequence_size[sizeof(TJudgmentSequence) == 0x34 ? 1 : -1];
#endif
