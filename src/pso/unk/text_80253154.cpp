#include "types.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/item/TItemData.h"

extern "C" {
s32 format_item_description(u8 *item);
void text_builder_append(u8 *str);
void text_builder_reset(void);
extern s32 lbl_805DCDE0;
void TWindowHelpItem::format_description_with_price() {
    text_builder_reset();
    text_builder_append((u8 *)(format_item_description((u8 *)(*(u8 * *)&this->m_68))));
    text_builder_append((u8 *)&lbl_805DCDE0);
    text_builder_append((u8 *)(((TItemData *)(*(u8 * *)&this->m_68))->calc_buy_price()));
}

}
