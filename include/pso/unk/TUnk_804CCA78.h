#ifndef PSO_UNK_TUNK_804CCA78_H
#define PSO_UNK_TUNK_804CCA78_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCA78 : public TObject {
public:
    virtual ~TUnk_804CCA78();
    virtual void run_task();
    u8 unk_1C[0xC];
};
typedef char TUnk_804CCA78_size[sizeof(TUnk_804CCA78) == 0x28 ? 1 : -1];

#endif
