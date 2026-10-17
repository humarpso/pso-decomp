#ifndef PSO_ITEM_TUNK_804C4480_H
#define PSO_ITEM_TUNK_804C4480_H
#include "types.h"
#include "pso/item/TUnk_804C4498.h"

class TUnk_804C4480 : public TUnk_804C4498 {
public:
    virtual ~TUnk_804C4480();
    virtual void run_task();
    void sub_801D5A70();
    u8 unk_54[0x4];
};
typedef char TUnk_804C4480_size[sizeof(TUnk_804C4480) == 0x58 ? 1 : -1];

#endif
