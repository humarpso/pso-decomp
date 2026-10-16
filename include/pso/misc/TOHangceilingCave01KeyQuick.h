#ifndef PSO_MISC_TOHANGCEILINGCAVE01KEYQUICK_H
#define PSO_MISC_TOHANGCEILINGCAVE01KEYQUICK_H

#include "types.h"
#include "pso/misc/TUnk_804B2578.h"

struct TOHangceilingCave01KeyQuick : public TUnk_804B2578 {
    virtual ~TOHangceilingCave01KeyQuick();
    u8 unk_35C[0x4];
};

typedef char TOHangceilingCave01KeyQuick_size[sizeof(TOHangceilingCave01KeyQuick) == 0x360 ? 1 : -1];
#endif
