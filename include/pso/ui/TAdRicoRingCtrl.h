#ifndef PSO_UI_TADRICORINGCTRL_H
#define PSO_UI_TADRICORINGCTRL_H

#include "types.h"
#include "pso/TObject.h"

struct TAdRicoRingCtrl : public TObject {
    virtual ~TAdRicoRingCtrl();
    u32 m_1c;
    u32 m_20;
    void set_scale4(f32 farg0);
    static void *create(void *arg0);
    static void release_global_805D4A00();
    static void load_static_resource();
    void start_fade_all(f32 x);
    void run_task();
    void start_fade(f32 farg0);
    void start_anim(f32 farg0);
    u8 unk_24[0x8];
};

typedef char TAdRicoRingCtrl_size[sizeof(TAdRicoRingCtrl) == 0x2C ? 1 : -1];
#endif
