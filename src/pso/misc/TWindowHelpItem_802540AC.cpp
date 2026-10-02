#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80254F18 {
    s32 x;
    s32 y;
};

struct Vec3_80254F18 {
    Pair_80254F18 xy;
    s32 z;
};

struct HelpItem_80254F18 {
    u8 pad0[0xb0];
    Vec3_80254F18 pos;
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_802541E0 {
    s32 x;
    s32 y;
};

struct Vec3_802541E0 {
    Pair_802541E0 xy;
    s32 z;
};

struct HelpItem_802541E0 {
    u8 pad0[0x20];
    s16 player;
    u8 pad22[2];
    u8 disp[0x70 - 0x24];
    u32 item;
    u8 pad74[0xA4 - 0x74];
    s32 itemId;
    u8 padA8[0xB0 - 0xA8];
    Vec3_802541E0 pos;
};

struct Stats_802541E0 {
    u8 pad0[0xC];
    s16 atp;
    s16 dfp;
    s16 mst;
    s16 ata;
    s16 evp;
    u8 pad16[2];
};

class Entry_802544D8 {
public:
    virtual void m0();
};

typedef void (Entry_802544D8::*EntryFn_802544D8)(s32);

struct Op_802544D8 {
    u8 slot;
    s8 value;
};

struct Pair_8025500C {
    s32 x;
    s32 y;
};

struct Vec3_8025500C {
    Pair_8025500C xy;
    s32 z;
};

struct HelpItem_8025500C {
    u8 pad0[0x20];
    s16 player;
    u8 pad22[0x68 - 0x22];
    s32 itemId;
    u8 pad6C[0xB0 - 0x6C];
    Vec3_8025500C pos;
};

struct Pair_802551C4 {
    s32 x;
    s32 y;
};

struct Vec3_802551C4 {
    Pair_802551C4 xy;
    s32 z;
};

struct HelpItem_802551C4 {
    u8 pad0[0x20];
    s16 player;
    u8 pad22[0x68 - 0x22];
    s32 itemId;
    u8 pad6C[0xB0 - 0x6C];
    Vec3_802551C4 pos;
};

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(int);
void TWindowHelpItem__vt7(s32 arg0);
M2C_UNK set_default_status__17TWindowDuelResultFPvi(void *, s32);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(void *);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowHelpItem__vt4(void *arg0);
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
s32 get_player_by_client_id(s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
void update_stat_disp2__15TWindowHelpItemFPv(void *arg0);
u32 get_quest_id__12TQuestListVMFPv();
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
u8 *lookup_item_pmt_record(s32);
s32 get_player_by_client_id(s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowHelpItem__sub_802549B0(void *);
void TWindowHelpItem__sub_80254C30(u8 *arg0);
u8 * TLobby__sub_80101AB0(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void TWindowHelpItem__set_displayed_item_by_id(u8 *arg0, s32 arg1);
u8 * TLobby__sub_80101AB0(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
void TWindowHelpItem__sub_802558D0(u8 *arg0, s32 arg1);
void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);
void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(int);
void TWindowHelpItem__sub_80254DEC(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, void *, int);
M2C_UNK set_help_text__15TWindowHelpItemFPvUi(void *, int);
extern M2C_UNK TWindowHelpItem__data_804CF140[];
extern Vec3_80254F18 lbl_804CF82C;
void TWindowHelpItem__vt9(HelpItem_80254F18 *self);
s16 get_class_id__10TObjPlayerFPv(s32);
s16 get_item_index__10TObjPlayerFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void clear_fields__20TWindowSubStatusDispFPv(Stats_802541E0 *);
void TObjPlayer__sub_801B96BC(s32, Stats_802541E0 *, s32);
void TObjPlayer__sub_801B9954(s32, Stats_802541E0 *, u32);
s32 get_player_by_client_id(s16);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s32 fn_802530D0(void *);
s16 get_item_type__20TWindowSubStatusDispFPv(s32);
s16 get_field_2F8__20TWindowSubStatusDispFPv(s32);
s16 get_stat__20TWindowSubStatusDispFPv(s32);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, void *, int);
void set_flag8_and_field20__15TWindowHelpItemFPvi(s32, s32);
void set_flag4_and_field1c__15TWindowHelpItemFPvi(s32, s32);
M2C_UNK set_help_text__15TWindowHelpItemFPvUi(void *, int);
extern u8 lbl_804CF290[];
extern Vec3_802541E0 lbl_804CF868;
void TWindowHelpItem__sub_802541E0(void *arg0);
void TWindowHelpItem__sub_8025B08C(s32, f32, f32);
extern Vec3_8025500C lbl_804CF820;
extern Vec3_802551C4 lbl_804CF814;
extern const f32 TWindowHelpItem__data_805DCDE4;
extern const f32 lbl_805DCE00;
extern const f32 lbl_805DCE04;
extern const f32 lbl_805DCE08;
extern const f32 lbl_805DCDEC;
extern const f32 lbl_805DCE0C;
}

extern "C" {

void update_stat_disp__15TWindowHelpItemFPv(void *arg0);
s32 get_player_by_client_id(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void update_stat_disp__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
        if (M2C_FIELD(arg0, u32 *, 0x70) != 0) {
            if (TWindowHelpItem__sub_80104FCC(temp_r3, M2C_FIELD(arg0, u32 *, 0x70), &sp8) != 0) {
                set_flag_0x10__15TWindowHelpItemFPvi(a, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(b, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(c, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(d, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(e, 1);
                return;
            }
            set_flag_0x10__15TWindowHelpItemFPvi(a, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(b, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(c, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(d, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(e, 0);
        }
    }
}

#define self ((HelpItem_802541E0 *)arg0)
void TWindowHelpItem__sub_802541E0(void *arg0) {
    Stats_802541E0 st;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 pl;
    clear_fields__20TWindowSubStatusDispFPv(&st);
    pl = get_player_by_client_id(self->player);
    if (pl != 0) {
        TWindowSubStatusDisp__sub_80257D44(self->disp, lbl_804CF290, self->player);
        self->pos = lbl_804CF868;
        a = get_array_entry__20TWindowSubStatusDispFPvi(self, 0);
        b = get_array_entry__20TWindowSubStatusDispFPvi(self, 1);
        c = get_array_entry__20TWindowSubStatusDispFPvi(self, 2);
        d = get_array_entry__20TWindowSubStatusDispFPvi(self, 3);
        e = get_array_entry__20TWindowSubStatusDispFPvi(self, 4);
        set_help_text__15TWindowHelpItemFPvUi((void *)a, get_message_10__20TWindowSubStatusDispFPv(0x89));
        set_help_text__15TWindowHelpItemFPvUi((void *)b, get_message_10__20TWindowSubStatusDispFPv(0x8A));
        set_help_text__15TWindowHelpItemFPvUi((void *)c, get_message_10__20TWindowSubStatusDispFPv(0x8B));
        set_help_text__15TWindowHelpItemFPvUi((void *)d, get_message_10__20TWindowSubStatusDispFPv(0x8C));
        set_help_text__15TWindowHelpItemFPvUi((void *)e, get_message_10__20TWindowSubStatusDispFPv(0x8D));
        set_flag4_and_field1c__15TWindowHelpItemFPvi(a, get_stat__20TWindowSubStatusDispFPv(pl));
        set_flag4_and_field1c__15TWindowHelpItemFPvi(b, get_class_id__10TObjPlayerFPv(pl));
        set_flag4_and_field1c__15TWindowHelpItemFPvi(c, get_item_index__10TObjPlayerFPv(pl));
        set_flag4_and_field1c__15TWindowHelpItemFPvi(d, get_field_2F8__20TWindowSubStatusDispFPv(pl));
        set_flag4_and_field1c__15TWindowHelpItemFPvi(e, get_item_type__20TWindowSubStatusDispFPv(pl));
        if (self->item != 0) {
            if (fn_802530D0(self) != 0) {
                TObjPlayer__sub_801B96BC(pl, &st, self->itemId);
            } else {
                TObjPlayer__sub_801B9954(pl, &st, self->item);
            }
            set_flag8_and_field20__15TWindowHelpItemFPvi(a, st.atp);
            set_flag8_and_field20__15TWindowHelpItemFPvi(b, st.dfp);
            set_flag8_and_field20__15TWindowHelpItemFPvi(c, st.mst);
            set_flag8_and_field20__15TWindowHelpItemFPvi(d, st.evp);
            set_flag8_and_field20__15TWindowHelpItemFPvi(e, st.ata);
        }
    }
}
#undef self

void TWindowHelpItem__vt7(s32 arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    TWindowHelpItem__sub_802541E0((void *)(arg0));
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (5)));
    temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi((void *)((void *) (arg0)), (M2C_UNK)((int) (6)));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31_2));
}
void TWindowHelpItem__vt4(void *arg0) {
    void *temp_r30;
    void *temp_r31;
    TWindowHelpItem__sub_802541E0((void *)(arg0));
    temp_r30 = ((void *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5));
    temp_r31 = ((void *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6));
    set_default_status__17TWindowDuelResultFPvi(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0xA1));
    reset_float_field__15TWindowHelpItemFPv(temp_r30);
    M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 5);
}
void TWindowHelpItem__sub_802544D8(void *self, Op_802544D8 *ops, EntryFn_802544D8 fn) {
    u32 i;
    Entry_802544D8 *e0;
    Entry_802544D8 *e1;
    Entry_802544D8 *e2;
    Entry_802544D8 *e3;
    Entry_802544D8 *e4;

    e0 = (Entry_802544D8 *)get_array_entry__20TWindowSubStatusDispFPvi(self, 0);
    e1 = (Entry_802544D8 *)get_array_entry__20TWindowSubStatusDispFPvi(self, 1);
    e2 = (Entry_802544D8 *)get_array_entry__20TWindowSubStatusDispFPvi(self, 2);
    e3 = (Entry_802544D8 *)get_array_entry__20TWindowSubStatusDispFPvi(self, 3);
    e4 = (Entry_802544D8 *)get_array_entry__20TWindowSubStatusDispFPvi(self, 4);
    (e0->*fn)(0);
    (e1->*fn)(0);
    (e2->*fn)(0);
    (e3->*fn)(0);
    if (ops != NULL) {
        for (i = 0; i < 3; i++, ops++) {
            switch (ops->slot) {
            case 1:
                (e0->*fn)(ops->value);
                break;
            case 2:
                (e1->*fn)(ops->value);
                break;
            case 3:
                (e2->*fn)(ops->value);
                break;
            case 4:
                (e3->*fn)(ops->value);
                break;
            case 5:
                (e4->*fn)(ops->value);
                break;
            }
        }
    }
}
void update_stat_disp2__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r3;
    u32 temp_r4;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if ((temp_r3 != 0) && (temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2), temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3), temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4), (temp_r4 = M2C_FIELD(arg0, u32 *, 0x70), (temp_r4 == 0U) == 0))) {
        if (TWindowHelpItem__sub_80104FCC((s32)(temp_r3), (M2C_UNK)(temp_r4), (M2C_UNK *)(&sp8)) != 0) {
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 1);
            return;
        }
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 0);
    }
}
void TWindowHelpItem__sub_80254C30(u8 *arg0) {
    s32 sp8;
    u8 *temp_r30;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20))));
    if (temp_r3 != NULL) {
        if (get_quest_id__12TQuestListVMFPv() != 0U) {
            TWindowHelpItem__sub_802549B0((void *) (arg0));
            temp_r30 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA)));
            temp_r31 = (u8 *)(lookup_item_pmt_record(M2C_FIELD(arg0, s32 *, 0x68)));
            if (TWindowHelpItem__sub_80104FCC((s32)((s32)((int) (temp_r3))), (M2C_UNK)((s32)((int) (M2C_FIELD(arg0, s32 *, 0x68)))), (M2C_UNK *)((M2C_UNK *)((void *) (&sp8)))) == 0) {
                if (!(sp8 & 1)) {
                    goto block_4;
                }
            } else {
block_4:
                if ((u8) M2C_FIELD(temp_r31, u8 *, 0x10) != 0) {
                    M2C_FIELD(temp_r30, s32 *, 0x20) = (s32) (((VObj_18_eecf68 *)(temp_r3))->m14() + 1);
                }
            }
        }
    }
}

