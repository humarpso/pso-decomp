#ifndef PSO_BOSS_TUNK_80484610_H
#define PSO_BOSS_TUNK_80484610_H
#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

class TUnk_80484610 : public TObjEnemyCustom {
public:
    virtual ~TUnk_80484610();
    virtual f32 vfunc_22(void *, f32);
    void load_params_from_table(s32);
    void run_state();
    void sub_800472D4();
    void reset_visual_state();
    void distribute_part_damage();
    virtual void vfunc_79();
    virtual void run_task();
    u8 unk_38C[0xE4];
    s32 m_470;
    u8 unk_474[0x8];
    s32 m_47c;
    u8 unk_480[0x4];
    f32 m_484;
    u8 unk_488[0x4];
    f32 m_48c;
    u8 unk_490[0x80];
};
typedef char TUnk_80484610_size[sizeof(TUnk_80484610) == 0x510 ? 1 : -1];

#endif
