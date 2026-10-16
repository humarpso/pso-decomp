#ifndef PSO_ITEM_TUNK_8049FEB8_H
#define PSO_ITEM_TUNK_8049FEB8_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_8049FEB8 : public TObject {
public:
    virtual ~TUnk_8049FEB8();
    virtual void run_task();
    u8 unk_1C[0x2];
    s16 m_1e;
};
typedef char TUnk_8049FEB8_size[sizeof(TUnk_8049FEB8) == 0x20 ? 1 : -1];

#endif