void TWindowHelpItem__sub_80254DEC(void *arg0) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r26;

    TWindowSubStatusDisp__sub_80257D44((void *) ((u8 *) arg0 + 0x24), (void *) (TWindowHelpItem__data_804CF140), (int) (M2C_FIELD(arg0, s16 *, 0x20)));
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (0));
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (1));
    temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (2));
    temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (3));
    temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (4));
    temp_r26 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (5));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r31), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x83))));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r30), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x84))));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r29), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x85))));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r28), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x86))));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r27), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x87))));
    set_help_text__15TWindowHelpItemFPvUi((void *) (temp_r26), (int) (get_message_10__20TWindowSubStatusDispFPv((int) (0x88))));
}

void TWindowHelpItem__vt9(HelpItem_80254F18 *self) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
    TWindowHelpItem__sub_80254DEC(self);
    self->pos = lbl_804CF82C;
    a = get_array_entry__20TWindowSubStatusDispFPvi(self, 6);
    b = get_array_entry__20TWindowSubStatusDispFPvi(self, 7);
    c = get_array_entry__20TWindowSubStatusDispFPvi(self, 8);
    d = get_array_entry__20TWindowSubStatusDispFPvi(self, 9);
    e = get_array_entry__20TWindowSubStatusDispFPvi(self, 10);
    f = get_array_entry__20TWindowSubStatusDispFPvi(self, 11);
    set_flag0_bit2__15TWindowHelpItemFPv(a);
    set_flag0_bit2__15TWindowHelpItemFPv(b);
    set_flag0_bit2__15TWindowHelpItemFPv(c);
    set_flag0_bit2__15TWindowHelpItemFPv(d);
    set_flag0_bit2__15TWindowHelpItemFPv(e);
    set_flag0_bit2__15TWindowHelpItemFPv(f);
}

