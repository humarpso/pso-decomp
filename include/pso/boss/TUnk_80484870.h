#ifndef PSO_BOSS_TUNK_80484870_H
#define PSO_BOSS_TUNK_80484870_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_80484870 : public TObject {
public:
    TUnk_80484870(void *arg1, void *arg2);
    virtual ~TUnk_80484870();
    virtual void run_task();
    virtual void render();
    void *dt(s16);
    u8 unk_1C[0x4];
    s32 m_20;
    u8 unk_24[0x4];
};
typedef char TUnk_80484870_size[sizeof(TUnk_80484870) == 0x28 ? 1 : -1];

#endif
