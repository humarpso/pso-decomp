#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct TWindowDD_803431C0 {
    u8 pad0[0x20];
    s32 depth;
    void *child[7];
    s32 ids[13];
    void *objs[5];
    s32 f88;
    s32 f8C;
    s32 f90;
    u8 pad94[0xB0 - 0x94];
    s32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    u8 padC0[0xC6 - 0xC0];
    s16 fC6;
};

typedef s32 M2C_UNK;
struct TWindowDD_8034330C {
    u8 pad0[0x20];
    s32 depth;
    u8 *child[7];
    s32 ids[13];
    void *objs[5];
    s32 f88;
    s32 f8C;
    s32 f90;
    u8 pad94[0xAC - 0x94];
    s32 fAC;
    s32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    u8 fC0[4];
    u8 fC4[4];
};

struct S_803435A0 { u8 *p; };

struct W_803435A0 { u8 pad[0x24]; S_803435A0 f24[1]; };

struct DD_803461CC {
    s16 count;
    s16 type;
    s16 ids[4];
};

struct List_803467CC {
    s16 *items;
    s32 count;
};

struct Buf_803467CC {
    s16 *a;
    s32 n4;
    s16 *b;
    s32 nC;
};

extern "C" {
M2C_UNK free_child__9TWindowDDFPv(int);
M2C_UNK apply_input__9TWindowDDFPvPv(int, int);
M2C_UNK update__9TWindowDDFPvi(int, int, int);
void TWindowDD__sub_803434F4(u8 *arg0);
s32 TWindowDD__sub_80342428(void *);
s32 handle_input__9TWindowDDFi(void *);
s32 enter_state_19__9TWindowDDFPv(void *);
s32 enter_state_18__9TWindowDDFPv(void *);
s32 enter_state_16__9TWindowDDFPv(void *);
s32 update_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342800(void *);
s32 update__9TWindowDDFi(void *);
s32 TWindowDD__sub_803429B0(void *);
s32 enter_state_9__9TWindowDDFPv(void *);
s32 update_dispatch__9TWindowDDFi(void *);
s32 update_layout__9TWindowDDFPv(void *);
s32 update_transition__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342D14(void *);
s32 update__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342ED0(void *);
void run_state__9TWindowDDFPv(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
s16 TWindowDD__sub_8034214C(int);
void TWindowDD__sub_803478DC(void *, int);
void TWindowDD__sub_80347980(void *);
s32 *get_entry__9TWindowDDFii(void *, s32);
void update__9TWindowDDFPvPv(void *, void *);
void pop_menu_level__9TWindowDDFPv(TWindowDD_803431C0 *arg0);
void set_pos_and_data__9TWindowDDFPvf(void *, f32);
void TWindowDD__sub_80347940(void *, int);
u8 *TWindowDD__sub_803479E4(void *);
void TWindowDD__sub_80347CC8(void *, void *);
void setup_entry__9TWindowDDFPvi(void *, s32);
s32 *get_entry__9TWindowDDFii(void *, s32);
void TWindowDD__sub_80347F48(void *);
void TWindowDD__sub_80347F68(void *, int);
void TWindowDD__sub_80347FA0(void *, int);
void TWindowDD__sub_80348DAC(void *);
extern const s32 TWindowDD__data_805DFB50;
extern const f32 TWindowDD__data_805DFB74;
extern const f32 lbl_805DFB7C;
extern const f32 lbl_805DFB80;
extern const f32 lbl_805DFB88;
extern const f32 TWindowDD__data_805DFBFC;
extern const f32 lbl_805DFC0C;
extern const f32 TWindowDD__data_805DFC10;
void apply_entry_layout__9TWindowDDFPv(TWindowDD_8034330C *arg0);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__data_805D6E30;
s16 TWindowDD__sub_8034435C(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__data_805D6E30;
s16 TWindowDD__sub_80344568(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__data_805D6E30;
s16 TWindowDD__sub_80344774(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__data_805D6E30;
s16 TWindowDD__sub_80346434(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
void set_pos_and_data__9TWindowDDFPvf(void *, f32);
M2C_UNK TWindowDD__sub_80346FE4();
M2C_UNK TWindowDD__sub_80347A4C(void *, int);
u8 *TWindowDD__sub_80347AD4(void *, M2C_UNK, s32);
void setup_entry__9TWindowDDFPvi(void *, s32);
M2C_UNK TWindowDD__sub_80347E04(void *, int);
s32 *get_entry__9TWindowDDFii(void *, s32);
void TWindowDD__sub_80347F48(void *);
void TWindowDD__sub_80347F68(void *, int);
void TWindowDD__sub_80347FA0(void *, int);
s32 dispatch_state__9TWindowDDFv(void *, int, int, int);
M2C_UNK reset_index__9TWindowDDFPv(void *);
extern const s32 TWindowDD__data_805DFB50;
extern const f32 TWindowDD__data_805DFB6C;
extern const f32 TWindowDD__data_805DFB74;
extern const f32 lbl_805DFB7C;
extern const f32 lbl_805DFB80;
extern const f32 lbl_805DFB90;
extern const f32 TWindowDD__data_805DFBFC;
extern const f32 lbl_805DFC0C;
extern const f32 TWindowDD__data_805DFC10;
void TWindowDD__sub_803435A0(u8 *arg0);
M2C_UNK TWindowDD__sub_8034734C(DD_803461CC *, char *, s32 *);
M2C_UNK TWindowDD__sub_8034740C(DD_803461CC *, char *, s32 *);
M2C_UNK TWindowDD__sub_80347474(DD_803461CC *, s32, char *, s32 *);
M2C_UNK append_prompt_newline__9TWindowDDFPvPv(char *, s32 *);
M2C_UNK maybe_scroll__9TWindowDDFPvPv(char *, s32 *);
M2C_UNK append_char__9TWindowDDFciPv(s32, char *, s32 *);
M2C_UNK TWindowDD__sub_8034886C(s32, char *, s32 *);
s32 format_entry_text__9TWindowDDFPvPv(DD_803461CC *arg0, char *arg1);
List_803467CC *get_element_ptr__9TWindowDDFi(s16);
List_803467CC *get_entry__9TWindowDDFi(s32, s16);
extern s32 TWindowDD__data_805D6E08;
extern u32 TWindowDD__data_805D6E1C;
void TWindowDD__sub_803467CC(u8 *arg0);
}

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void free_buffers__9TWindowDDFv(void);
s32 update_close_flag__9TWindowDDFPv(void *arg0);
void free_nodes_with_id__6TLobbyFUi(void*);
M2C_UNK TWindowDD__sub_80347EF4();
void TWindowDD__sub_80348520(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 classify_id__9TWindowDDFs();
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347EF4();
    if (classify_id__9TWindowDDFs() != 7) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
        return 1;
    }
    return 0;
}

extern M2C_UNK __vt__9TWindowDD[];

void pop_menu_level__9TWindowDDFPv(TWindowDD_803431C0 *arg0) {
    s32 *entry;
    void *child;
    get_entry__9TWindowDDFii(arg0, arg0->fB0);
    entry = get_entry__9TWindowDDFii(arg0, arg0->ids[arg0->depth]);
    TWindowDD__sub_80347980(arg0);
    if (*entry & 8) {
        TWindowDD__sub_803478DC(arg0, 0);
    } else if ((child = arg0->child[arg0->depth]) != NULL) {
        update__9TWindowDDFPvPv(arg0, child);
    }
    TWindowDD__sub_803478DC(arg0, 1);
    arg0->depth--;
    if (*entry & 4) {
        arg0->fBC--;
        if (arg0->fBC >= 0 && arg0->objs[arg0->fBC] != NULL) {
            queue_destruction__7TObjectFv(arg0->objs[arg0->fBC]);
            arg0->objs[arg0->fBC] = NULL;
        }
    }
    arg0->f90 = arg0->f8C;
    arg0->f8C = arg0->f88;
    arg0->f88 = TWindowDD__sub_8034214C((int) arg0->child[arg0->depth]);
    arg0->fB0 = arg0->ids[arg0->depth + 1];
    if (arg0->fB0 == 0xD) {
        arg0->fC6 = 4;
    }
}

void apply_entry_layout__9TWindowDDFPv(TWindowDD_8034330C *arg0) {
    s32 *prev;
    s32 *entry;
    u8 *w;
    u8 *child;
    s32 id;
    prev = get_entry__9TWindowDDFii(arg0, arg0->fB0);
    entry = get_entry__9TWindowDDFii(arg0, arg0->ids[arg0->depth]);
    w = TWindowDD__sub_803479E4(arg0);
    if (w != NULL) {
        if (*entry & 1) {
            M2C_FIELD(w, f32 *, 0x38) = lbl_805DFB7C;
            if (arg0->objs[3] != NULL) {
                M2C_FIELD(arg0->objs[3], f32 *, 0x30) = lbl_805DFC0C;
                M2C_FIELD(arg0->objs[3], s32 *, 0x50) = TWindowDD__data_805DFB50;
            }
        } else {
            M2C_FIELD(w, f32 *, 0x38) = TWindowDD__data_805DFB74;
            if (arg0->objs[3] != NULL) {
                M2C_FIELD(arg0->objs[3], f32 *, 0x30) = TWindowDD__data_805DFBFC;
                M2C_FIELD(arg0->objs[3], s32 *, 0x50) = TWindowDD__data_805DFB50;
            }
        }
    }
    child = arg0->child[arg0->depth];
    if (child != NULL) {
        if (*entry & 8) {
            TWindowDD__sub_80347940(arg0, 0);
            TWindowDD__sub_80347FA0(arg0, 1);
        } else if (*entry & 1) {
            set_pos_and_data__9TWindowDDFPvf(child, TWindowDD__data_805DFC10);
            M2C_FIELD(child, f32 *, 0x38) = lbl_805DFB88;
            TWindowDD__sub_80347F48(arg0);
        } else {
            set_pos_and_data__9TWindowDDFPvf(child, lbl_805DFB80);
            M2C_FIELD(child, f32 *, 0x38) = lbl_805DFB88;
            TWindowDD__sub_80347F68(arg0, 1);
        }
        if (*prev & 2) {
            TWindowDD__sub_80348DAC(arg0->fC4);
            TWindowDD__sub_80347CC8(arg0, arg0->fC4);
        }
    }
    TWindowDD__sub_80347940(arg0, 1);
    if (!(*entry & 2)) {
        TWindowDD__sub_80347FA0(arg0, 3);
    }
    if (*entry & 4) {
        if (arg0->fBC > 0) {
            TWindowDD__sub_80347FA0(arg0, arg0->fBC + 3);
        }
    }
    id = ((s16 *)entry)[2];
    if (id == -1) {
        TWindowDD__sub_80347FA0(arg0, 2);
    } else {
        setup_entry__9TWindowDDFPvi(arg0, id);
        TWindowDD__sub_80347F68(arg0, 2);
    }
    arg0->fAC = 2;
}

void TWindowDD__sub_803434F4(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    u8 *var_r5;
    var_r31 = (u8 *)(arg0);
    var_r3 = (u8 *)(var_r31 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    free_child__9TWindowDDFPv((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    apply_input__9TWindowDDFPvPv((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)(var_r31);
    var_r5 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    M2C_FIELD(var_r4, u8 **, 0x44) = var_r5;
    var_r4 = (u8 *)((void *) M2C_FIELD(var_r31, s32 *, 0x20));
    M2C_FIELD(var_r31, s32 *, 0x20) = (s32) (var_r4 + 1);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    update__9TWindowDDFPvi((int) (var_r3), (int) (var_r4), (int) (var_r5));
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB4));
    M2C_FIELD(var_r31, u8 **, 0xB0) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x8C));
    M2C_FIELD(var_r31, u8 **, 0x88) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x90));
    M2C_FIELD(var_r31, u8 **, 0x8C) = var_r3;
    M2C_FIELD(var_r31, u8 **, 0x90) = (unsigned char *) ((void *)-1);
}

void TWindowDD__sub_803435A0(u8 *arg0) {
    s32 *temp_r29;
    s32 *temp_r31;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3_5;
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    if ((temp_r0 == 0x14) || (temp_r0 == 0xC)) {
        TWindowDD__sub_80346FE4();
    }
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xB4) == 1 || M2C_FIELD(arg0, s32 *, 0xB4) == 2 || M2C_FIELD(arg0, s32 *, 0xB4) == 8 || M2C_FIELD(arg0, s32 *, 0xB4) == 0xF || M2C_FIELD(arg0, s32 *, 0xB4) == 0x11) {
        reset_index__9TWindowDDFPv((void *) (arg0 + 0xC4));
    }
    temp_r29 = get_entry__9TWindowDDFii(arg0, M2C_FIELD(arg0, s32 *, 0xB0));
    temp_r31 = get_entry__9TWindowDDFii(arg0, M2C_FIELD(arg0, s32 *, 0xB4));
    temp_r3 = arg0 + M2C_FIELD(arg0, s32 *, 0x20) * 4;
    temp_r3 = M2C_FIELD(temp_r3, u8 **, 0x24);
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, f32 *, 0x30) = (f32) lbl_805DFB90;
        M2C_FIELD(temp_r3, f32 *, 0x38) = (f32) TWindowDD__data_805DFB74;
        M2C_FIELD(temp_r3, s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
        if (*temp_r29 & 4) {
            temp_r4 = M2C_FIELD(arg0, s32 *, 0xBC);
            M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (temp_r4 + 1);
            TWindowDD__sub_80347E04((void *) (arg0), (int) (temp_r4));
        }
    }
    temp_r3_2 = TWindowDD__sub_80347AD4(arg0, 1, M2C_FIELD(arg0, s32 *, 0x8C));
    if (temp_r3_2 != NULL) {
        set_pos_and_data__9TWindowDDFPvf(temp_r3_2, TWindowDD__data_805DFB6C);
        if (M2C_FIELD(temp_r31, s32 *, 0) & 1) {
            M2C_FIELD(temp_r3_2, f32 *, 0x38) = (f32) lbl_805DFB7C;
            temp_r3_3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x80));
            if (temp_r3_3 != NULL) {
                M2C_FIELD(temp_r3_3, f32 *, 0x30) = (f32) lbl_805DFC0C;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
            }
        } else {
            M2C_FIELD(temp_r3_2, f32 *, 0x38) = (f32) TWindowDD__data_805DFB74;
            temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x80));
            if (temp_r3_4 != NULL) {
                M2C_FIELD(temp_r3_4, f32 *, 0x30) = (f32) TWindowDD__data_805DFBFC;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x80), s32 *, 0x50) = (s32) TWindowDD__data_805DFB50;
            }
        }
        if (M2C_FIELD(temp_r31, s32 *, 0) & 2) {
            TWindowDD__sub_80347A4C((void *) (arg0), (int) (temp_r3_2));
        }
    }
    temp_r3_5 = M2C_FIELD(temp_r31, s32 *, 0);
    if (!(temp_r3_5 & 8)) {
        if (temp_r3_5 & 1) {
            M2C_FIELD(arg0, s32 *, 0x90) = dispatch_state__9TWindowDDFv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xB4)), (int) (M2C_FIELD(arg0, s32 *, 0x8C)), (int) (0));
            if ((temp_r3 = TWindowDD__sub_80347AD4(arg0, 2, M2C_FIELD(arg0, s32 *, 0x90))) != NULL) {
                set_pos_and_data__9TWindowDDFPvf(temp_r3, TWindowDD__data_805DFC10);
            }
            TWindowDD__sub_80347F48((void *) (arg0));
        } else {
            M2C_FIELD(arg0, s32 *, 0x90) = dispatch_state__9TWindowDDFv((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0xB4)), (int) (M2C_FIELD(arg0, s32 *, 0x8C)), (int) (0));
            if ((temp_r3 = TWindowDD__sub_80347AD4(arg0, 2, M2C_FIELD(arg0, s32 *, 0x90))) != NULL) {
                set_pos_and_data__9TWindowDDFPvf(temp_r3, lbl_805DFB80);
            }
            TWindowDD__sub_80347F68((void *) (arg0), (int) (1));
        }
    } else {
        TWindowDD__sub_80347FA0((void *) (arg0), (int) (1));
    }
    if ((s16) M2C_FIELD(temp_r31, s16 *, 4) == -1) {
        TWindowDD__sub_80347FA0((void *) (arg0), (int) (2));
    } else {
        setup_entry__9TWindowDDFPvi((void *) (arg0), M2C_FIELD(temp_r31, s16 *, 4));
        TWindowDD__sub_80347F68((void *) (arg0), (int) (2));
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 1;
}

