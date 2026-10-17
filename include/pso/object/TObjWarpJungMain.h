#ifndef PSO_OBJECT_TOBJWARPJUNGMAIN_H
#define PSO_OBJECT_TOBJWARPJUNGMAIN_H

#include "types.h"
#include "pso/object/TObjAreaWarp.h"

struct TObjWarpJungMain : public TObjAreaWarp {
    virtual ~TObjWarpJungMain();
    virtual void vfunc_14();
    virtual void debug_print_area_num();
    virtual void confirm_area_transfer(s32);
    void render();
    void run_task();
    u8 unk_AC[0x18];
    f32 m_c4;
};

typedef char TObjWarpJungMain_size[sizeof(TObjWarpJungMain) == 0xC8 ? 1 : -1];
#endif
