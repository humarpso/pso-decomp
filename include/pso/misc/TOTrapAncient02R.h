#ifndef PSO_MISC_TOTRAPANCIENT02R_H
#define PSO_MISC_TOTRAPANCIENT02R_H

#include "types.h"
#include "pso/misc/TOTrapAncient02.h"

struct TOTrapAncient02R : public TOTrapAncient02 {
    virtual ~TOTrapAncient02R();
    virtual s32 vfunc_27(void *, s32, f32);
    virtual s32 vfunc_26(s32, s32);
    virtual f32 vfunc_24(void *, void *);
    virtual f32 vfunc_23(void *, void *, void *, s32, s32);
    virtual f32 vfunc_22(void *, f32);
    virtual int vfunc_21(void *, void *, void *, float);
    virtual s32 vfunc_20(void *, f32);
    u32 m_35c;
    u32 m_360;
    u32 m_364;
    u32 m_368;
    void calc_trap_count();
    static void *create(void *arg0);};

typedef char TOTrapAncient02R_size[sizeof(TOTrapAncient02R) == 0x36C ? 1 : -1];
#endif
