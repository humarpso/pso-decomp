#ifndef PSO_MISC_TOBJENEME1GEE_NEEDLE_H
#define PSO_MISC_TOBJENEME1GEE_NEEDLE_H
#include "types.h"
#include "pso/misc/TNeedleShoot.h"

class TObjEneMe1Gee_NEEDLE : public TNeedleShoot {
public:
    virtual ~TObjEneMe1Gee_NEEDLE();
    virtual void render();
    virtual void run_task();
    u8 unk_BC[0x8];
};
typedef char TObjEneMe1Gee_NEEDLE_size[sizeof(TObjEneMe1Gee_NEEDLE) == 0xC4 ? 1 : -1];

#endif
