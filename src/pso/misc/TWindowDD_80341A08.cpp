#include "types.h"

extern "C" {
s32 TWindowDD__sub_80341AC0(u8 *arg0);
s32 can_scroll__9TWindowDDFPvi(void *arg0, s32 arg1);
}

#define TWindowDD__sub_80341AC0 ((s32 (*)(void))TWindowDD__sub_80341AC0)

extern "C" {

s32 can_scroll__9TWindowDDFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r5;

    if (TWindowDD__sub_80341AC0() == 0) {
        return 0;
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x78);
    temp_r5 = temp_r4 / 2;
    if (arg1 > 0) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x6C);
        if (temp_r0 < temp_r5) {
            return 0;
        }
        return (*(s32 *)((s8 *)arg0 + 0x68) + (temp_r4 - temp_r0)) < *(s32 *)((s8 *)arg0 + 0x74);
    }
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x6C);
    if (temp_r3 >= temp_r5) {
        return 0;
    }
    return ((u32) (*(s32 *)((s8 *)arg0 + 0x68) - (temp_r3 + 1)) >> 0x1FU) ^ 1;
}

}

#undef TWindowDD__sub_80341AC0

#include "types.h"

extern "C" {
void TWindowDD__sub_80341AE0(u8 *arg0);
void TWindowDD__sub_80341AF8(u8 *arg0);
}

extern "C" {

s32 TWindowDD__sub_80341AC0(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 0x74) > *(s32 *)((s8 *)arg0 + 0x78);
}

void TWindowDD__sub_80341AE0(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) | 1);
    *(s32 *)((s8 *)arg0 + 0x8C) = 1;
}

void TWindowDD__sub_80341AF8(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) & 0xFFFFFFFE);
    *(s32 *)((s8 *)arg0 + 0x8C) = 1;
}

}

#include "types.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubStatusDisp.h"

#define TWindowDD__sub_80341AC0 ((s32 (*)(void *))TWindowDD__sub_80341AC0)
#define can_scroll__9TWindowDDFPvi ((s32 (*)(void *, s32))can_scroll__9TWindowDDFPvi)

struct RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50 {
    s32 value;
    u8 remaining[0x3C];
};

struct Elem_80341FFC {
    s16 *data;
    s32 count;
};

struct Win_80341FFC {
    u8 pad[0x70];
    s32 x70;
    s32 count;
    s32 max;
    s32 shown;
    s16 *buf;
};

struct Entry_80341FFC {
    u8 pad[0xC];
    f32 y;
};

extern "C" {
s16 TWindowDD__sub_8034214C(u8 *arg0);
s32 TWindowDD__sub_8034217C(u8 *arg0);
s32 update_window_entry_list(void *, void *);
s32 apply_both_choices__9TWindowDDFll(void *, int);
s32 sub_80342268__17TWindowDD_WS_WordFv();
extern const f32 TWindowDD__data_805DFB20;
extern const float TWindowDD__data_805DFCA8;
int TWindowDD__sub_80342158(u8 *arg0);
s32 init_window_layout_entries(void *, void *, int);
extern RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50 TWindowDD__data_804EFC50;
extern const f32 TWindowDD__data_805DFB20;
s16 *mem_alloc(int);
s32 get_array_entry__13TUnk_804CE018Fi(void * a0, s32 a1);
int refresh_status_display__9TWindowDDFv(void *);
int set_text_entry_string(void *, s32, int);
Elem_80341FFC *get_element_ptr__9TWindowDDFl(s32);
s32 TWindowDD__sub_80348B70(s32);
}

