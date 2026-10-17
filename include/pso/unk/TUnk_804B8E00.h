#ifndef PSO_UNK_TUNK_804B8E00_H
#define PSO_UNK_TUNK_804B8E00_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804B8E00 : public TObject {
public:
    virtual ~TUnk_804B8E00();
    virtual void run_task();
    virtual void render();
    void *dt(s16);
    u8 unk_1C[0x4];
};
typedef char TUnk_804B8E00_size[sizeof(TUnk_804B8E00) == 0x20 ? 1 : -1];

#endif
