#ifndef PSO_MISC_TUNK_804B8DD0_H
#define PSO_MISC_TUNK_804B8DD0_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804B8DD0 : public TObject {
public:
    virtual ~TUnk_804B8DD0();
    void update_effects();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0xC];
    s32 m_28;
    u8 unk_2C[0x4];
    s32 m_30;
    u8 unk_34[0x4];
    s32 m_38;
    u8 unk_3C[0x4];
    s32 m_40;
};
typedef char TUnk_804B8DD0_size[sizeof(TUnk_804B8DD0) == 0x44 ? 1 : -1];

#endif
