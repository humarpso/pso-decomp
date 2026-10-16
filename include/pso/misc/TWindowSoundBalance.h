#ifndef PSO_MISC_TWINDOWSOUNDBALANCE_H
#define PSO_MISC_TWINDOWSOUNDBALANCE_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowSoundBalance : public TUnk_804CE018 {
    virtual ~TWindowSoundBalance();
    int is_active();
    virtual void render();
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x38];
    u8 m_60;
    u8 m_61;
    u16 m_62;
    u16 m_64;
    void play_open_sound();
    void handle_lr_input();
    virtual void run_task();
    void apply_balance(void *arg1);
    void handle_cancel();
    u8 unk_66[0x2];
};

typedef char TWindowSoundBalance_size[sizeof(TWindowSoundBalance) == 0x68 ? 1 : -1];
#endif
