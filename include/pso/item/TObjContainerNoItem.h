#ifndef PSO_ITEM_TOBJCONTAINERNOITEM_H
#define PSO_ITEM_TOBJCONTAINERNOITEM_H

#include "types.h"
#include "pso/player/TUnk_804B6C24.h"

struct TObjContainerNoItem : public TUnk_804B6C24 {
    virtual ~TObjContainerNoItem();
    virtual void vfunc_81();
    virtual void vfunc_80();
    virtual void vfunc_79();
    virtual void vfunc_6(s16 *, s32);
    virtual f32 vfunc_22(void *, f32);
    static void *create(void *arg0);};

typedef char TObjContainerNoItem_size[sizeof(TObjContainerNoItem) == 0x368 ? 1 : -1];
#endif
