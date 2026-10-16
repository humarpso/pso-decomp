#ifndef PSO_ITEM_TUNK_804C4498_H
#define PSO_ITEM_TUNK_804C4498_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C4498 : public TObject {
public:
    virtual ~TUnk_804C4498();
    s32 reset_placement_search_ring();
    s32 step_placement_search();
    u8 unk_1C[0x38];
};

#endif