void TWindowHelpItem__vt3(HelpItem_8025500C *self) {
    s32 pl;
    u8 *item;
    M2C_UNK flags;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;

    pl = get_player_by_client_id(self->player);
    if (pl != 0) {
        TWindowHelpItem__sub_80254DEC(self);
        self->pos = lbl_804CF820;
        a = get_array_entry__20TWindowSubStatusDispFPvi(self, 6);
        b = get_array_entry__20TWindowSubStatusDispFPvi(self, 7);
        c = get_array_entry__20TWindowSubStatusDispFPvi(self, 8);
        d = get_array_entry__20TWindowSubStatusDispFPvi(self, 9);
        e = get_array_entry__20TWindowSubStatusDispFPvi(self, 10);
        f = get_array_entry__20TWindowSubStatusDispFPvi(self, 11);
        item = lookup_item_pmt_record(self->itemId);
        if (TWindowHelpItem__sub_80104FCC(pl, self->itemId, &flags) == 0 && (flags & 1)) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCE00);
            set_flag0_bit2__15TWindowHelpItemFPv(b);
            set_flag0_bit2__15TWindowHelpItemFPv(c);
            set_flag0_bit2__15TWindowHelpItemFPv(d);
            set_flag0_bit2__15TWindowHelpItemFPv(e);
            set_flag0_bit2__15TWindowHelpItemFPv(f);
            return;
        }
        if (item[0x10] != 0) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCE04);
            reset_float_field__15TWindowHelpItemFPv((void *)b);
            reset_float_field__15TWindowHelpItemFPv((void *)d);
            reset_float_field__15TWindowHelpItemFPv((void *)f);
            *(s32 *)(c + 0x20) = item[0x10] + 1;
            return;
        }
        set_flag0_bit2__15TWindowHelpItemFPv(a);
        set_flag0_bit2__15TWindowHelpItemFPv(b);
        set_flag0_bit2__15TWindowHelpItemFPv(c);
        set_flag0_bit2__15TWindowHelpItemFPv(d);
        set_flag0_bit2__15TWindowHelpItemFPv(e);
        set_flag0_bit2__15TWindowHelpItemFPv(f);
    }
}

