#ifndef PSO_MISC_TSHOPITEMTECSEQUENCE_H
#define PSO_MISC_TSHOPITEMTECSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TShopItemTecSequence : public TShopSequence {
    virtual ~TShopItemTecSequence();
    virtual void vfunc_11();
    u8 unk_1C[0x4];
    u32 m_20;
    u8 unk_24[0x8];
    s32 m_2c;
    u8 unk_30[0x4];
    s32 m_34;
    s32 handle_select();
    s32 close_if_done();
    void open_sell_window();
    void open_item_list_window();
    void update_buy_sell_choice();
    s32 open_greeting();
};

typedef char TShopItemTecSequence_size[sizeof(TShopItemTecSequence) == 0x38 ? 1 : -1];
#endif
