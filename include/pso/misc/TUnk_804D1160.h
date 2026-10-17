#ifndef PSO_MISC_TUNK_804D1160_H
#define PSO_MISC_TUNK_804D1160_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804D1160 : public TObject {
public:
    virtual ~TUnk_804D1160();
    void *destroy(s16);
    void update_customize_help_text(void *);
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x4];
    u32 m_28;
    u8 unk_2C[0x4];
    u32 m_30;
    u8 unk_34[0x4];
};
typedef char TUnk_804D1160_size[sizeof(TUnk_804D1160) == 0x38 ? 1 : -1];

#endif
