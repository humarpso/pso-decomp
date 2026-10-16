#ifndef PSO_UI_TADPLYPLTANIMCTRLGC_H
#define PSO_UI_TADPLYPLTANIMCTRLGC_H

#include "types.h"
#include "pso/TObject.h"

struct TAdPlyPltAnimCtrlGC : public TObject {
    virtual ~TAdPlyPltAnimCtrlGC();
    u32 m_1c;
    u32 m_20;
    void* m_24;
    static void render(void *self);
    void init(void* a1);
    void run_task();
    static u32 get_instance(s32 arg0);
    static int get_table_value(int a0);
    void set_anim_state(s32 arg1);
    u8 unk_28[0x4];
};

typedef char TAdPlyPltAnimCtrlGC_size[sizeof(TAdPlyPltAnimCtrlGC) == 0x2C ? 1 : -1];
#endif
