#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_8027FD9C { u8 pad[0x60]; s16 f60; u8 pad2[6]; s32 f68; };

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

struct En_80280F14 { u8 pad[0x20]; s32 v; };

struct Q_80280F14 { u8 pad[0x1C]; s32 a; s32 b; };

struct Wn_80280F14 { u8 pad[0x20]; s16 f20; };

typedef s32 M2C_UNK;

struct VBase_80280FD0 { char pad[0x18]; };

struct VObj_80280FD0 : VBase_80280FD0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

typedef struct Stats_80280B1C {
    s16 v[12];
} Stats_80280B1C;

typedef struct Entry_80280B1C {
    u8 pad0[0x1C];
    s32 color;
    s32 value;
} Entry_80280B1C;

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 TLobby__sub_801C2614();
u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_field__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_status__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_value__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(u16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK init_window_layout_entries(void *, M2C_UNK *, s16);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D244C[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt3(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK init_window_layout_entries(void *, M2C_UNK *, s16);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D20FC[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt2(u8 *arg0);
s8 get_type__20TWindowSubStatusDispFPv(int);
s32 TWindowSubStatusDisp__sub_8027FD9C(Win_8027FD9C *arg0);
Q_80280F14 *get_quest_id__12TQuestListVMFPv();
s32 get_next_level_exp__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowSubStatusDisp__vt11(Wn_80280F14 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK init_window_layout_entries(void *, M2C_UNK *, s16);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D1D04[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt1(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_download_server__20TWindowSubStatusDispFv();
s32 get_stat_table_entry__9TObjLukerFi(s32);
s32 get_player_by_client_id(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s32 get_class_name_text(s32);
M2C_UNK init_window_layout_entries(void *, M2C_UNK *, s16);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
extern M2C_UNK TWindowSubStatusDisp__data_804D1AE8[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt0(u8 *arg0);
s16 get_model_animation_id__10TObjPlayerFPv(int);
s16 get_ata__10TObjPlayerFPv(int);
Q_80280F14 *get_quest_id__12TQuestListVMFPv();
s16 get_field_2c8__10TObjPlayerFPv(int);
s16 TObjPlayer__sub_800A776C(int);
s32 clear_fields__20TWindowSubStatusDispFPv(void *);
s16 get_hp__10TObjPlayerFPv(int);
s32 build_player_class_stat_template(int, void *);
s32 build_player_equipment_requirement_stats(int, void *);
s32 get_player_by_client_id(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 get_value__20TWindowSubStatusDispFPv(int);
void TWindowSubStatusDisp__vt12(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
u16 get_card_window_field__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_window_status__23TAdSinglePlyChrSelectGCFi(u16);
u16 TAdSinglePlyChrSelectGC__sub_801FC36C(u16);
u16 get_card_state__23TAdSinglePlyChrSelectGCFi(u16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(void *);
M2C_UNK init_window_layout_entries(void *, M2C_UNK *, s16);
M2C_UNK set_text_entry_string(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D244C[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt7(u8 *arg0);
}

extern "C" {

void TWindowSubStatusDisp__vt13(void *arg0);
void TWindowSubStatusDisp__vt14(void);
void TWindowSubStatusDisp__vt15(void);
void TWindowSubStatusDisp__vt16(void);
void TWindowSubStatusDisp__vt18(void);
void fn_8027FD88(void* p, f32 a, f32 b);
void fn_8027FD94(void* p, s16 v);
s32 get_player_by_client_id(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s16 get_class_id__10TObjPlayerFPv(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(s32);
s16 get_item_index__10TObjPlayerFPv(s32);
s16 get_item_type__20TWindowSubStatusDispFPv(s32);
s16 get_stat__20TWindowSubStatusDispFPv(s32);

void fn_8027FD88(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x6c) = a; *(f32*)((char*)p + 0x70) = b; }
void fn_8027FD94(void* p, s16 v) { *(s16*)((char*)p + 0x62) = v; }

s32 TWindowSubStatusDisp__sub_8027FD9C(Win_8027FD9C *arg0) {
    s32 r;
    if (arg0->f60 == 2) {
        s8 t = get_type__20TWindowSubStatusDispFPv(arg0->f68);
        r = 3;
        if (t == 2) r = 2;
        return r;
    }
    return get_type__20TWindowSubStatusDispFPv(arg0->f68) != 2 ? 1 : 0;
}

void TWindowSubStatusDisp__vt16(void) {  }

void TWindowSubStatusDisp__vt15(void) {  }

void TWindowSubStatusDisp__vt18(void) {  }

void TWindowSubStatusDisp__vt7(u8 *arg0) {
    u8 *temp_r30;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    init_window_layout_entries(arg0 + 0x24, lbl_804D244C, M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    set_text_entry_string(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0x8F), 0);
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 6), 0);
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 7), 0);
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 8), 0);
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 9), 0);
    set_flag0_bit2__15TWindowHelpItemFPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD));
    set_flag0_bit2__15TWindowHelpItemFPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE));
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_state__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) TAdSinglePlyChrSelectGC__sub_801FC36C((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9);
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_window_status__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC);
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_window_field__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    set_flag0_bit2__15TWindowHelpItemFPv(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xF));
}

void TWindowSubStatusDisp__vt14(void) {  }

void TWindowSubStatusDisp__vt3(u8 *arg0) {
    s32 var_r30;
    u8 *temp_r30;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    init_window_layout_entries(arg0 + 0x24, lbl_804D244C, M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    set_text_entry_string(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0x8E), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1));
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 6), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4));
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 7), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7));
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 8), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA));
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 9), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD));
    set_text_entry_string(temp_r30, get_localized_text_entry(0x10, 0xE), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3));
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_field_21a8__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6));
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_value__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9));
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_status__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC));
    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) get_card_field__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    var_r30 = get_card_flag__23TAdSinglePlyChrSelectGCFi((u16) M2C_FIELD(arg0, s16 *, 0x20));
    if (TLobby__sub_801C2614() != 0) {
        var_r30 -= 1;
    }
    M2C_FIELD(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xF)), s32 *, 0x20) = (s32) var_r30;
}

