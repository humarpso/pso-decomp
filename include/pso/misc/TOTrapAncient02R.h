#ifndef PSO_MISC_TOTRAPANCIENT02R_H
#define PSO_MISC_TOTRAPANCIENT02R_H

#include "types.h"
#include "pso/misc/TOTrapAncient02.h"

struct TOTrapAncient02R : public TOTrapAncient02 {
    virtual ~TOTrapAncient02R();
    u32 m_35c;
    u32 m_360;
    u32 m_364;
    u32 m_368;
    void calc_trap_count();
    static void *create(void *arg0);};

typedef char TOTrapAncient02R_size[sizeof(TOTrapAncient02R) == 0x36C ? 1 : -1];
#endif
