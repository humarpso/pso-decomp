#ifndef PSO_OBJECT_TBOSS6DEMO11_TYPE1_DEAD_H
#define PSO_OBJECT_TBOSS6DEMO11_TYPE1_DEAD_H
#include "types.h"
#include "pso/TObject.h"

class TBoss6Demo11_TYPE1_DEAD : public TObject {
public:
    virtual ~TBoss6Demo11_TYPE1_DEAD();
    void render_fade_model();
    void *destroy(s16);
    virtual void render();
    virtual void run_task();
    u8 unk_1C[0xC];
    void * m_28;
    u8 unk_2C[0x4];
    u32 m_30;
    u8 unk_34[0x4];
    s32 m_38;
    u8 unk_3C[0x4];
    f32 m_40;
    u8 unk_44[0x44];
    u8 * m_88;
    u8 unk_8C[0x4];
};
typedef char TBoss6Demo11_TYPE1_DEAD_size[sizeof(TBoss6Demo11_TYPE1_DEAD) == 0x90 ? 1 : -1];

#endif