extern "C" {

void mem_free(void *);
s32 get_array_entry__13TUnk_804CE018Fi(void * a0 = 0, s32 a1 = 0);
s32 get_field_20__17TWindowSubComCardFv(void);

void TWindowDD::set_mode_2() { *(s32*)((char*)this + 0x64) = 2; }
void TWindowDD::reset_cursor() { *(s32*)((char*)this + 0x64) = 0; }

#pragma push
#pragma fp_contract on
void TWindowDD::handle_scroll_input() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r5;
    s32 var_r30;
    s32 var_r30_2;
    if (sub_80342268__17TWindowDD_WS_WordFv() != 0) {
        if (apply_both_choices__9TWindowDDFll((void *) (arg0 + 0x60), (int) (0x20)) != 0) {
            temp_r4 = *(s32 *)((s8 *)arg0 + 0x68);
            if (temp_r4 < (s32) (*(s32 *)((s8 *)arg0 + 0x74) - 1)) {
                temp_r3 = can_scroll__9TWindowDDFPvi(arg0, 1);
                switch (temp_r3) {
                case 0:
                    *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) + 1);
                    break;
                case 1:
                    *(f32 *)((s8 *)arg0 + 0x88) = (f32) (*(f32 *)((s8 *)arg0 + 0x88) + TWindowDD__data_805DFB20);
                    break;
                }
                add_scroll_offset((int)(1));
            } else {
                add_scroll_offset((int)(-temp_r4));
                *(s32 *)((s8 *)arg0 + 0x6C) = 0;
                *(f32 *)((s8 *)arg0 + 0x88) = (f32) (*(const f32 *)&TWindowDD__data_805DFCA8);
            }
        } else if (apply_both_choices__9TWindowDDFll((void *) (arg0 + 0x60), (int) (0x10)) != 0) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x68) > 0) {
                temp_r3_2 = can_scroll__9TWindowDDFPvi(arg0, -1);
                switch (temp_r3_2) {
                case 0:
                    *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x6C) - 1);
                    break;
                case 1:
                    *(f32 *)((s8 *)arg0 + 0x88) = (f32) (*(f32 *)((s8 *)arg0 + 0x88) - TWindowDD__data_805DFB20);
                    break;
                }
                add_scroll_offset((int)(-1));
            } else {
                *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x7C) - 1);
                add_scroll_offset((int)((*(s32 *)((s8 *)arg0 + 0x74) - *(s32 *)((s8 *)arg0 + 0x68)) - 1));
                *(f32 *)((s8 *)arg0 + 0x88) = (f32) (TWindowDD__data_805DFB20 * (f32) -(*(s32 *)((s8 *)arg0 + 0x68) - *(s32 *)((s8 *)arg0 + 0x6C)));
            }
        } else if ((apply_both_choices__9TWindowDDFll((void *) (arg0 + 0x60), (int) (0x10000)) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x68) < (s32) (*(s32 *)((s8 *)arg0 + 0x74) - 1))) {
            if (TWindowDD__sub_80341AC0(arg0) != 0) {
                temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x78);
                temp_r4_3 = temp_r4_2 - 1;
                temp_r5 = *(s32 *)((s8 *)arg0 + 0x68) + (temp_r4_2 - (*(s32 *)((s8 *)arg0 + 0x6C) + 1));
                temp_r3_3 = *(s32 *)((s8 *)arg0 + 0x74);
                var_r30 = temp_r4_3;
                if ((s32) (temp_r5 + temp_r4_3) >= temp_r3_3) {
                    var_r30 = (temp_r3_3 - temp_r5) - 1;
                }
                if (var_r30 <= 0) {
                    *(s32 *)((s8 *)arg0 + 0x6C) = temp_r4_3;
                    add_scroll_offset((int)((*(s32 *)((s8 *)arg0 + 0x74) - 1) - *(s32 *)((s8 *)arg0 + 0x68)));
                } else {
                    add_scroll_offset((int)(var_r30));
                    *(f32 *)((s8 *)arg0 + 0x88) = (f32) (((f32) var_r30 * TWindowDD__data_805DFB20) + *(f32 *)((s8 *)arg0 + 0x88));
                }
            } else {
                *(s32 *)((s8 *)arg0 + 0x6C) = (s32) (*(s32 *)((s8 *)arg0 + 0x74) - 1);
                add_scroll_offset((int)((*(s32 *)((s8 *)arg0 + 0x74) - 1) - *(s32 *)((s8 *)arg0 + 0x68)));
            }
        } else if ((apply_both_choices__9TWindowDDFll((void *) (arg0 + 0x60), (int) (0x20000)) != 0) && ((s32) *(s32 *)((s8 *)arg0 + 0x68) > 0)) {
            if (TWindowDD__sub_80341AC0(arg0) != 0) {
                var_r30_2 = *(s32 *)((s8 *)arg0 + 0x78) - 1;
                temp_r3_4 = *(s32 *)((s8 *)arg0 + 0x68) - *(s32 *)((s8 *)arg0 + 0x6C);
                if ((temp_r3_4 - var_r30_2) < 0) {
                    var_r30_2 = temp_r3_4;
                }
                if (var_r30_2 <= 0) {
                    *(s32 *)((s8 *)arg0 + 0x6C) = 0;
                    add_scroll_offset((int)(-*(s32 *)((s8 *)arg0 + 0x68)));
                } else {
                    add_scroll_offset((int)(-var_r30_2));
                    *(f32 *)((s8 *)arg0 + 0x88) = (f32) -(((f32) var_r30_2 * TWindowDD__data_805DFB20) - *(f32 *)((s8 *)arg0 + 0x88));
                }
            } else {
                *(s32 *)((s8 *)arg0 + 0x6C) = 0;
                add_scroll_offset((int)(-*(s32 *)((s8 *)arg0 + 0x68)));
            }
        }
    }
    ((TWindowDD *)arg0)->initialize_subwindow();
    ((TWindowSubComCard *)arg0)->update_fade();
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}
#pragma pop

void TWindowDD::init_and_mark_field8C() { init_layout_entries(); load_element_list(); *(int*)((char*)this + 0x8c) = 1; }

