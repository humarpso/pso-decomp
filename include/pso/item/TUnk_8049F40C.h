#ifndef PSO_ITEM_TUNK_8049F40C_H
#define PSO_ITEM_TUNK_8049F40C_H
#include "types.h"
#include "pso/item/TUnk_8049F42C.h"

class TUnk_8049F40C : public TUnk_8049F42C {
public:
    virtual ~TUnk_8049F40C();
    virtual void vfunc_3();
    s32 construct_with_vtable(void *, int, int);
    void *dt(s16);
    u8 unk_1C[0xC];
};

#endif
