#include "types.h"
#include "pso/player/TUnk_804B6C24.h"
#include "pso/npc/TObjNpcEnemy.h"
struct Item_80189E3C { u8 pad[0x30]; s32 data[3]; };

struct Obj_80189E3C {
    u8 pad[0x68];
    f32 x68;
    u8 pad6c[0x84 - 0x6C];
    s32 data[3];
    u8 pad90[0x360 - 0x90];
    s32 x360;
};

extern "C" {
void TItem__sub_80101DB8(Item_80189E3C *);
void debug_printf_at(s32 id, const char *fmt, ...);
extern const char lbl_80444F00[];
extern const char lbl_80444F10[];
extern const char lbl_80444F20[];
extern const f32 lbl_805DBCF4;
void TUnk_804B6C24::debug_print_item_box_info() {
    Obj_80189E3C *self = (Obj_80189E3C *)this;
    Item_80189E3C item;
    if (this->scale > lbl_805DBCF4) {
        this->m_360 = 1;
    } else {
        this->m_360 = 0;
    }
    if (this->m_360 != 0) {
        TObjNpcEnemy::set_global_count(0xFFFFFF);
        debug_printf_at(0x13001C, lbl_80444F00);
    } else {
        TObjNpcEnemy::set_global_count(0xFF00FF);
        debug_printf_at(0x13001C, lbl_80444F10);
        debug_printf_at(0x130020, lbl_80444F20);
        item.data[0] = self->data[0];
        item.data[1] = self->data[1];
        item.data[2] = self->data[2];
        TItem__sub_80101DB8(&item);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

}