void run_state__9TWindowDDFPv(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80342ED0((void *) (arg0));
        return;
    case 1:
    case 2:
        update__9TWindowDDFPv((void *) (arg0));
        return;
    case 3:
        TWindowDD__sub_80342D14((void *) (arg0));
        return;
    case 5:
        update_transition__9TWindowDDFPv((void *) (arg0));
        return;
    case 6:
        update_layout__9TWindowDDFPv((void *) (arg0));
        return;
    case 7:
        update_dispatch__9TWindowDDFi((void *) (arg0));
        return;
    case 8:
        enter_state_9__9TWindowDDFPv((void *) (arg0));
        return;
    case 9:
        TWindowDD__sub_803429B0((void *) (arg0));
        return;
    case 12:
        update__9TWindowDDFi((void *) (arg0));
        return;
    case 13:
        TWindowDD__sub_80342800((void *) (arg0));
        return;
    case 14:
        update_state__9TWindowDDFPv((void *) (arg0));
        return;
    case 15:
        enter_state_16__9TWindowDDFPv((void *) (arg0));
        return;
    case 17:
        enter_state_18__9TWindowDDFPv((void *) (arg0));
        return;
    case 18:
        enter_state_19__9TWindowDDFPv((void *) (arg0));
        return;
    case 20:
        handle_input__9TWindowDDFi((void *) (arg0));
        return;
    case 10:
    case 11:
    case 16:
    case 19:
        TWindowDD__sub_80342428((void *) (arg0));
    default:
        return;
    }
}

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        TWindowDD__sub_80348520(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TWindowDD__data_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 TWindowDD__data_805D6E18;
extern u32 TWindowDD__data_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void free_buffers__9TWindowDDFv(void) {
    fn_8034AF18();
    if ((u32) TWindowDD__data_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E1C);
        TWindowDD__data_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E18);
        TWindowDD__data_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E0C);
        TWindowDD__data_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}
