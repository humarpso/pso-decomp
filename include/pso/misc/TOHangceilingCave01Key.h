#ifndef PSO_MISC_TOHANGCEILINGCAVE01KEY_H
#define PSO_MISC_TOHANGCEILINGCAVE01KEY_H

#include "types.h"
#include "pso/misc/TUnk_804B2578.h"

struct TOHangceilingCave01Key : public TUnk_804B2578 {
    virtual ~TOHangceilingCave01Key();
    u8 unk_35C[0x4];
};

typedef char TOHangceilingCave01Key_size[sizeof(TOHangceilingCave01Key) == 0x360 ? 1 : -1];
#endif
