#ifndef PSO_ENEMY_TUNK_804909C4_H
#define PSO_ENEMY_TUNK_804909C4_H
#include "types.h"
#include "pso/object/TObjMotion.h"

class TUnk_804909C4 : public TUnk_804AF8A0 {
public:
    virtual ~TUnk_804909C4();
    virtual void run_task();
    u8 unk_AC[0x18];
    s32 m_c4;
    u8 unk_C8[0x8];
    void * m_d0;
};
typedef char TUnk_804909C4_size[sizeof(TUnk_804909C4) == 0xD4 ? 1 : -1];

#endif
