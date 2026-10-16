#ifndef PSO_MISC_TOMINEDISP_H
#define PSO_MISC_TOMINEDISP_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TOMineDisp : public TUnk_804B9870 {
    virtual ~TOMineDisp();
    virtual void run_task();
    u32 m_90;
    u8 _pad94[0x10];
    u32 m_a4;
    u16 m_a8;
    u8 unk_AA[0x2];
    void draw();
};

typedef char TOMineDisp_size[sizeof(TOMineDisp) == 0xAC ? 1 : -1];
#endif
