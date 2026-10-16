#ifndef PSO_OBJECT_TOBJPATHOBJ_H
#define PSO_OBJECT_TOBJPATHOBJ_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjPathObj : public TUnk_804B9870 {
    virtual ~TObjPathObj();
    void render();
    void run_task();
    u8 unk_90[0x8];
};

typedef char TObjPathObj_size[sizeof(TObjPathObj) == 0x98 ? 1 : -1];
#endif
