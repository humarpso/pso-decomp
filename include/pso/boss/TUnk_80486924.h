#ifndef PSO_BOSS_TUNK_80486924_H
#define PSO_BOSS_TUNK_80486924_H
#include "types.h"
#include "pso/enemy/TObjEnemy.h"

class TUnk_80486924 : public TObjEnemy {
public:
    virtual ~TUnk_80486924();
    virtual void vfunc_63();
    virtual void vfunc_50();
    virtual void vfunc_49();
    virtual void vfunc_48(s32);
    virtual void vfunc_47();
    virtual void vfunc_46();
    virtual void vfunc_45();
    virtual void vfunc_44();
    u8 unk_374[0xDC];
};

#endif
