#include "types.h"

#pragma optimization_level 1
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_80211034 { u8 b[0x18]; };
struct Obj_80211408 { u8 pad[0x14]; s16 a; s16 b; };

struct Obj_80211584 { u8 pad[0x14]; s16 a; s16 b; };

struct TWin_8020F070 { u8 pad[0x44]; };

struct TCheckRoomSequence_8020F070 { u8 pad[0x44]; TWin_8020F070 *win; };

struct Obj_8020F268 { u8 pad[0x28]; void (*cb0)(u8 *); void (*cb1)(u32); };

struct Seq_8020F268 { u8 pad[0x24]; s32 f24; };

struct Obj_8020F2D8 { u8 pad[0x60]; void (*cb0)(u8 *); void (*cb1)(u32); };

struct Seq_8020F2D8 { u8 pad[0x24]; s32 f24; };

struct VBase_18_a93f07 { char pad[0x18]; };

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct VBase_18_f96e2e { char pad[0x18]; };

struct VObj_18_f96e2e : VBase_18_f96e2e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(s32, M2C_UNK);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct Rec_80210904 { u8 b[0x18]; };

struct VBase_18_8d1630 { char pad[0x18]; };

struct VObj_18_8d1630 : VBase_18_8d1630 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

extern "C" {
extern Rec_80211034 *lbl_80513D88[];
u8 TCheckRoomSequence__sub_80211574(u8 *arg0);
extern s32 lbl_80513D98[];
u8 TCheckRoomSequence__sub_802108B0(s32 i);
extern s32 lbl_80513DA8[];
s32 TCheckRoomSequence__sub_802108E0(s32 i);
extern s32 lbl_80513DA8[];
s32 TCheckRoomSequence__sub_80210D1C(s32 v, s32 i);
void init__9TItemDataFv(void *);
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self);
void init__9TItemDataFv(void *);
void TAdSinglePlyChrSelectGC__sub_80211584(Obj_80211584 *self);
void TWindow__close(TWin_8020F070 *);
void TCheckRoomSequence__sub_8020F070(TCheckRoomSequence_8020F070 *self);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int TKeyBoardControl__sub_801A66B8(void *);
void *__nw__7TObjectFUl(u32);
void *TShopDeleteItemWindow__ct(void *, s32, void *, s32);
void TCheckRoomSequence__sub_8020F188(u8 *arg0);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
extern void *tl_05;
void TCheckRoomSequence__sub_8020F268(Seq_8020F268 *self);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int TKeyBoardControl__sub_801A66B8(void *);
void *__nw__7TObjectFUl(u32);
void *TShopGetItemWindow__ct(void *, s32, void *, s32);
void TCheckRoomSequence__sub_8020F188(u8 *arg0);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
extern void *tl_05;
void TCheckRoomSequence__sub_8020F2D8(Seq_8020F2D8 *self);
extern s32 lbl_805D6160;
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern s32 TCheckRoomSequence__data_805D616C;
extern s32 TCheckRoomSequence__data_80513DB8[];
void TCheckRoomSequence__sub_80210810(void);
extern s32 lbl_805D6160;
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern s32 TCheckRoomSequence__data_805D616C;
extern s32 TCheckRoomSequence__data_80513DB8[];
void TCheckRoomSequence__sub_80210860(void);
extern s32 lbl_80513DA8[];
s32 TCheckRoomSequence__sub_80210CD0(s32 v, s32 i);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void TCheckRoomSequence__sub_8020F0F0(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
void TCheckRoomSequence__sub_8020F1E0(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011160(int, int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TCheckRoomSequence__sub_80210CD0(s32 v, s32 i);
M2C_UNK TCheckRoomSequence__sub_8021118C(int);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
s32 get_room_data__18TCheckRoomSequenceFi(int);
int TShopWindowBase__sub_8022397C(void*);
void TWindow__close(TWin_8020F070 *);
M2C_UNK set_entry_field_20__15TWindowMainMenuFii(int, int);
void TCheckRoomSequence__sub_8020F348(u8 *arg0);
M2C_UNK TObjPlayer__sub_80011138(int, int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TCheckRoomSequence__sub_80210D1C(s32 v, s32 i);
M2C_UNK TCheckRoomSequence__sub_8021118C(int);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
s32 get_room_data__18TCheckRoomSequenceFi(int);
int TShopWindowBase__sub_8022397C(void*);
void TWindow__close(TWin_8020F070 *);
M2C_UNK set_entry_field_20__15TWindowMainMenuFii(int, int);
void TCheckRoomSequence__sub_8020F600(u8 *arg0);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TCheckRoomSequence__sub_802114D4(u8 *arg0, u8 *arg1);
extern Rec_80211034 *lbl_80513D88[];
u8 TCheckRoomSequence__sub_80211574(u8 *arg0);
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self);
void copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
void TCheckRoomSequence__sub_80210904(s32 slot);
M2C_UNK queue_destruction__7TObjectFv(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK TCheckRoomSequence__sub_8021118C(int);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
int TShopWindowBase__sub_8022397C(void*);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void TCheckRoomSequence__vt11(u8 *arg0);
}

extern "C" {

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TCheckRoomSequence__sub_8020F1DC(void);
void TCheckRoomSequence__sub_802100F8(void);
void TCheckRoomSequence__sub_802100FC(void);
void TCheckRoomSequence__vt10(void* p);
void TShopWindowBase__sub_802115F0(void);
s32 check_room_ready__18TCheckRoomSequenceFv(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
void init_check_params__18TCheckRoomSequenceFUi(u32 arg0);
int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p);
int TCheckRoomSequence__sub_80211210(void);
s32 TLobby__sub_8030A7B0();
int TShopWindowBase__sub_8022397C(void*);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 is_not_split_screen__13TRaderMapCoreFv();
void reset_counter_64__6TLobbyFPv(void* p);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

s32 check_room_ready__18TCheckRoomSequenceFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        return 1;
    }
    return (u32)__cntlzw(TLobby__sub_8030A7B0()) >> 5;
}

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F070(TCheckRoomSequence_8020F070 *self) {
    if (self->win) {
        TWindow__close(self->win);
        self->win = 0;
    }
}
#pragma pop

void init_check_params__18TCheckRoomSequenceFUi(u32 arg0) {
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    if (arg0 != 0U) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F0F0(u8 *arg0) {
    if (arg0 != NULL) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
    }
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
    }
}
#pragma pop

void init_check__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

void TCheckRoomSequence__sub_8020F188(u8 *arg0) {
    if (arg0 != NULL) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (2));
    }
}

