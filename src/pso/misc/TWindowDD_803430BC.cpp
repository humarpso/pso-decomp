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

struct Pair_80344980 { s16 *list; s32 n; };

struct Sub_803438C4 { u8 pad[0x50]; u32 x50; };

struct Win_803438C4 {
    u8 pad0[0x1C];
    u8 input[4];
    s32 idx;
    Sub_803438C4 *subs[(0x7C - 0x24) / 4];
    u32 x7C;
    u32 x80;
    u8 pad84[0x94 - 0x84];
    s32 x94;
    u8 pad98[0xA8 - 0x98];
    s32 xA8;
    s32 xAC;
    s32 xB0;
    u8 padB4[0xB8 - 0xB4];
    s32 xB8;
    u8 padBC[0xC0 - 0xBC];
    void *xC0;
    s16 xC4;
    u8 padC6[0xE0 - 0xC6];
    s16 xE0;
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
s32 handle_confirm_input__9TWindowDDFPv(void *);
void run_state__9TWindowDDFPv(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
s16 TWindowDD__sub_8034214C(int);
void destroy_menu_entry__9TWindowDDFPvi(void *, int);
void TWindowDD__sub_80347980(void *);
s32 *get_entry__9TWindowDDFii(void *, s32);
void update__9TWindowDDFPvPv(void *, void *);
void pop_menu_level__9TWindowDDFPv(TWindowDD_803431C0 *arg0);
void set_pos_and_data__9TWindowDDFPvf(void *, f32);
void TWindowDD__sub_80347940(void *, int);
u8 *init_last_child__9TWindowDDFPv(void *);
void TWindowDD__sub_80347CC8(void *, void *);
void setup_entry__9TWindowDDFPvi(void *, s32);
s32 *get_entry__9TWindowDDFii(void *, s32);
void TWindowDD__sub_80347F48(void *);
void init_entry_field_64__9TWindowDDFii(void *, int);
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
extern u8 *TWindowDD__ws_data_table;
s16 TWindowDD__sub_8034435C(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__ws_data_table;
s16 TWindowDD__sub_80344568(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__ws_data_table;
s16 TWindowDD__sub_80344774(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
s32 TWindowDD__sub_80346DB8(s32 arg0);
s32 TWindowDD_read_indexed_value(s32, s32);
s16 TWindowDD_read_resolved_value(s32, s32);
u8 TWindowDD__sub_80347858(s16 arg0);
s32 TWindowDD__sub_80348398(u8 *arg0);
extern u8 *TWindowDD__ws_data_table;
s16 TWindowDD__sub_80346434(u8 *arg0, u32 arg1, s32 arg2, s32 arg3);
void set_pos_and_data__9TWindowDDFPvf(void *, f32);
M2C_UNK build_player_word_lists__9TWindowDDFv();
M2C_UNK TWindowDD__sub_80347A4C(void *, int);
u8 *TWindowDD__sub_80347AD4(void *, M2C_UNK, s32);
void setup_entry__9TWindowDDFPvi(void *, s32);
M2C_UNK TWindowDD__sub_80347E04(void *, int);
s32 *get_entry__9TWindowDDFii(void *, s32);
void TWindowDD__sub_80347F48(void *);
void init_entry_field_64__9TWindowDDFii(void *, int);
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
void build_item_list__9TWindowDDFPv(u8 *arg0);
M2C_UNK TWindowDD__sub_8034734C(DD_803461CC *, char *, s32 *);
M2C_UNK TWindowDD__sub_8034740C(DD_803461CC *, char *, s32 *);
M2C_UNK TWindowDD__sub_80347474(DD_803461CC *, s32, char *, s32 *);
M2C_UNK append_prompt_newline__9TWindowDDFPvPv(char *, s32 *);
M2C_UNK append_char__9TWindowDDFciPv(s32, char *, s32 *);
M2C_UNK TWindowDD__sub_8034886C(s32, char *, s32 *);
M2C_UNK TWindowDD__sub_80347758(DD_803461CC *, DD_803461CC *);
M2C_UNK TWindowDD__sub_803474CC(DD_803461CC *, s32, char *, char *, s32 *);
M2C_UNK append_string__9TWindowDDFiiPv(char *, char *, s32 *);
M2C_UNK show_message_by_count__9TWindowDDFii(char *, s32 *);
s32 get_player_battle_flag_state__9TWindowDDFUs(u16);
s32 clamp_range_2C9_552__9TWindowDDFs(s16);
s32 clamp_range_5FA_682__9TWindowDDFs(s16);
char fn_80228C54(char);
extern char **TWindowDD__data_805D6E28;
extern Pair_80344980 *TWindowDD__data_805D6E40;
extern Pair_80344980 *TWindowDD__data_805D6E44;
extern u8 *TWindowDD__data_805D6E48;
s32 format_message_text__9TWindowDDFPvPvUs(DD_803461CC *arg0, char *arg1, u16 arg2);
s32 apply_both_choices__9TWindowDDFii(void *, int);
s32 TWindowDD_check_input_mask(void *, int);
M2C_UNK TWindowDD__sub_803407F0(int, int);
s32 TWindowDD__sub_80340820(int);
M2C_UNK handle_input__9TWindowDDFPv(int);
M2C_UNK TWindowDD__sub_80340910(int);
M2C_UNK TWindowDD__sub_8034091C(int, int);
M2C_UNK TWindowDD__sub_80340E20(int, int);
M2C_UNK TWindowDD__sub_80341AE0(int);
M2C_UNK TWindowDD__sub_80341AF8(int);
s32 TWindowDD__sub_8034217C(int);
s32 get_cursor_index__9TWindowDDFPv(int);
void pop_menu_level__9TWindowDDFPv(TWindowDD_803431C0 *arg0);
void TWindowDD__sub_803434F4(u8 *arg0);
void run_state__9TWindowDDFPv(u8 *arg0);
M2C_UNK TWindowDD__sub_80343BC0(void *, void *);
void TWindowDD__sub_80347CC8(void *, void *);
M2C_UNK spawn_window__9TWindowDDFv();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK set_state__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803484C4(void *);
void run_task__9TWindowDDFv(u8 *arg0);
}

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void free_buffers__9TWindowDDFv(void);
s32 update_close_flag__9TWindowDDFPv(void *arg0);
void free_nodes_with_id__6TLobbyFUi(void*);
M2C_UNK get_current_child_index__9TWindowDDFPv();
void close_all_windows__9TWindowDDFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 classify_id__9TWindowDDFs();
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    get_current_child_index__9TWindowDDFPv();
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
        destroy_menu_entry__9TWindowDDFPvi(arg0, 0);
    } else if ((child = arg0->child[arg0->depth]) != NULL) {
        update__9TWindowDDFPvPv(arg0, child);
    }
    destroy_menu_entry__9TWindowDDFPvi(arg0, 1);
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
    w = init_last_child__9TWindowDDFPv(arg0);
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
            init_entry_field_64__9TWindowDDFii(arg0, 1);
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
        init_entry_field_64__9TWindowDDFii(arg0, 2);
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
        build_player_word_lists__9TWindowDDFv();
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
            init_entry_field_64__9TWindowDDFii((void *) (arg0), (int) (1));
        }
    } else {
        TWindowDD__sub_80347FA0((void *) (arg0), (int) (1));
    }
    if ((s16) M2C_FIELD(temp_r31, s16 *, 4) == -1) {
        TWindowDD__sub_80347FA0((void *) (arg0), (int) (2));
    } else {
        setup_entry__9TWindowDDFPvi((void *) (arg0), M2C_FIELD(temp_r31, s16 *, 4));
        init_entry_field_64__9TWindowDDFii((void *) (arg0), (int) (2));
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 1;
}

void run_state__9TWindowDDFPv(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        handle_confirm_input__9TWindowDDFPv((void *) (arg0));
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

void run_task__9TWindowDDFv(u8 *arg0) {
    Win_803438C4 *w = (Win_803438C4 *)arg0;
    Sub_803438C4 *cur;
    s32 done;
    if (w->x80 != 0) {
        if (w->xB0 == 0) {
            TWindowDD__sub_803407F0(w->x80, 2);
        } else if (w->xC4 > 1) {
            TWindowDD__sub_803407F0(w->x80, 0);
        } else {
            TWindowDD__sub_803407F0(w->x80, 1);
        }
    }
    cur = w->subs[w->idx];
    if (w->x7C != 0 && cur != NULL) {
        TWindowDD__sub_80340E20(w->x7C, TWindowDD__sub_8034217C((int)cur));
    }
    switch (w->xA8) {
    case 2:
        break;
    case 1:
        handle_input__9TWindowDDFPv(w->x80);
        done = 0;
        if (test_input_flag_4__9TWindowDDFPv(w) != 0) {
            if (w->x80 != 0) {
                switch (TWindowDD__sub_80340820(w->x80)) {
                case 0:
                    play_sound__9TWindowDDFv();
                    TWindowDD__sub_803484C4(w);
                    TWindowDD__sub_80343BC0(w->xC0, &w->xE0);
                    break;
                case 1:
                    play_se__9TWindowDDFv();
                    done = 1;
                    w->x94 |= 2;
                    break;
                case 2:
                    play_se__9TWindowDDFv();
                    set_state__9TWindowDDFPv(w);
                    break;
                }
            }
        } else if (TWindowDD__sub_803482B0(w) != 0) {
            play_se__9TWindowDDFv();
            done = 1;
            w->x94 |= 2;
        } else if (apply_both_choices__9TWindowDDFii(w->input, 0x40) != 0) {
            spawn_window__9TWindowDDFv();
            done = 1;
        }
        if (done != 0) {
            w->xA8 = 0;
            TWindowDD__sub_80340910(w->x80);
            TWindowDD__sub_80341AF8((int)cur);
            if (w->xC4 > 0) {
                TWindowDD__sub_80347CC8(w, &w->xC4);
            }
        }
        break;
    case 0:
        switch (w->xAC) {
        case 0:
            if (w->xB8 != 1 && TWindowDD_check_input_mask(w->input, 0x80) != 0) {
                spawn_window__9TWindowDDFv();
                w->xA8 = 1;
                TWindowDD__sub_8034091C(w->x80, get_cursor_index__9TWindowDDFPv((int)w->subs[w->idx]));
                TWindowDD__sub_80341AE0((int)cur);
                TWindowDD__sub_80343BC0(&w->xE0, &w->xC4);
                if (w->xE0 > 0) {
                    w->xE0--;
                    TWindowDD__sub_80347CC8(w, &w->xE0);
                }
            } else {
                run_state__9TWindowDDFPv((u8 *)(w));
                w->x94 = 0;
            }
            break;
        case 1:
            if (w->subs[w->idx + 1] != NULL && w->subs[w->idx + 1]->x50 == 0) {
                TWindowDD__sub_803434F4((u8 *)(w));
                w->xAC = 0;
            }
            break;
        case 2:
            if (w->subs[w->idx]->x50 == 0) {
                pop_menu_level__9TWindowDDFPv((TWindowDD_803431C0 *)(w));
                w->xAC = 0;
            }
            break;
        }
        break;
    }
}

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        close_all_windows__9TWindowDDFPv(arg0);
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
extern u32 TWindowDD__ws_data_buffer;

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
    if ((u32) TWindowDD__ws_data_buffer != 0U) {
        free_nodes_with_id__6TLobbyFUi((void*)TWindowDD__ws_data_buffer);
        TWindowDD__ws_data_buffer = 0U;
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
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
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
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
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
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
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

s32 format_message_text__9TWindowDDFPvPvUs(DD_803461CC *arg0, char *arg1, u16 arg2) {
    s32 k;
    s32 n;
    s32 m;
    s32 i;
    s32 pos;
    i = 0;
    pos = i;
    n = arg0->count;
    if (n == 0) {
        arg1[0] = i;
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
        for (m = 0; m < n; m++) {
            if (m == 1) {
                append_char__9TWindowDDFciPv(0x20, arg1, &pos);
            }
            TWindowDD__sub_8034886C(arg0->ids[m], arg1, &pos);
        }
        append_char__9TWindowDDFciPv(0x3F, arg1, &pos);
        if (arg0->count > 2) {
            append_prompt_newline__9TWindowDDFPvPv(arg1, &pos);
            TWindowDD__sub_8034886C(arg0->ids[2], arg1, &pos);
        }
        break;
    case 3:
        if (n > 1) {
            struct { DD_803461CC dd; u8 pad[0x10]; } tmp;
            TWindowDD__sub_80347758(arg0, &tmp.dd);
            pos = format_message_text__9TWindowDDFPvPvUs(&tmp.dd, arg1, arg2);
        } else {
            TWindowDD__sub_8034886C(arg0->ids[0], arg1, &pos);
        }
        break;
    case 4: {
        s32 id = arg0->ids[0];
        k = 0;
        if (id == 0x2C4) {
            TWindowDD__sub_8034886C(id, arg1, &pos);
        } else if (id == 0x2C7) {
            TWindowDD__sub_8034886C(id, arg1, &pos);
            append_char__9TWindowDDFciPv(0x2C, arg1, &pos);
            append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0xA58 / 4], arg1, &pos);
            k = 2;
        } else if (id >= 0x68C && id <= 0x697) {
            TWindowDD__sub_8034886C(id, arg1, &pos);
            append_char__9TWindowDDFciPv(0x2C, arg1, &pos);
            append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0xA4C / 4], arg1, &pos);
            k = 1;
        } else if (id == 0x698) {
            append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0xA4C / 4], arg1, &pos);
            k = 1;
        }
        if (n > 1) {
            i = arg0->ids[1];
            show_message_by_count__9TWindowDDFii(arg1, &pos);
            if (k == 0) {
                TWindowDD__sub_8034886C(i, arg1, &pos);
            } else {
                Pair_80344980 *p;
                if (k == 1) {
                    p = &TWindowDD__data_805D6E40[1];
                } else {
                    p = &TWindowDD__data_805D6E40[0];
                }
                append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[p->list[i - 0x5AC]], arg1, &pos);
            }
        }
        if (n > 2) {
            show_message_by_count__9TWindowDDFii(arg1, &pos);
            TWindowDD__sub_80347474(arg0, arg0->ids[2], arg1, &pos);
        }
        if (n > 3) {
            TWindowDD__sub_8034886C(arg0->ids[3], arg1, &pos);
        }
        arg1[0] = fn_80228C54(arg1[0]);
        break;
    }
    case 5: {
        s32 mode;
        k = arg0->ids[0];
        TWindowDD__sub_80347474(arg0, k, arg1, &pos);
        if (k == 0x2C4) {
            mode = 0;
            i = get_player_battle_flag_state__9TWindowDDFUs(arg2);
        } else if (k == 0x2C7) {
            append_char__9TWindowDDFciPv(0x2C, arg1, &pos);
            append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0xA58 / 4], arg1, &pos);
            mode = 2;
            if (get_player_battle_flag_state__9TWindowDDFUs(arg2) == 2) {
                i = 3;
            } else {
                i = 1;
            }
        } else if (k >= 0x68C && k <= 0x697) {
            append_char__9TWindowDDFciPv(0x2C, arg1, &pos);
            append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0xA4C / 4], arg1, &pos);
            mode = 1;
            i = get_player_battle_flag_state__9TWindowDDFUs(k - 0x68C);
        } else {
            mode = 3;
            if (k == 0x2C5) {
                i = 0;
            } else if (k == 0x2C6) {
                i = 2;
            } else {
                switch (TWindowDD__data_805D6E48[clamp_range_2C9_552__9TWindowDDFs(k)]) {
                case 0:
                    i = 0;
                    break;
                case 1:
                    i = 1;
                    break;
                case 2:
                    i = 2;
                    break;
                case 3:
                    i = 3;
                    break;
                }
            }
        }
        if (n > 1) {
            s32 found;
            s32 j;
            show_message_by_count__9TWindowDDFii(arg1, &pos);
            found = 1;
            k = arg0->ids[1];
            for (j = 0; j < TWindowDD__data_805D6E44[3].n; j++) {
                if (k == TWindowDD__data_805D6E44[3].list[j]) {
                    found = 0;
                    break;
                }
            }
            if (found != 0) {
                switch (mode) {
                case 0:
                    append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0x1A8C / 4], arg1, &pos);
                    break;
                case 1:
                    append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0x1A94 / 4], arg1, &pos);
                    break;
                case 2:
                    append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0x1A90 / 4], arg1, &pos);
                    break;
                case 3:
                    append_string__9TWindowDDFiiPv(TWindowDD__data_805D6E28[0x1A98 / 4], arg1, &pos);
                    break;
                }
                show_message_by_count__9TWindowDDFii(arg1, &pos);
            }
            if (i == 0) {
                TWindowDD__sub_80347474(arg0, k, arg1, &pos);
            } else {
                Pair_80344980 *p;
                if (i == 1) {
                    p = &TWindowDD__data_805D6E44[0];
                } else if (i == 2) {
                    p = &TWindowDD__data_805D6E44[1];
                } else {
                    p = &TWindowDD__data_805D6E44[2];
                }
                TWindowDD__sub_803474CC(arg0, k, TWindowDD__data_805D6E28[p->list[clamp_range_5FA_682__9TWindowDDFs(k)]], arg1, &pos);
            }
        }
        if (n > 2) {
            TWindowDD__sub_8034886C(arg0->ids[2], arg1, &pos);
        }
        arg1[0] = fn_80228C54(arg1[0]);
        break;
    }
    case 6:
        TWindowDD__sub_8034734C(arg0, arg1, &pos);
        break;
    }
    arg1[pos++] = 0;
    return pos;
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
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x78))[*(s16 *)(arg0 + 0xFC) - 0x37];
        } else {
            v = (*(s16 **)(TWindowDD__ws_data_table + 0x80))[*(s16 *)(arg0 + 0xFC) - 0x37];
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
void build_item_list__9TWindowDDFPv(u8 *arg0) {
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
