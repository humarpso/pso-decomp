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

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TLobby__sub_801C2614();
u16 get_card_flag__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_field__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_status__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_value__23TAdSinglePlyChrSelectGCFi(u16);
u16 get_card_field_21a8__23TAdSinglePlyChrSelectGCFi(u16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, M2C_UNK *, s16);
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D244C[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt3(u8 *arg0);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, M2C_UNK *, s16);
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(void *, s32, M2C_UNK);
extern M2C_UNK lbl_804D20FC[];
extern const f32 TWindowSubStatusDisp__data_805DD708;
void TWindowSubStatusDisp__vt2(u8 *arg0);
s8 get_type__20TWindowSubStatusDispFPv(int);
s32 TWindowSubStatusDisp__sub_8027FD9C(Win_8027FD9C *arg0);
Q_80280F14 *get_quest_id__12TQuestListVMFPv();
s32 TObjPlayer__sub_801B2E68(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
void TWindowSubStatusDisp__vt11(Wn_80280F14 *arg0);
}

extern "C" {

void TWindowSubStatusDisp__vt13(void *arg0);
void TWindowSubStatusDisp__vt14(void);
void TWindowSubStatusDisp__vt15(void);
void TWindowSubStatusDisp__vt16(void);
void TWindowSubStatusDisp__vt18(void);
void fn_8027FD88(void* p, f32 a, f32 b);
void fn_8027FD94(void* p, s16 v);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
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

void TWindowSubStatusDisp__vt14(void) {  }

void TWindowSubStatusDisp__vt3(u8 *arg0) {
    s32 var_r30;
    u8 *temp_r30;
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) > TWindowSubStatusDisp__data_805DD708) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 7;
    }
    TWindowSubStatusDisp__sub_80257D44(arg0 + 0x24, lbl_804D244C, M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0x8E), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 6), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 7), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 8), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 9), 0);
    temp_r30 = ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD));
    TWindowSubStatusDisp__sub_8025AC50(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 0xE), 0);
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

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
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
    TWindowSubStatusDisp__sub_80257D44(arg0 + 0x24, lbl_804D20FC, M2C_FIELD(arg0, s16 *, 0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    TWindowSubStatusDisp__sub_8025AC50((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x89)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6));
    TWindowSubStatusDisp__sub_8025AC50((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8A)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC));
    TWindowSubStatusDisp__sub_8025AC50((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8B)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x12));
    TWindowSubStatusDisp__sub_8025AC50((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8C)), (M2C_UNK)(0x20));
    temp_r30 = ((s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x18));
    TWindowSubStatusDisp__sub_8025AC50((void *)(temp_r30), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x8D)), (M2C_UNK)(0x20));
}
void TWindowSubStatusDisp__vt11(Wn_80280F14 *arg0) {
    VObj_18_eecf68 *p;
    Q_80280F14 *q;
    En_80280F14 *e;
    p = ((VObj_18_eecf68 *)TPlayerBattleCtrl4P__sub_801BA74C(arg0->f20));
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
            e->v = TObjPlayer__sub_801B2E68(p) - q->a;
        }
    }
}

}