s16 TWindowDD__sub_8034435C(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s16 v;
    switch (arg1) {
    case 0:
        v = TWindowDD_read_indexed_value(TWindowDD__sub_80346DB8((s32)arg0), arg3);
        if (v == -0x1E) {
            switch (TWindowDD__sub_80348398(arg0)) {
            case 1:
                v = 0x10;
                break;
            case 0:
                v = 0xF;
                break;
            case 3:
                v = 0x12;
                break;
            case 2:
                v = 0x11;
                break;
            case 4:
                v = 0x13;
                break;
            case 5:
                v = 0x14;
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 6:
        v = -0x3C;
        break;
    case 3:
        v = TWindowDD_read_resolved_value(arg2, arg3);
        if (((s32 (*)(s16))TWindowDD__sub_80347858)(v) != 0) {
            if (v == 0x43) {
                v = -0x46;
            } else if (v == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        } else {
            v = -0x3C;
        }
        break;
    case 5:
        v = TWindowDD_read_indexed_value(0xE, arg3);
        break;
    case 12:
        {
            s16 t = TWindowDD_read_resolved_value(0xF9, arg3);
            if (t == 0x43) {
                v = -0x46;
            } else if (t == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        }
        break;
    case 13:
        if (TWindowDD_read_resolved_value(-0x50, arg3) == 0x2C8) {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
        }
        break;
    case 14:
        v = TWindowDD_read_indexed_value(0xF, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 15:
        v = -0x32;
        break;
    case 17:
        v = TWindowDD_read_indexed_value(0x11, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 18:
        v = -0x32;
        break;
    default:
        v = -1;
        break;
    }
    return v;
}
s16 TWindowDD__sub_80344568(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s16 v;
    switch (arg1) {
    case 0:
        v = TWindowDD_read_indexed_value(TWindowDD__sub_80346DB8((s32)arg0), arg3);
        if (v == -0x1E) {
            switch (TWindowDD__sub_80348398(arg0)) {
            case 1:
                v = 0x10;
                break;
            case 0:
                v = 0xF;
                break;
            case 3:
                v = 0x12;
                break;
            case 2:
                v = 0x11;
                break;
            case 4:
                v = 0x13;
                break;
            case 5:
                v = 0x14;
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 6:
        v = -0x3C;
        break;
    case 3:
        v = TWindowDD_read_resolved_value(arg2, arg3);
        if (((s32 (*)(s16))TWindowDD__sub_80347858)(v) != 0) {
            if (v == 0x43) {
                v = -0x46;
            } else if (v == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        } else {
            v = -0x3C;
        }
        break;
    case 5:
        v = TWindowDD_read_indexed_value(0xE, arg3);
        break;
    case 12:
        {
            s16 t = TWindowDD_read_resolved_value(0xF9, arg3);
            if (t == 0x43) {
                v = -0x46;
            } else if (t == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        }
        break;
    case 13:
        if (TWindowDD_read_resolved_value(-0x50, arg3) == 0x2C8) {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
        }
        break;
    case 14:
        v = TWindowDD_read_indexed_value(0xF, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 15:
        v = -0x32;
        break;
    case 17:
        v = TWindowDD_read_indexed_value(0x11, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 18:
        v = -0x32;
        break;
    default:
        v = -1;
        break;
    }
    return v;
}
s16 TWindowDD__sub_80344774(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s16 v;
    switch (arg1) {
    case 0:
        v = TWindowDD_read_indexed_value(TWindowDD__sub_80346DB8((s32)arg0), arg3);
        if (v == -0x1E) {
            switch (TWindowDD__sub_80348398(arg0)) {
            case 1:
                v = 0x10;
                break;
            case 0:
                v = 0xF;
                break;
            case 3:
                v = 0x12;
                break;
            case 2:
                v = 0x11;
                break;
            case 4:
                v = 0x13;
                break;
            case 5:
                v = 0x14;
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 6:
        v = -0x3C;
        break;
    case 3:
        v = TWindowDD_read_resolved_value(arg2, arg3);
        if (((s32 (*)(s16))TWindowDD__sub_80347858)(v) != 0) {
            if (v == 0x43) {
                v = -0x46;
            } else if (v == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        } else {
            v = -0x3C;
        }
        break;
    case 5:
        v = TWindowDD_read_indexed_value(0xE, arg3);
        break;
    case 12:
        {
            s16 t = TWindowDD_read_resolved_value(0xF9, arg3);
            if (t == 0x43) {
                v = -0x46;
            } else if (t == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        }
        break;
    case 13:
        if (TWindowDD_read_resolved_value(-0x50, arg3) == 0x2C8) {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
        }
        break;
    case 14:
        v = TWindowDD_read_indexed_value(0xF, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 15:
        v = -0x32;
        break;
    case 17:
        v = TWindowDD_read_indexed_value(0x11, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 18:
        v = -0x32;
        break;
    default:
        v = -1;
        break;
    }
    return v;
}

s32 format_entry_text__9TWindowDDFPvPv(DD_803461CC *arg0, char *arg1) {
    s32 pos;
    s32 n;
    pos = 0;
    n = arg0->count;
    if (n == 0) {
        arg1[0] = 0;
        return 1;
    }
    switch (arg0->type) {
    case 1:
        TWindowDD__sub_8034740C(arg0, arg1, &pos);
        break;
    case 2:
        if (n > 2) {
            n = 2;
        }
        {
        s32 i;
        for (i = 0; i < n; i++) {
            TWindowDD__sub_8034886C(arg0->ids[i], arg1, &pos);
        }
        }
        append_char__9TWindowDDFciPv(0x3F, arg1, &pos);
        if (arg0->count > 2) {
            append_prompt_newline__9TWindowDDFPvPv(arg1, &pos);
            TWindowDD__sub_8034886C(arg0->ids[2], arg1, &pos);
        }
        break;
    case 3:
        if (n > 3) {
            n = 3;
        }
        {
        s32 i;
        for (i = 0; i < n; i++) {
            if (i != 2) {
                maybe_scroll__9TWindowDDFPvPv(arg1, &pos);
            }
            TWindowDD__sub_80347474(arg0, arg0->ids[i], arg1, &pos);
        }
        }
        if (arg0->count > 3) {
            append_prompt_newline__9TWindowDDFPvPv(arg1, &pos);
            TWindowDD__sub_8034886C(arg0->ids[3], arg1, &pos);
        }
        break;
    case 4:
        if (n > 2) {
            TWindowDD__sub_80347474(arg0, arg0->ids[2], arg1, &pos);
        }
        if (n > 1) {
            maybe_scroll__9TWindowDDFPvPv(arg1, &pos);
            TWindowDD__sub_8034886C(arg0->ids[1], arg1, &pos);
        }
        if (n > 3) {
            TWindowDD__sub_8034886C(arg0->ids[3], arg1, &pos);
        }
        append_prompt_newline__9TWindowDDFPvPv(arg1, &pos);
        TWindowDD__sub_8034886C(arg0->ids[0], arg1, &pos);
        break;
    case 5:
        {
        s32 i;
        for (i = 0; i < n; i++) {
            if (i != 2) {
                maybe_scroll__9TWindowDDFPvPv(arg1, &pos);
            }
            TWindowDD__sub_80347474(arg0, arg0->ids[i], arg1, &pos);
        }
        }
        break;
    case 6:
        TWindowDD__sub_8034734C(arg0, arg1, &pos);
        break;
    }
    arg1[pos++] = 0;
    return pos;
}

s16 TWindowDD__sub_80346434(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s16 v;
    switch (arg1) {
    case 0:
        v = TWindowDD_read_indexed_value(TWindowDD__sub_80346DB8((s32)arg0), arg3);
        if (v == -0x1E) {
            switch (TWindowDD__sub_80348398(arg0)) {
            case 1:
                v = 0x10;
                break;
            case 0:
                v = 0xF;
                break;
            case 3:
                v = 0x12;
                break;
            case 2:
                v = 0x11;
                break;
            case 4:
                v = 0x13;
                break;
            case 5:
                v = 0x14;
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 6:
        v = -0x3C;
        break;
    case 3:
        v = TWindowDD_read_resolved_value(arg2, arg3);
        if (((s32 (*)(s16))TWindowDD__sub_80347858)(v) != 0) {
            if (v == 0x43) {
                v = -0x46;
            } else if (v == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        } else {
            v = -0x3C;
        }
        break;
    case 5:
        v = TWindowDD_read_indexed_value(0xE, arg3);
        break;
    case 12:
        {
            s16 t = TWindowDD_read_resolved_value(0xF9, arg3);
            if (t == 0x43) {
                v = -0x46;
            } else if (t == 0x44) {
                v = -0x5A;
            } else {
                v = -0x50;
            }
        }
        break;
    case 13:
        if (TWindowDD_read_resolved_value(-0x50, arg3) == 0x2C8) {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__data_805D6E30 + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
        }
        break;
    case 14:
        v = TWindowDD_read_indexed_value(0xF, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 15:
        v = -0x32;
        break;
    case 17:
        v = TWindowDD_read_indexed_value(0x11, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 18:
        v = -0x32;
        break;
    default:
        v = -1;
        break;
    }
    return v;
}
s32 TWindowDD__sub_80346640(u8 *arg0, u32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;
    s16 temp_r31;

    switch (arg1) {
    case 0:
        var_r31 = ((s16 (*)(s32, s32))TWindowDD_read_indexed_value)(TWindowDD__sub_80346DB8((s32) arg0), arg3);
        if (var_r31 == -0x1E) {
            switch (((int (*)(u8 *)) TWindowDD__sub_80348398)(arg0)) {
            case 1:
                var_r31 = 0x10;
                break;
            case 0:
                var_r31 = 0xF;
                break;
            case 3:
                var_r31 = 0x12;
                break;
            case 2:
                var_r31 = 0x11;
                break;
            case 4:
                var_r31 = 0x13;
                break;
            case 5:
                var_r31 = 0x14;
                break;
            }
        }
        break;
    case 1:
    case 2:
    case 6:
        var_r31 = -0x3C;
        break;
    case 3:
        temp_r31 = TWindowDD_read_resolved_value(arg2, arg3);
        if (((s32 (*)(s16)) TWindowDD__sub_80347858)(temp_r31) != 0) {
            var_r31 = ((s16 (*)(s32, s32))TWindowDD_read_indexed_value)(0xF, temp_r31 - 0x37);
        } else {
            var_r31 = -0x3C;
        }
        break;
    case 5:
        var_r31 = ((s16 (*)(s32, s32))TWindowDD_read_indexed_value)(0xE, arg3);
        break;
    case 7:
        var_r31 = ((s16 (*)(s32, s32))TWindowDD_read_indexed_value)(0xF, arg3);
        break;
    case 8:
        var_r31 = ((s16 (*)(s32, s32))TWindowDD_read_indexed_value)(0x10, *(s16 *)(arg0 + 0xFC) - 0x37);
        break;
    case 9:
        var_r31 = -0x32;
        break;
    case 10:
        if (TWindowDD_read_resolved_value(0x118, arg3) == 0x685) {
            var_r31 = -0x3C;
        } else {
            var_r31 = -1;
        }
        break;
    default:
        var_r31 = -1;
        break;
    }
    return var_r31;
}
#define BUF_803467CC ((Buf_803467CC *)TWindowDD__data_805D6E1C)
void TWindowDD__sub_803467CC(u8 *arg0) {
    s32 kind;
    s16 id;
    List_803467CC *sel;
    s32 idx;
    List_803467CC *entry;
    List_803467CC *extra;
    s32 n;
    s16 *a;
    s16 *b;
    s32 i;
    s32 j;
    switch (TWindowDD__data_805D6E08) {
    case 0:
        kind = 0x11;
        id = 0xE;
        break;
    default:
        kind = 0x12;
        id = 0xE;
        break;
    case 4:
        kind = 0x12;
        id = 0xE;
        break;
    case 2:
        kind = 0x12;
        id = 0xE;
        break;
    case 3:
        kind = 0x12;
        id = 0xE;
        break;
    }
    sel = NULL;
    idx = *(s16 *)(arg0 + 0x1C) - 0x7F;
    entry = get_entry__9TWindowDDFi(kind, *(s16 *)(arg0 + 0x1C));
    if (entry != NULL && idx >= 0 && idx < entry->count) {
        sel = get_element_ptr__9TWindowDDFi(entry->items[idx]);
    }
    extra = get_element_ptr__9TWindowDDFi(id);
    n = 0;
    a = BUF_803467CC->a;
    b = BUF_803467CC->b;
    if (sel != NULL) {
        for (i = 0; i < sel->count && n < 0x20; n++, i++) {
            a[n] = b[n] = sel->items[i];
        }
    }
    BUF_803467CC->nC = n;
    for (j = 0; j < extra->count && n < 0x20; j++, n++) {
        a[n] = extra->items[j];
    }
    BUF_803467CC->n4 = n;
}

}
