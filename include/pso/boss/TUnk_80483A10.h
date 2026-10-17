#ifndef PSO_BOSS_TUNK_80483A10_H
#define PSO_BOSS_TUNK_80483A10_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TUnk_80483A10 : public TObjEnemyCustom {
public:
    virtual ~TUnk_80483A10();
    void load_entry_params_volopt(s32);
    void sub_80040894();
    s32 calc_hit_zone_index();
    void *destroy(s16);
    virtual s32 is_target_in_attack_range();
    virtual void render();
    virtual void run_task();
    u8 unk_38C[0x4];
    s32 m_390;
    u8 unk_394[0x4];
    s32 m_398;
    u8 unk_39C[0x2C];
    s32 m_3c8;
    u8 unk_3CC[0x8];
};
typedef char TUnk_80483A10_size[sizeof(TUnk_80483A10) == 0x3D4 ? 1 : -1];

#endif
