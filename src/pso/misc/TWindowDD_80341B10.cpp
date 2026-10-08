#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50 {
    M2C_UNK value;
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
void update_fade__17TWindowSubComCardFPv(void *);
void initialize_subwindow__9TWindowDDFPv(void *);
s32 can_scroll__9TWindowDDFPvi(void *, s32);
s32 TWindowDD__sub_80341AC0(void *);
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1);
M2C_UNK update_window_entry_list(void *, void *);
s32 apply_both_choices__9TWindowDDFii(void *, int);
s32 TWindowDD__sub_80342268();
extern const f32 TWindowDD__data_805DFB20;
extern const float TWindowDD__data_805DFCA8;
void handle_scroll_input__9TWindowDDFPv(u8 *arg0);
int TWindowDD__sub_80342158(u8 *arg0);
M2C_UNK init_window_layout_entries(void *, void *, int);
extern RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50 TWindowDD__data_804EFC50;
void TWindowDD__sub_80341F9C(u8 *arg0);
extern const f32 TWindowDD__data_805DFB20;
void TWindowDD__sub_803421D0(u8 *arg0, u8 *arg1);
s16 *alloc_buffer__11TOBoss4RockFPv(int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0, s32 a1);
int refresh_status_display__9TWindowDDFv(void *);
int set_text_entry_string(void *, s32, int);
Elem_80341FFC *get_element_ptr__9TWindowDDFi(s32);
s32 TWindowDD__sub_80348B70(s32);
void load_element_list__9TWindowDDFPv(Win_80341FFC *self);
}

extern "C" {

void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1);
void free_child__9TWindowDDFPv(void *arg0);
s32 get_cursor_index__9TWindowDDFPv(void* p);
s32 get_field_0x74__9TWindowDDFPv(void* p);
s32 get_field_68__9TWindowDDFPv(void* p);
void init_and_mark_field8C__9TWindowDDFPv(void* p);
void init_child__9TWindowDDFPvPv(void* p, void* a1);
void reset_cursor__9TWindowDDFPv(void* p);
void reset_fields__9TWindowDDFPv(void* a0);
void set_mode_2__9TWindowDDFPv(void* p);
void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0);
s32 update_if_field28_set__9TWindowDDFPv(void *arg0);
void destroy_all_items__20TWindowSubStatusDispFPv(void *);
void free__11TOBoss4RockFUi(void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s32 a1 = 0);
s32 get_field_20__17TWindowSubComCardFPv(void);
int spawn_window__9TWindowDDFv(void);

void set_mode_2__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 2; }
void reset_cursor__9TWindowDDFPv(void* p) { *(s32*)((char*)p + 0x64) = 0; }

#pragma push
#pragma fp_contract on
void handle_scroll_input__9TWindowDDFPv(u8 *arg0) {
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
    if (TWindowDD__sub_80342268() != 0) {
        if (apply_both_choices__9TWindowDDFii((void *) (arg0 + 0x60), (int) (0x20)) != 0) {
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x68);
            if (temp_r4 < (s32) (M2C_FIELD(arg0, s32 *, 0x74) - 1)) {
                temp_r3 = can_scroll__9TWindowDDFPvi(arg0, 1);
                switch (temp_r3) {
                case 0:
                    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) + 1);
                    break;
                case 1:
                    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x88) + TWindowDD__data_805DFB20);
                    break;
                }
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(1));
            } else {
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(-temp_r4));
                M2C_FIELD(arg0, s32 *, 0x6C) = 0;
                M2C_FIELD(arg0, f32 *, 0x88) = (f32) (*(const f32 *)&TWindowDD__data_805DFCA8);
            }
        } else if (apply_both_choices__9TWindowDDFii((void *) (arg0 + 0x60), (int) (0x10)) != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0) {
                temp_r3_2 = can_scroll__9TWindowDDFPvi(arg0, -1);
                switch (temp_r3_2) {
                case 0:
                    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x6C) - 1);
                    break;
                case 1:
                    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, f32 *, 0x88) - TWindowDD__data_805DFB20);
                    break;
                }
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(-1));
            } else {
                M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x7C) - 1);
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)((M2C_FIELD(arg0, s32 *, 0x74) - M2C_FIELD(arg0, s32 *, 0x68)) - 1));
                M2C_FIELD(arg0, f32 *, 0x88) = (f32) (TWindowDD__data_805DFB20 * (f32) -(M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x6C)));
            }
        } else if ((apply_both_choices__9TWindowDDFii((void *) (arg0 + 0x60), (int) (0x10000)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x68) < (s32) (M2C_FIELD(arg0, s32 *, 0x74) - 1))) {
            if (TWindowDD__sub_80341AC0(arg0) != 0) {
                temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x78);
                temp_r4_3 = temp_r4_2 - 1;
                temp_r5 = M2C_FIELD(arg0, s32 *, 0x68) + (temp_r4_2 - (M2C_FIELD(arg0, s32 *, 0x6C) + 1));
                temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x74);
                var_r30 = temp_r4_3;
                if ((s32) (temp_r5 + temp_r4_3) >= temp_r3_3) {
                    var_r30 = (temp_r3_3 - temp_r5) - 1;
                }
                if (var_r30 <= 0) {
                    M2C_FIELD(arg0, s32 *, 0x6C) = temp_r4_3;
                    add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)((M2C_FIELD(arg0, s32 *, 0x74) - 1) - M2C_FIELD(arg0, s32 *, 0x68)));
                } else {
                    add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(var_r30));
                    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (((f32) var_r30 * TWindowDD__data_805DFB20) + M2C_FIELD(arg0, f32 *, 0x88));
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x6C) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) - 1);
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)((M2C_FIELD(arg0, s32 *, 0x74) - 1) - M2C_FIELD(arg0, s32 *, 0x68)));
            }
        } else if ((apply_both_choices__9TWindowDDFii((void *) (arg0 + 0x60), (int) (0x20000)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0)) {
            if (TWindowDD__sub_80341AC0(arg0) != 0) {
                var_r30_2 = M2C_FIELD(arg0, s32 *, 0x78) - 1;
                temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x6C);
                if ((temp_r3_4 - var_r30_2) < 0) {
                    var_r30_2 = temp_r3_4;
                }
                if (var_r30_2 <= 0) {
                    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
                    add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(-M2C_FIELD(arg0, s32 *, 0x68)));
                } else {
                    add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(-var_r30_2));
                    M2C_FIELD(arg0, f32 *, 0x88) = (f32) -(((f32) var_r30_2 * TWindowDD__data_805DFB20) - M2C_FIELD(arg0, f32 *, 0x88));
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x6C) = 0;
                add_scroll_offset__9TWindowDDFPvi((void*)(arg0), (int)(-M2C_FIELD(arg0, s32 *, 0x68)));
            }
        }
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
}
#pragma pop

