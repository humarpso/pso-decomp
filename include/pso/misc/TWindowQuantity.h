#ifndef PSO_MISC_TWINDOWQUANTITY_H
#define PSO_MISC_TWINDOWQUANTITY_H

#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

struct TWindowQuantity : public TUnk_804CE018 {
    virtual ~TWindowQuantity();
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x3C];
    void* m_64;
    void set_position(s32 arg1);
    void run_task();
    u8 unk_68[0x4];
};

typedef char TWindowQuantity_size[sizeof(TWindowQuantity) == 0x6C ? 1 : -1];
#endif
