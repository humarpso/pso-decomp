#ifndef PSO_MISC_TSHOPEQUIPMENTSEQUENCE_H
#define PSO_MISC_TSHOPEQUIPMENTSEQUENCE_H

#include "types.h"
#include "pso/misc/TShopSequence.h"

struct TShopEquipmentSequence : public TShopSequence {
    virtual ~TShopEquipmentSequence();
    void vfunc_11();
    s32 handle_confirm();
    s32 close_if_done();
    void update_buy_sell_choice();
    s32 open_greeting();
    static void *create_instance(void *arg0);
    u8 unk_1C[0x1C];
    void open_sell_window();
    void open_buy_window();
};

typedef char TShopEquipmentSequence_size[sizeof(TShopEquipmentSequence) == 0x38 ? 1 : -1];
#endif
