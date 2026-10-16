#ifndef PSO_MISC_TUNK_804CCA90_H
#define PSO_MISC_TUNK_804CCA90_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCA90 : public TObject {
public:
    virtual ~TUnk_804CCA90();
    virtual void run_task();
    u8 unk_1C[0x14];
};
typedef char TUnk_804CCA90_size[sizeof(TUnk_804CCA90) == 0x30 ? 1 : -1];

#endif
