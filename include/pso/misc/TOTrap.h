#ifndef PSO_MISC_TOTRAP_H
#define PSO_MISC_TOTRAP_H

#include "types.h"
#include "pso/player/TUnk_804806E8.h"

struct TOTrap : public TUnk_804806E8 {
    virtual ~TOTrap();
    virtual void vfunc_79();
    virtual void vfunc_80();
    virtual void vfunc_81();
    virtual void vfunc_82();
    virtual s32 vfunc_83();
    virtual void vfunc_84();
    virtual void vfunc_85();
    virtual void vfunc_86();
    virtual f32 vfunc_87();
    virtual void vfunc_88();
    virtual void vfunc_89();
    virtual s32 vfunc_26(s32, s32);
    virtual void vfunc_6(s16 *, s32);
    virtual void vfunc_25(u8 *);
    virtual void run_task();
    f32 range;
    f32 dist;
    u16 player;
    u8 _pad33E[0x2];
    u32 m_340;
    static f32 scale_by_table_value(f32 farg0);
    virtual void render();
    f32 check_trigger_range(u32 arg1);
    f32 get_scale(u32 arg1);};

typedef char TOTrap_size[sizeof(TOTrap) == 0x344 ? 1 : -1];
#endif
