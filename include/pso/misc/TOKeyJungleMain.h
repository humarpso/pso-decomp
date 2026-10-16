#ifndef PSO_MISC_TOKEYJUNGLEMAIN_H
#define PSO_MISC_TOKEYJUNGLEMAIN_H

#include "types.h"
#include "pso/misc/TOKey.h"

struct TOKeyJungleMain : public TOKey {
    virtual ~TOKeyJungleMain();
    virtual void vfunc_17();
    virtual void vfunc_21();
    virtual void vfunc_26();
    virtual void vfunc_22();
    void render();
    static void init_key_slots(void* _w0);
    u8 unk_D8[0x18];
};

typedef char TOKeyJungleMain_size[sizeof(TOKeyJungleMain) == 0xF0 ? 1 : -1];
#endif
