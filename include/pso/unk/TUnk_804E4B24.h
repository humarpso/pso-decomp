#ifndef PSO_UNK_TUNK_804E4B24_H
#define PSO_UNK_TUNK_804E4B24_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E4B24 : public TObject {
public:
    virtual ~TUnk_804E4B24();
    virtual void run_task();
    u8 unk_1C[0x5C];
};
typedef char TUnk_804E4B24_size[sizeof(TUnk_804E4B24) == 0x78 ? 1 : -1];

#endif
