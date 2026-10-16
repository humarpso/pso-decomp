#ifndef PSO_MISC_TUNK_804C2298_H
#define PSO_MISC_TUNK_804C2298_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804C2298 : public TObject {
public:
    virtual ~TUnk_804C2298();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x14];
};
typedef char TUnk_804C2298_size[sizeof(TUnk_804C2298) == 0x30 ? 1 : -1];

#endif
