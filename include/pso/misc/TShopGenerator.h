#ifndef PSO_MISC_TSHOPGENERATOR_H
#define PSO_MISC_TSHOPGENERATOR_H

#include "types.h"

struct TShopGenerator
{
    u8 _pad1C[0x68];
    u32 m_84;
    u8 _pad88[0x8];
    u32 m_90;
    u32 m_94;
    static s32 is_no_service_active(void *self, s32 player);
    static void clear_slot_active(s32 arg0);
    static void run_fn_table_reverse();
    static void run_fn_table_forward();
};

#endif
