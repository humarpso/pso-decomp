#ifndef PSO_MISC_TUNK_804CCB28_H
#define PSO_MISC_TUNK_804CCB28_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804CCB28 : public TObject {
public:
    virtual ~TUnk_804CCB28();
    void spawn_rafoie_explosion_bursts();
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x18];
    f32 m_34;
    u8 unk_38[0x8];
    f32 m_40;
    u8 unk_44[0x14];
    s32 m_58;
    u8 unk_5C[0x4];
    s32 m_60;
};
typedef char TUnk_804CCB28_size[sizeof(TUnk_804CCB28) == 0x64 ? 1 : -1];

#endif