void TWindowDD::free_child() {
    if (*(void **)((s8 *)this + 0x80) != NULL) {
        mem_free(*(void **)((s8 *)this + 0x80));
        *(u32 *)((s8 *)this + 0x80) = 0;
    }
    ((TWindowSubStatusDisp *)((char *)this + 36))->destroy_all_items();
    *(u32 *)((s8 *)this + 0x74) = 0;
    *(u32 *)((s8 *)this + 0x7C) = 0;
}

void TWindowDD::init_child(void* a1) { free_child(); *(void**)((char*)this + 0x70) = a1; init_layout_entries(); load_element_list(); reset_fields(); *(int*)((char*)this + 0x8c) = 1; }

    extern const float TWindowDD__data_805DFCA8;

typedef char RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50_size[sizeof(RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50) == 0x40 ? 1 : -1];
void TWindowDD::init_layout_entries() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)(&TWindowDD__data_804EFC50.value) + 4) = (s32) *(s32 *)((s8 *)arg0 + 0x78);
    init_window_layout_entries((void *) (arg0 + 0x24), (void *) (&TWindowDD__data_804EFC50.value), (int) (*(s16 *)((s8 *)arg0 + 0x20)));
}

void TWindowDD::reset_fields() { *(float*)((char*)this + 0x88) = TWindowDD__data_805DFCA8; *(float*)((char*)this + 0x84) = TWindowDD__data_805DFCA8; *(int*)((char*)this + 0x68) = 0; *(int*)((char*)this + 0x6c) = 0; *(int*)((char*)this + 0x8c) = 1; }

extern s32 TWindowDD__data_805DFB50;

void TWindowDD::load_element_list() {
    Win_80341FFC *self = (Win_80341FFC *)this;
    Elem_80341FFC *e;
    s32 i;
    s32 n;
    Entry_80341FFC *ent;
    e = get_element_ptr__9TWindowDDFl(self->x70);
    if (e != NULL) {
        self->count = e->count;
        self->buf = mem_alloc(self->count * 2);
        for (i = 0; i < self->count; i++) {
            self->buf[i] = e->data[i];
        }
    } else {
        self->count = 0;
        self->buf = NULL;
    }
    n = self->count;
    if (self->max < n) {
        n = self->max;
    }
    self->shown = n;
    for (i = 0; i < self->shown; i++) {
        ent = (Entry_80341FFC *)get_array_entry__13TUnk_804CE018Fi(self, i);
        set_text_entry_string(ent, TWindowDD__sub_80348B70(self->buf[i]), 0xC0);
        ent->y = i * 20;
        refresh_status_display__9TWindowDDFv(ent);
    }
}

void TWindowDD::set_pos_and_data(f32 farg0) {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x30) = farg0;
    *(s32 *)((s8 *)arg0 + 0x50) = (s32) TWindowDD__data_805DFB50;
}

s32 TWindowDD::get_field_0x74() { return *(s32*)((char*)this + 0x74); }

s16 TWindowDD__sub_8034214C(u8 *arg0) {
    return (s16) *(s32 *)((s8 *)arg0 + 0x70);
}

int TWindowDD__sub_80342158(u8 *arg0) {
    u32 temp_r4;
    temp_r4 = *(u32 *)((s8 *)arg0 + 0x80);
    if (temp_r4 != 0U) {
        return *(s16 *)((s8 *)(temp_r4 + (*(s32 *)((s8 *)arg0 + 0x68) * 2)) + 0);
    }
    return 0x685;
}

s32 TWindowDD__sub_8034217C(u8 *arg0) {
    return *(s32 *)((s8 *)arg0 + 0x68) - *(s32 *)((s8 *)arg0 + 0x6C);
}

s32 TWindowDD::get_cursor_index() { return *(s32*)((char*)this + 0x6c); }
s32 TWindowDD::update_if_field28_set() {
    if ((u32) *(u32 *)((s8 *)this + 0x28) != 0U) {
        get_array_entry__13TUnk_804CE018Fi(this, *(s32 *)((s8 *)this + 0x6C));
        return get_field_20__17TWindowSubComCardFv();
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void TWindowDD::get_cursor_pos(u8 *arg1) {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg1 + 0) = (f32) *(f32 *)((s8 *)arg0 + 0x40);
    *(f32 *)((s8 *)arg1 + 4) = (f32) (((f32) *(s32 *)((s8 *)arg0 + 0x6C) * TWindowDD__data_805DFB20) + *(f32 *)((s8 *)arg0 + 0x44));
}
#pragma pop

s32 TWindowDD::get_field_68() { return *(s32*)((char*)this + 0x68); }
void TWindowDD::add_scroll_offset(int a1) { *(int*)((char*)this + 0x68) = (*(int*)((char*)this + 0x68) + a1); *(int*)((char*)this + 0x8c) = 1; TWindowDD::spawn_window(); }

}

#undef TWindowDD__sub_80341AC0
#undef can_scroll__9TWindowDDFPvi
