#ifndef PSO_MISC_TLAZERFENCESW_H
#define PSO_MISC_TLAZERFENCESW_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TLazerFenceSw : public TOKey {
    virtual ~TLazerFenceSw();
    u8 _padF4[0x10];
    u32 m_104;
    u8 _pad108[0xC];
    u32 m_f8;
    void draw_laser_beam();
    void render();
    void run_task();
    void *create();
    static void load_resources();
    u8 unk_FC[0x1C];
};

typedef char TLazerFenceSw_size[sizeof(TLazerFenceSw) == 0x118 ? 1 : -1];
#endif
