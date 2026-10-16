#ifndef PSO_MISC_TOHANGCEILINGCAVE01NORMAL_H
#define PSO_MISC_TOHANGCEILINGCAVE01NORMAL_H

#include "types.h"
#include "pso/misc/TUnk_804B2578.h"

struct TOHangceilingCave01Normal : public TUnk_804B2578 {
    virtual ~TOHangceilingCave01Normal();
    u8 unk_35C[0x4];
};

typedef char TOHangceilingCave01Normal_size[sizeof(TOHangceilingCave01Normal) == 0x360 ? 1 : -1];
#endif
