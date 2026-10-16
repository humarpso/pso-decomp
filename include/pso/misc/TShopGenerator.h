#ifndef PSO_MISC_TSHOPGENERATOR_H
#define PSO_MISC_TSHOPGENERATOR_H

#include "types.h"
#include "pso/object/TObjMotion.h"

struct TShopGenerator : public TUnk_804B9870 {
    virtual ~TShopGenerator();
    virtual void run_task();
    u32 m_90;
    u32 m_94;
    static s32 is_no_service_active(void *self, s32 player);
    static void clear_slot_active(s32 arg0);
    static void run_fn_table_reverse();
    static void run_fn_table_forward();};

typedef char TShopGenerator_size[sizeof(TShopGenerator) == 0x98 ? 1 : -1];
#endif