void TWindowSubStatusDisp__vt13(void *arg0) {
    s32 temp_r3;
    void *temp_r31;
    void *temp_r31_2;
    void *temp_r31_3;
    void *temp_r31_4;
    void *temp_r31_5;

    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) get_stat__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(temp_r31_2, s32 *, 0x20) = (s32) get_class_id__10TObjPlayerFPv(temp_r3);
        temp_r31_3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        M2C_FIELD(temp_r31_3, s32 *, 0x20) = (s32) get_item_index__10TObjPlayerFPv(temp_r3);
        temp_r31_4 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x14);
        M2C_FIELD(temp_r31_4, s32 *, 0x20) = (s32) get_field_2F8__20TWindowSubStatusDispFPv(temp_r3);
        temp_r31_5 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x1A);
        M2C_FIELD(temp_r31_5, s32 *, 0x20) = (s32) get_item_type__20TWindowSubStatusDispFPv(temp_r3);
    }
}
void TWindowSubStatusDisp__vt2(u8 *arg0) {
    s32 temp_r30;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    init_window_layout_entries(arg0 + 0x24, lbl_804D20FC, M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    set_text_entry_string((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x89)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6));
    set_text_entry_string((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8A)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC));
    set_text_entry_string((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8B)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x12));
    set_text_entry_string((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8C)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x18));
    set_text_entry_string((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8D)), (M2C_UNK)(0x20));
}

