#include "types.h"
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
void set_global_count__12TObjNpcEnemyFl(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern const char lbl_80444F00[];
extern const char lbl_80444F10[];
extern const char lbl_80444F20[];
extern const f32 lbl_805DBCF4;
void debug_print_item_box_info(Obj_80189E3C *self);
}

extern "C" {

void debug_print_item_box_info(Obj_80189E3C *self) {
    Item_80189E3C item;
    if (self->x68 > lbl_805DBCF4) {
        self->x360 = 1;
    } else {
        self->x360 = 0;
    }
    if (self->x360 != 0) {
        set_global_count__12TObjNpcEnemyFl(0xFFFFFF);
        debug_printf_at(0x13001C, lbl_80444F00);
    } else {
        set_global_count__12TObjNpcEnemyFl(0xFF00FF);
        debug_printf_at(0x13001C, lbl_80444F10);
        debug_printf_at(0x130020, lbl_80444F20);
        item.data[0] = self->data[0];
        item.data[1] = self->data[1];
        item.data[2] = self->data[2];
        TItem__sub_80101DB8(&item);
    }
    set_global_count__12TObjNpcEnemyFl(0xF0F0F0FF);
}

}