void TWindowHelpItem__vt0(HelpItem_802551C4 *self) {
    s32 pl;
    u8 *item;
    M2C_UNK flags;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;

    pl = get_player_by_client_id(self->player);
    if (pl != 0) {
        TWindowHelpItem__sub_80254DEC(self);
        self->pos = lbl_804CF814;
        a = get_array_entry__20TWindowSubStatusDispFPvi(self, 6);
        b = get_array_entry__20TWindowSubStatusDispFPvi(self, 7);
        c = get_array_entry__20TWindowSubStatusDispFPvi(self, 8);
        d = get_array_entry__20TWindowSubStatusDispFPvi(self, 9);
        e = get_array_entry__20TWindowSubStatusDispFPvi(self, 10);
        f = get_array_entry__20TWindowSubStatusDispFPvi(self, 11);
        item = lookup_item_pmt_record(self->itemId);
        if (TWindowHelpItem__sub_80104FCC(pl, self->itemId, &flags) == 0 && (flags & 1)) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCE00);
            set_flag0_bit2__15TWindowHelpItemFPv(b);
            set_flag0_bit2__15TWindowHelpItemFPv(c);
            set_flag0_bit2__15TWindowHelpItemFPv(d);
            set_flag0_bit2__15TWindowHelpItemFPv(e);
            set_flag0_bit2__15TWindowHelpItemFPv(f);
            return;
        }
        if (*(u16 *)(item + 0xE) != 0) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCE08);
            reset_float_field__15TWindowHelpItemFPv((void *)b);
            reset_float_field__15TWindowHelpItemFPv((void *)d);
            reset_float_field__15TWindowHelpItemFPv((void *)f);
            *(s32 *)(c + 0x20) = *(u16 *)(item + 0xE);
            return;
        }
        if (*(u16 *)(item + 0x10) != 0) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCDEC);
            reset_float_field__15TWindowHelpItemFPv((void *)b);
            reset_float_field__15TWindowHelpItemFPv((void *)d);
            reset_float_field__15TWindowHelpItemFPv((void *)f);
            *(s32 *)(c + 0x20) = *(u16 *)(item + 0x10);
            return;
        }
        if (*(u16 *)(item + 0x12) != 0) {
            TWindowHelpItem__sub_8025B08C(a, TWindowHelpItem__data_805DCDE4, lbl_805DCE0C);
            reset_float_field__15TWindowHelpItemFPv((void *)b);
            reset_float_field__15TWindowHelpItemFPv((void *)d);
            reset_float_field__15TWindowHelpItemFPv((void *)f);
            *(s32 *)(c + 0x20) = *(u16 *)(item + 0x12);
            return;
        }
        set_flag0_bit2__15TWindowHelpItemFPv(a);
        set_flag0_bit2__15TWindowHelpItemFPv(b);
        set_flag0_bit2__15TWindowHelpItemFPv(c);
        set_flag0_bit2__15TWindowHelpItemFPv(d);
        set_flag0_bit2__15TWindowHelpItemFPv(e);
        set_flag0_bit2__15TWindowHelpItemFPv(f);
    }
}

