#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItemData.h"

extern "C" {
u32 format_item_description(void *);
void text_builder_append(s32);
void text_builder_reset(void);
extern s32 lbl_805DCDE0;
void TWindowHelpItem::format_description_with_price() {
    text_builder_reset();
    text_builder_append(format_item_description(*(u8 * *)&this->m_68));
    text_builder_append((s32) &lbl_805DCDE0);
    text_builder_append(((TItemData *)(*(u8 * *)&this->m_68))->calc_buy_price());
}

}
