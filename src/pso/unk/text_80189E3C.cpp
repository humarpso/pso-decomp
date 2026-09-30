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
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern const char lbl_80444F00[];
extern const char lbl_80444F10[];
extern const char lbl_80444F20[];
extern const f32 lbl_805DBCF4;
void fn_80189E3C(Obj_80189E3C *self);
}

extern "C" {

void fn_80189E3C(Obj_80189E3C *self) {
    Item_80189E3C item;
    if (self->x68 > lbl_805DBCF4) {
        self->x360 = 1;
    } else {
        self->x360 = 0;
    }
    if (self->x360 != 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_80444F00);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF00FF);
        TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_80444F10);
        TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80444F20);
        item.data[0] = self->data[0];
        item.data[1] = self->data[1];
        item.data[2] = self->data[2];
        TItem__sub_80101DB8(&item);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