void init_and_mark_field8C__9TWindowDDFPv(void* p) { TWindowDD__sub_80341F9C((u8 *)(p)); load_element_list__9TWindowDDFPv((Win_80341FFC *)(p)); *(int*)((char*)p + 0x8c) = 1; }

void free_child__9TWindowDDFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0;
    }
    destroy_all_items__20TWindowSubStatusDispFPv((void *)((char *)arg0 + 36));
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    M2C_FIELD(arg0, u32 *, 0x7C) = 0;
}

void init_child__9TWindowDDFPvPv(void* p, void* a1) { free_child__9TWindowDDFPv((void *)(p)); *(void**)((char*)p + 0x70) = a1; TWindowDD__sub_80341F9C((u8 *)(p)); load_element_list__9TWindowDDFPv((Win_80341FFC *)(p)); reset_fields__9TWindowDDFPv((void*)(p)); *(int*)((char*)p + 0x8c) = 1; }

    extern const float TWindowDD__data_805DFCA8;

typedef char RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50_size[sizeof(RecoveredGlobal_80341F9C_TWindowDD__data_804EFC50) == 0x40 ? 1 : -1];
void TWindowDD__sub_80341F9C(u8 *arg0) {
    M2C_FIELD(&TWindowDD__data_804EFC50.value, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
    init_window_layout_entries((void *) (arg0 + 0x24), (void *) (&TWindowDD__data_804EFC50.value), (int) (M2C_FIELD(arg0, s16 *, 0x20)));
}

void reset_fields__9TWindowDDFPv(void* a0) { *(float*)((char*)a0 + 0x88) = TWindowDD__data_805DFCA8; *(float*)((char*)a0 + 0x84) = TWindowDD__data_805DFCA8; *(int*)((char*)a0 + 0x68) = 0; *(int*)((char*)a0 + 0x6c) = 0; *(int*)((char*)a0 + 0x8c) = 1; }

extern s32 TWindowDD__data_805DFB50;

void load_element_list__9TWindowDDFPv(Win_80341FFC *self) {
    Elem_80341FFC *e;
    s32 i;
    s32 n;
    Entry_80341FFC *ent;
    e = get_element_ptr__9TWindowDDFi(self->x70);
    if (e != NULL) {
        self->count = e->count;
        self->buf = alloc_buffer__11TOBoss4RockFPv(self->count * 2);
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
        ent = (Entry_80341FFC *)get_array_entry__20TWindowSubStatusDispFPvi(self, i);
        set_text_entry_string(ent, TWindowDD__sub_80348B70(self->buf[i]), 0xC0);
        ent->y = i * 20;
        refresh_status_display__9TWindowDDFv(ent);
    }
}

void set_pos_and_data__9TWindowDDFPvf(u8 *arg0, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
}

s32 get_field_0x74__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x74); }

s16 TWindowDD__sub_8034214C(u8 *arg0) {
    return (s16) M2C_FIELD(arg0, s32 *, 0x70);
}

int TWindowDD__sub_80342158(u8 *arg0) {
    u32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, u32 *, 0x80);
    if (temp_r4 != 0U) {
        return M2C_FIELD((temp_r4 + (M2C_FIELD(arg0, s32 *, 0x68) * 2)), s16 *, 0);
    }
    return 0x685;
}

s32 TWindowDD__sub_8034217C(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x68) - M2C_FIELD(arg0, s32 *, 0x6C);
}

s32 get_cursor_index__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x6c); }
s32 update_if_field28_set__9TWindowDDFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x6C));
        return get_field_20__17TWindowSubComCardFPv();
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void TWindowDD__sub_803421D0(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (((f32) M2C_FIELD(arg0, s32 *, 0x6C) * TWindowDD__data_805DFB20) + M2C_FIELD(arg0, f32 *, 0x44));
}
#pragma pop

s32 get_field_68__9TWindowDDFPv(void* p) { return *(s32*)((char*)p + 0x68); }
void add_scroll_offset__9TWindowDDFPvi(void* a0, int a1) { *(int*)((char*)a0 + 0x68) = (*(int*)((char*)a0 + 0x68) + a1); *(int*)((char*)a0 + 0x8c) = 1; spawn_window__9TWindowDDFv(); }

}
