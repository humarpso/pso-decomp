#ifndef PSO_UNK_TUNK_804CC870_H
#define PSO_UNK_TUNK_804CC870_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CC870 : public TObject {
public:
    virtual ~TUnk_804CC870();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x34];
};
typedef char TUnk_804CC870_size[sizeof(TUnk_804CC870) == 0x50 ? 1 : -1];

#endif
