#ifndef PSO_MISC_TUNK_804CCB28_H
#define PSO_MISC_TUNK_804CCB28_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCB28 : public TObject {
public:
    virtual ~TUnk_804CCB28();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x48];
};
typedef char TUnk_804CCB28_size[sizeof(TUnk_804CCB28) == 0x64 ? 1 : -1];

#endif
