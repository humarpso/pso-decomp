#ifndef PSO_ITEM_TITEMEFFPG_H
#define PSO_ITEM_TITEMEFFPG_H

#include "types.h"
#include "pso/item/TUnk_804E355C.h"

struct TItemEffPG : public TUnk_804E355C {
    virtual ~TItemEffPG();
    virtual s32 vfunc_7();
    u8 unk_C4[0x4];
    f32 m_c8;
    u8 unk_CC[0x4];
    u32 m_d0;
    void *init_fields(s32 _w1, void * _w2);
    u8 *create();
    void *destroy(s16 arg1);
    virtual void run_task();
    static void create(void *arg0, void *arg1);
    void*init_params();};

typedef char TItemEffPG_size[sizeof(TItemEffPG) == 0xD4 ? 1 : -1];
#endif
