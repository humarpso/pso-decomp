#ifndef PSO_MISC_TUNK_804CE964_H
#define PSO_MISC_TUNK_804CE964_H
#include "types.h"
#include "pso/misc/TUnk_804CE018.h"

class TUnk_804CE964 : public TUnk_804CE018 {
public:
    virtual ~TUnk_804CE964();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x58];
};
typedef char TUnk_804CE964_size[sizeof(TUnk_804CE964) == 0x74 ? 1 : -1];

#endif