void TWindowHelpItem__set_displayed_item_by_id(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    if (arg1 == -1) {
        set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(NULL)), (void*)((void*)((void *)-1)));
        return;
    }
    temp_r3 = (u8 *)(TLobby__sub_80101AB0(arg1));
    if (temp_r3 == NULL) {
        set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(NULL)), (void*)((void*)((void *) arg1)));
        return;
    }
    copy_to_item_data__5TItemFPvPv(temp_r3, arg0 + 0x88);
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(arg0 + 0x88)), (void*)((void*)((void *) arg1)));
}
void TWindowHelpItem__sub_802558D0(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    if (arg1 == -1) {
        set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(NULL)), (void*)((void*)((void *)-1)));
        return;
    }
    temp_r3 = (u8 *)(TLobby__sub_80101AB0(arg1));
    if (temp_r3 == NULL) {
        set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(NULL)), (void*)((void*)((void *) arg1)));
        return;
    }
    copy_to_item_data__5TItemFPvPv(temp_r3, arg0 + 0x74);
    set_items_and_refresh__15TWindowHelpItemFPvPvPv((void*)((void*)(arg0)), (void*)((void*)(arg0 + 0x74)), (void*)((void*)((void *) arg1)));
}
void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    M2C_UNK var_r5;
    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)((void*)((void*)(arg0))), (void*)((void*)((void*)(arg1))), (void*)((void*)((void*)(var_r5))));
}
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }
void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
