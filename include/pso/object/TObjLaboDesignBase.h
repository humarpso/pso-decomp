#ifndef PSO_OBJECT_TOBJLABODESIGNBASE_H
#define PSO_OBJECT_TOBJLABODESIGNBASE_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TObjLaboDesignBase : public TUnk_804AF8A0 {
    virtual ~TObjLaboDesignBase();
    void render();
    void run_task();
    u8 unk_AC[0x14];
};

typedef char TObjLaboDesignBase_size[sizeof(TObjLaboDesignBase) == 0xC0 ? 1 : -1];
#endif