void TCheckRoomSequence__sub_8020F1DC(void) {  }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F1E0(u8 *arg0) {
    if ((((VObj_18_f96e2e *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *) (arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *) (arg0)) != 0))) {
        ((VObj_18_f96e2e *)(arg0))->m4(TCheckRoomSequence__data_805D6164, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (TCheckRoomSequence__data_805D6168)));
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F268(Seq_8020F268 *self) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != 0) {
        o = TShopDeleteItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    ((Obj_8020F268 *)o)->cb0 = TCheckRoomSequence__sub_8020F188;
    ((Obj_8020F268 *)o)->cb1 = init_check__18TCheckRoomSequenceFUi;
    TKeyBoardControl__sub_801A66B8(o);
    set_field_20__12TQuestListVMFPvi(self, (void*)0x11);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F2D8(Seq_8020F2D8 *self) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != 0) {
        o = TShopGetItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    ((Obj_8020F2D8 *)o)->cb0 = TCheckRoomSequence__sub_8020F188;
    ((Obj_8020F2D8 *)o)->cb1 = init_check__18TCheckRoomSequenceFUi;
    TKeyBoardControl__sub_801A66B8(o);
    set_field_20__12TQuestListVMFPvi(self, (void*)0x11);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F348(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__18TWindowInputNumberFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        temp_r31 = get_result__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        temp_r3 = ((s32)TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        TCheckRoomSequence__sub_80210CD0((s32)((int) (temp_r31)), (s32)((int) (temp_r3)));
        TObjPlayer__sub_80011160((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (temp_r31));
        TCheckRoomSequence__sub_8021118C((int) (temp_r3));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            set_entry_field_20__15TWindowMainMenuFii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (int) (get_room_data__18TCheckRoomSequenceFi((int) (temp_r3))));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0xA)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F600(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__18TWindowInputNumberFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        temp_r31 = get_result__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        temp_r3 = ((s32)TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        TCheckRoomSequence__sub_80210D1C((s32)((int) (temp_r31)), (s32)((int) (temp_r3)));
        TObjPlayer__sub_80011138((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (temp_r31));
        TCheckRoomSequence__sub_8021118C((int) (temp_r3));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            set_entry_field_20__15TWindowMainMenuFii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (int) (get_room_data__18TCheckRoomSequenceFi((int) (temp_r3))));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (3)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
}
#pragma pop

int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (void*)(19)); }

void TCheckRoomSequence__sub_802100F8(void) {  }
void TCheckRoomSequence__sub_802100FC(void) {  }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__vt11(u8 *arg0) {
    if ((((VObj_18_8d1630 *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *) (arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *) (arg0)) != 0)) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) == 0)) {
        TCheckRoomSequence__sub_8021118C(TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        close_if_single_screen__13TShopSequenceFv((void *) (arg0));
        close_window__13TShopSequenceFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

void TCheckRoomSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); TShopWindowBase__sub_8022397C(p); TCheckRoomSequence__sub_80211210(); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210810(void) {
    lbl_805D6160 = 0;
    TCheckRoomSequence__data_805D6164 = 0;
    TCheckRoomSequence__data_805D6168 = 0;
    TCheckRoomSequence__data_805D616C = 0;
    for (s32 i = 0; i < 4; i++) {
        TCheckRoomSequence__data_80513DB8[i] = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210860(void) {
    lbl_805D6160 = 0;
    TCheckRoomSequence__data_805D6164 = 0;
    TCheckRoomSequence__data_805D6168 = 0;
    TCheckRoomSequence__data_805D616C = 0;
    for (s32 i = 0; i < 4; i++) {
        TCheckRoomSequence__data_80513DB8[i] = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
u8 TCheckRoomSequence__sub_802108B0(s32 i) {
    return lbl_80513D98[i] <= 0xc7;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 TCheckRoomSequence__sub_802108E0(s32 i) {
    return 999999 - lbl_80513DA8[i];
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210904(s32 slot) {
    u8 *a;
    u8 *b;
    u8 *base;
    base = (u8 *)((Rec_80210904 * *)&lbl_80513D88)[slot];
    for (a = base; a < base + 0x12A8; a += 0x18) {
        if (((s32 (*)(u8 *))TCheckRoomSequence__sub_80211574)(a) != 0) {
            for (b = a + 0x18; b < base + 0x12C0; b += 0x18) {
                if (((s32 (*)(u8 *))TCheckRoomSequence__sub_80211574)(b) == 0) {
                    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(a, b);
                    TCheckRoomSequence__sub_80211408((Obj_80211408 *)(b));
                    break;
                }
            }
        }
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 TCheckRoomSequence__sub_80210CD0(s32 v, s32 i) {
    if (lbl_80513DA8[i] < v) {
        return 0;
    }
    lbl_80513DA8[i] -= v;
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 TCheckRoomSequence__sub_80210D1C(s32 v, s32 i) {
    lbl_80513DA8[i] += v;
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 TCheckRoomSequence__sub_80211034(s32 idx, void *data, s32 slot) {
    Rec_80211034 *recs = lbl_80513D88[slot];
    if (idx > 199) {
        return 0;
    }
    if (((s32 (*)(u8 *))TCheckRoomSequence__sub_80211574)((u8 *)&recs[idx]) != 0) {
        return 0;
    }
    copy_data__18TCheckRoomSequenceFPvPv(&recs[idx], data);
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self) {
    init__9TItemDataFv(self);
    self->a = 0;
    self->b = 0;
}
#pragma pop

void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1) { *(unsigned char*)(a1) = *(unsigned char*)(p); *(unsigned char*)((char*)a1 + 0x1) = *(unsigned char*)((char*)p + 0x1); *(unsigned char*)((char*)a1 + 0x2) = *(unsigned char*)((char*)p + 0x2); *(unsigned char*)((char*)a1 + 0x3) = *(unsigned char*)((char*)p + 0x3); *(unsigned char*)((char*)a1 + 0x4) = *(unsigned char*)((char*)p + 0x4); *(unsigned char*)((char*)a1 + 0x5) = *(unsigned char*)((char*)p + 0x5); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x6, (char*)p + 0x6); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x8, (char*)p + 0x8); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0xa, (char*)p + 0xa); *(void**)((char*)a1 + 0xc) = *(void**)((char*)p + 0xc); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x10); }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_802114D4(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 6)), (void*)((void *) (arg1 + 6)));
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 8)), (void*)((void *) (arg1 + 8)));
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 0xA)), (void*)((void *) (arg1 + 0xA)));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x14) = 1;
    M2C_FIELD(arg0, s16 *, 0x16) = 1;
}
#pragma pop

u8 TCheckRoomSequence__sub_80211574(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x16) == 0);
}

#pragma push
#pragma optimization_level 1
void TAdSinglePlyChrSelectGC__sub_80211584(Obj_80211584 *self) {
    init__9TItemDataFv(self);
    self->a = 0;
    self->b = 0;
}
#pragma pop

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p) { TAdSinglePlyChrSelectGC__sub_80211584((Obj_80211584 *)((void*)(p))); return p; }

void TShopWindowBase__sub_802115F0(void) {  }

}
