#ifndef PSO_MISC_TSHOPEQUIPMENTSEQUENCE_H
#define PSO_MISC_TSHOPEQUIPMENTSEQUENCE_H

#include "types.h"

struct TShopEquipmentSequence
{
    void vfunc_11();
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    s32 handle_confirm();
    s32 close_if_done();
    void update_buy_sell_choice();
    s32 open_greeting();
    static void *create_instance(void *arg0);
};

#endif
