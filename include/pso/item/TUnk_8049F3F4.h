#ifndef PSO_ITEM_TUNK_8049F3F4_H
#define PSO_ITEM_TUNK_8049F3F4_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8049F3F4 : public TObject {
public:
    virtual ~TUnk_8049F3F4();
    virtual void run_task();
    u8 unk_1C[0x28];
};
typedef char TUnk_8049F3F4_size[sizeof(TUnk_8049F3F4) == 0x44 ? 1 : -1];

#endif