void TWindowSubStatusDisp__vt12(u8 *arg0) {
    Stats_80280B1C cur;
    Stats_80280B1C req;
    Entry_80280B1C *e2;
    s32 pl;
    Entry_80280B1C *e;
    u8 *q;
    clear_fields__20TWindowSubStatusDispFPv(&cur);
    clear_fields__20TWindowSubStatusDispFPv(&req);
    pl = get_player_by_client_id(*(s16 *)(arg0 + 0x20));
    if (pl != 0) {
        e2 = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(2));
        e2->value = TObjPlayer__sub_800A776C(pl) + (get_field_2c8__10TObjPlayerFPv(pl) + get_model_animation_id__10TObjPlayerFPv(pl));
        e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(8));
        e->value = get_value__20TWindowSubStatusDispFPv(pl);
        e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0x14));
        e->value = get_ata__10TObjPlayerFPv(pl);
        e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0x1A));
        e->value = get_hp__10TObjPlayerFPv(pl);
        q = ((u8 *(*)(s32))get_quest_id__12TQuestListVMFPv)(pl);
        if (q != NULL) {
            e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0xE));
            e->value = *(s16 *)(q + 2);
            e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0x20));
            e->value = *(s16 *)(q + 0xC);
        }
    }
    if (build_player_equipment_requirement_stats(pl, &cur) != 0) {
        build_player_class_stat_template(pl, &req);
#define ROW(idx, k) \
        e = (Entry_80280B1C *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(idx)); \
        e->value = cur.v[k]; \
        if (req.v[k] <= cur.v[k]) { e->color = -0x100; } else { e->color = -1; }
        ROW(4, 0)
        ROW(0xA, 1)
        ROW(0x16, 3)
        ROW(0x1C, 4)
        ROW(0x10, 2)
        ROW(0x22, 5)
#undef ROW
    }
}

void TWindowSubStatusDisp__vt1(u8 *arg0) {
    void *e;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    init_window_layout_entries(arg0 + 0x24, lbl_804D1D04, M2C_FIELD(arg0, s16 *, 0x20));
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x83), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x84), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x85), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x12);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x86), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x18);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x87), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x1E);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x88), 0x20);
}

void TWindowSubStatusDisp__vt11(Wn_80280F14 *arg0) {
    VObj_18_eecf68 *p;
    Q_80280F14 *q;
    En_80280F14 *e;
    p = ((VObj_18_eecf68 *)get_player_by_client_id(arg0->f20));
    if (p != NULL) {
        q = get_quest_id__12TQuestListVMFPv();
        if (q != NULL) {
            e = ((En_80280F14 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(2)));
            e->v = p->m14() + 1;
            e = ((En_80280F14 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0x10)));
            e->v = q->b;
            e = ((En_80280F14 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(8)));
            e->v = q->a;
            e = ((En_80280F14 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (M2C_UNK)(0xC)));
            e->v = get_next_level_exp__10TObjPlayerFPv(p) - q->a;
        }
    }
}
void TWindowSubStatusDisp__vt0(u8 *arg0) {
    void *e;
    u8 *pl;
    s32 v;
    s8 *st;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    init_window_layout_entries(arg0 + 0x24, TWindowSubStatusDisp__data_804D1AE8, M2C_FIELD(arg0, s16 *, 0x20));
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x80), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x81), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
    set_text_entry_string(e, get_message_10__20TWindowSubStatusDispFPv(0x82), 0x20);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x11);
    set_text_entry_string(e, get_download_server__20TWindowSubStatusDispFv(), 0x20);
    pl = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (pl != NULL) {
        st = (s8 *)(pl + 0x85C);
        if (st != NULL) {
            v = ((VObj_80280FD0 *)pl)->m10();
            set_text_entry_string(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), v, 0x20);
            v = get_class_name_text(st[0x31]);
            set_text_entry_string(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3), v, 0);
            v = get_stat_table_entry__9TObjLukerFi(st[0x30]);
            set_text_entry_string(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4), v, 0);
        }
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
        M2C_FIELD(e, u8 **, 0x30) = arg0 + 0x64;
        M2C_FIELD(arg0, u8 **, 0x64) = pl + 0xCF4;
    }
}

}
