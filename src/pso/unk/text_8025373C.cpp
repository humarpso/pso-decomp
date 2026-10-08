#include "types.h"
struct Base_8025373C { char pad[4]; };

struct VEntry_8025373C : Base_8025373C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

struct Entry_8025373C {
    u8 pad0[4];
    void *vt;
    u8 pad8[0x20 - 0x8];
    s32 value;
    f32 timer;
};

struct Mag_8025373C {
    u8 data[16];
};

extern "C" {
void initialize_mag_data__9TItemDataFPv(Mag_8025373C *);
void deserialize_mag__9TItemDataFPvPv(s32, Mag_8025373C *);
s16 get_mag_mind_level__9TItemDataFPv(Mag_8025373C *);
s16 get_stat_percent__9TItemDataFPv(Mag_8025373C *);
s16 get_level__9TItemDataFPv(Mag_8025373C *);
s16 get_percent__9TItemDataFPv(Mag_8025373C *);
Entry_8025373C *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void clear_visible_flag__20TWindowSubStatusDispFPv(Entry_8025373C *);
void set_flag0_bit2__15TWindowHelpItemFPv(Entry_8025373C *);
void update_mag_status_gauges__9TItemDataFPv(void *);
s32 TWindowHelpItem__sub_80255DDC(Entry_8025373C *);
void set_flag4_and_field1c__15TWindowHelpItemFPvi(Entry_8025373C *, s32);
extern const f32 TWindowHelpItem__data_805DCDE4;
s32 fn_8025373C(u8 *self);
}

extern "C" {

s32 fn_8025373C(u8 *self) {
    Mag_8025373C mag;
    Entry_8025373C *help;
    Entry_8025373C *panel;
    Entry_8025373C *bar;
    Entry_8025373C *num;
    s32 count;
    initialize_mag_data__9TItemDataFPv(&mag);
    deserialize_mag__9TItemDataFPvPv(*(s32 *)(self + 0x68), &mag);
    help = get_array_entry__20TWindowSubStatusDispFPvi(self, 0);
    panel = get_array_entry__20TWindowSubStatusDispFPvi(self, 0xF);
    count = TWindowHelpItem__sub_80255DDC(help);
    num = get_array_entry__20TWindowSubStatusDispFPvi(self, 4);
    bar = get_array_entry__20TWindowSubStatusDispFPvi(self, 5);
    if (num->value < get_stat_percent__9TItemDataFPv(&mag)) {
        num->value++;
        bar->timer = TWindowHelpItem__data_805DCDE4;
        count++;
        ((VEntry_8025373C *)bar)->m3();
    }
    num = get_array_entry__20TWindowSubStatusDispFPvi(self, 7);
    bar = get_array_entry__20TWindowSubStatusDispFPvi(self, 8);
    if (num->value < get_percent__9TItemDataFPv(&mag)) {
        num->value++;
        count++;
        bar->timer = TWindowHelpItem__data_805DCDE4;
        ((VEntry_8025373C *)bar)->m3();
    }
    num = get_array_entry__20TWindowSubStatusDispFPvi(self, 0xA);
    bar = get_array_entry__20TWindowSubStatusDispFPvi(self, 0xB);
    if (num->value < get_level__9TItemDataFPv(&mag)) {
        num->value++;
        bar->timer = TWindowHelpItem__data_805DCDE4;
        count++;
        ((VEntry_8025373C *)bar)->m3();
    }
    num = get_array_entry__20TWindowSubStatusDispFPvi(self, 0xD);
    bar = get_array_entry__20TWindowSubStatusDispFPvi(self, 0xE);
    if (num->value < get_mag_mind_level__9TItemDataFPv(&mag)) {
        num->value++;
        bar->timer = TWindowHelpItem__data_805DCDE4;
        count++;
        ((VEntry_8025373C *)bar)->m3();
    }
    update_mag_status_gauges__9TItemDataFPv(self);
    if (count != TWindowHelpItem__sub_80255DDC(help)) {
        set_flag4_and_field1c__15TWindowHelpItemFPvi(help, count);
        set_flag0_bit2__15TWindowHelpItemFPv(help);
        clear_visible_flag__20TWindowSubStatusDispFPv(panel);
        return 1;
    }
    return 0;
}

}
