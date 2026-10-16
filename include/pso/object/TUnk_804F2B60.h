#ifndef PSO_OBJECT_TUNK_804F2B60_H
#define PSO_OBJECT_TUNK_804F2B60_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804F2B60 : public TObject {
public:
    virtual ~TUnk_804F2B60();
    virtual void run_task();
    u8 unk_1C[0x8];
};
typedef char TUnk_804F2B60_size[sizeof(TUnk_804F2B60) == 0x24 ? 1 : -1];

#endif
