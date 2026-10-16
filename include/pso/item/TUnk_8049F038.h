#ifndef PSO_ITEM_TUNK_8049F038_H
#define PSO_ITEM_TUNK_8049F038_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_8049F038 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_8049F038();
    virtual void*vfunc_9();
    virtual void run_task();
    u8 unk_AC[0x4];
    s32 m_b0;
    u8 unk_B4[0x2C];
};
typedef char TUnk_8049F038_size[sizeof(TUnk_8049F038) == 0xE0 ? 1 : -1];

#endif
