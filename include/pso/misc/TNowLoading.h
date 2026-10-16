#ifndef PSO_MISC_TNOWLOADING_H
#define PSO_MISC_TNOWLOADING_H

#include "types.h"
#include "pso/TObject.h"

struct TNowLoading : public TObject {
    virtual ~TNowLoading();
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void* m_2c;
    virtual void render();
    virtual void run_task();
    void copy_pos(void* q);
    u8 unk_30[0x4];
    f32 m_34;
    u8 unk_38[0x4];
};

typedef char TNowLoading_size[sizeof(TNowLoading) == 0x3C ? 1 : -1];
#endif
