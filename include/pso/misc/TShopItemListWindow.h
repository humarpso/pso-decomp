#ifndef PSO_MISC_TSHOPITEMLISTWINDOW_H
#define PSO_MISC_TSHOPITEMLISTWINDOW_H

#include "types.h"

struct TShopItemListWindow
{
    u8 _pad1C[0x4];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u8 _pad48[0x4];
    u32 m_4c;
    u32 m_50;
    u32 m_54;
    u8 _pad58[0x168];
    u32 m_1c0;
    s32 handle_confirm();
    s32 update();
    static s32 handle_tool_list_select(void *p);
    s32 check_purchase_eligibility();
    static void build_item_list(void *p);
};

#endif
