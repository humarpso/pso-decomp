#include "types.h"
#include "pso/misc/TWindowHelpItem.h"

extern "C" {
s32 calc_buy_price__9TItemDataFv(void *);
u32 format_item_description(void *);
void text_builder_append(s32);
void text_builder_reset(void);
extern s32 lbl_805DCDE0;
}

extern "C" {

void TWindowHelpItem::format_description_with_price() {
    u8 *arg0 = (u8 *)this;
    text_builder_reset();
    text_builder_append(format_item_description(*(u8 **)((s8 *)arg0 + 0x68)));
    text_builder_append((s32) &lbl_805DCDE0);
    text_builder_append(calc_buy_price__9TItemDataFv(*(u8 **)((s8 *)arg0 + 0x68)));
}

}
