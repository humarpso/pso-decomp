#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_80218570 { char pad[0x18]; };
struct VObj18_80218570 : VBase18_80218570 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vf24(int, int);
};

struct VBase_18_a70a39 { char pad[0x18]; };

struct VObj_18_a70a39 : VBase_18_a70a39 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32, M2C_UNK);
};

struct RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20 { char value[0xE]; };
typedef char RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20_size[sizeof(RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20) == 0xE ? 1 : -1];

struct RecoveredGlobal_8033B9C4_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80219DE0___vt__12TQuestListVM {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Rec_80218AD4 { s32 num; s32 slot; u8 rest[0xbc - 8]; };

struct VBase_80218AD4 { char pad[0x18]; };

struct VM_80218AD4 : VBase_80218AD4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
    virtual void m7(int a, int b);
};

struct QL_80218AD4 {
    u8 pad[0xd8];
    Rec_80218AD4 recs[1];
};

struct Rec_802193F0 { u8 pad[0x35]; char name[0xbc - 0x35]; };

struct QL_802193F0 { Rec_802193F0 recs[48]; u8 pad[0x2368 - 48 * 0xbc]; s32 count; };

struct Ent_802193F0 { u8 pad[0x10]; s8 a; s8 b; s8 c; u8 pad13; char name[1]; };

struct VBase_18_80218D40 { char pad[0x18]; };

struct VObj_80218D40 : VBase_18_80218D40 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
};

struct Pair_80218D40 { s32 a; s32 b; };

extern "C" {
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
extern M2C_UNK TQuestListVM__data_8044BF20[];
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern RecoveredGlobal_8033B9C4_lbl_80513910 lbl_80512D00;
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
extern M2C_UNK TQuestListVM__data_8044BF20[];
extern int evt2_random_enemies_mode;
void TQuestListVM__sub_802186A8(void);
u8 * __ct__15TShopWindowBaseFv(void *);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D3690;
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern s32 TQuestListVM__data_805D6208;
extern s32 TQuestListVM__data_805D620C;
extern s32 lbl_805D6210;
u8 *TQuestListVM__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 update_load_status__12TQuestListVMFPv(void *arg0);
M2C_UNK handle_click__12TQuestListVMFPv(void *arg0);
M2C_UNK invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0);
M2C_UNK close_and_destroy__12TQuestListVMFPv(void *arg0);
M2C_UNK close__12TQuestListVMFPv(void *arg0);
M2C_UNK TQuestListVM__sub_8021884C(void *);
void update_close__12TQuestListVMFPv(void *arg0);
M2C_UNK TQuestListVM__sub_80218918(void *);
M2C_UNK TQuestListVM__sub_80218BBC(void *);
M2C_UNK TQuestListVM__sub_80218E94(void *);
M2C_UNK TQuestListVM__sub_80219064(void *);
M2C_UNK quest_vm_load(void *arg0);
M2C_UNK TQuestListVM__sub_8021916C(void *);
M2C_UNK TQuestListVM__sub_8021924C(void *);
M2C_UNK TQuestListVM__sub_802194BC(void *);
M2C_UNK TQuestListVM__sub_8021969C(void *);
M2C_UNK TQuestListVM__sub_80219748(void *);
M2C_UNK TQuestListVM__sub_80219A9C(u8 *arg0);
M2C_UNK init__12TQuestListVMFPv(void* p);
void TQuestListVM__vt9(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void close_windows__12TQuestListVMFPv(void *arg0);
int memset(void*, void*, void*);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 load_player_slot__23TAdSinglePlyChrSelectGCFPvii(s32, char *, s32);
s32 select_cursor_entry__6TLobbyFPv(u32);
int sprintf(char *, const char *, ...);
extern char lbl_8044BEE8[];
extern char lbl_8044BF50[];
void TQuestListVM__sub_80218AD4(u8 *arg0);
s32 strcmp(const char *, const char *);
extern s32 lbl_805D5544;
s32 TQuestListVM__sub_802193F0(QL_802193F0 *q, Ent_802193F0 *e);
int obj_getField1c(int);
s32 get_camera_id__11TCameraCtrlFv();
int set_field_20__12TQuestListVMFPvi(void*, void*);
f32 get_scale__15TShopWindowBaseFv(void *);
void set_position_xy(u32, f32, f32);
void set_field_1c__6TLobbyFPvf(u32, f32);
u32 TShopJudgmentItemWindow__sub_80266388(int, u16, int, int);
void send_and_handle__6TLobbyFPvii(u32, void *, int);
u32 TLobby__sub_80269CC0(int, Pair_80218D40 *, int, u16);
int TWindowSubComCard__sub_8026CBB8(int);
extern Pair_80218D40 lbl_8044BF48[];
extern s32 TQuestListVM__data_805D6200;
extern const f32 lbl_805DC6B8;
extern const f32 lbl_805DC6BC;
void TQuestListVM__sub_80218D40(u8 *arg0);
}

extern "C" {

struct Base_802186E4_80218570 { char pad[0x18]; };
struct VObj_802186E4_80218570 : Base_802186E4_80218570 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();
    virtual void m7(int a, int b);
    virtual int m8();
};

void TQuestVmDownLoadServer__sub_80219EC4(void* p);
void *__dt__12TQuestListVMFv(void *arg0, s16 arg1);
void close_windows__12TQuestListVMFPv(void *arg0);
void set_enemy_mode_3__12TQuestListVMFv(void);
void update_close__12TQuestListVMFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);
int TKeyBoardControl__sub_8000F950(void);
M2C_UNK TLobby__sub_8001EDF4(M2C_UNK *);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
s32 get_status_flag__6TLobbyFPv(void *);
int memset(void*, void*, void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset__12TQuestListVMFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
int set_enemy_mode_flag__6TLobbyFv(void);
int set_field_20__12TQuestListVMFPvi(void*, void*);

s32 update_load_status__12TQuestListVMFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r30;

    var_r30 = 0;
    M2C_FIELD(arg0, s32 *, 0x23A4) = 0;
    do {
        if (TAdPlayerLoadGC__sub_801E1E38(var_r30) != 0) {
            M2C_FIELD(arg0, s32 *, 0x23A4) = (s32) (M2C_FIELD(arg0, s32 *, 0x23A4) | (1 << var_r30));
        }
        var_r30 += 1;
    } while (var_r30 < 2);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x23A4);
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x23A8)) {
        M2C_FIELD(arg0, s32 *, 0x23A8) = temp_r3;
        return 1;
    }
    return 0;
}

void close_windows__12TQuestListVMFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
        M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
        M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
        M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
        M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
    }
}

    extern int evt2_random_enemies_mode;
void set_enemy_mode_3__12TQuestListVMFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 3; TKeyBoardControl__sub_8000F950(); }

void TQuestListVM__sub_802186A8(void) {
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EE48((M2C_UNK *)((s32) &TQuestListVM__data_8044BF20));
    }
    (*(s32 *)&evt2_random_enemies_mode) = 0;
}

M2C_UNK handle_click__12TQuestListVMFPv(void *arg0) {
    VObj_802186E4_80218570 *obj = (VObj_802186E4_80218570 *) arg0;
    if (obj->m8() != 0) {
        obj->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x23B4)));
    }
}

M2C_UNK invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23C0);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

M2C_UNK close_and_destroy__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23BC);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EE48(TQuestListVM__data_8044BF20);
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

M2C_UNK close__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23B8);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    if (TLobby__sub_8001EEF4() == 0) {
        TLobby__sub_8001EE48(TQuestListVM__data_8044BF20);
    }
    reset__12TQuestListVMFv();
    queue_destruction__7TObjectFv(arg0);
}

M2C_UNK TQuestListVM__sub_8021884C(void * _w0) {  }

void update_close__12TQuestListVMFPv(void *arg0) {
    void *p;

    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_flag_bit2__6TLobbyFPv(p) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x2374));
            TQuestVmDownLoadServer__sub_80219EC4((void*)(M2C_FIELD(arg0, void **, 0x2374)));
        }
        ((VObj18_80218570 *) arg0)->vf24(0x19, 1);
        close_windows__12TQuestListVMFPv((void *)(arg0));
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(5));
        return;
    }
    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_status_flag__6TLobbyFPv(p) != 0)) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x11));
    }
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

void TQuestListVM__sub_80218AD4(u8 *arg0) {
    char buf[0xd];
    s32 i;
    QL_80218AD4 *q = (QL_80218AD4 *)arg0;
    memset(buf, (void *)0, (void *)0xd);
    if (*(u32 *)(arg0 + 0x2374) != 0 && *(u32 *)(arg0 + 0x2388) != 0) {
        i = select_cursor_entry__6TLobbyFPv(*(u32 *)(arg0 + 0x2374));
        if (TAdPlayerLoadGC__sub_801E1B50(q->recs[i].slot) == 0) {
            sprintf(buf, lbl_8044BF50, lbl_8044BEE8, q->recs[i].num + 1);
            if (load_player_slot__23TAdSinglePlyChrSelectGCFPvii(q->recs[i].slot, buf, *(s32 *)(arg0 + 0x2388)) == 0) {
                set_field_20__12TQuestListVMFPvi(arg0, (void *)0xc);
                return;
            }
            ((VM_80218AD4 *)arg0)->m7(0x19, 1);
            close_windows__12TQuestListVMFPv(arg0);
            set_field_20__12TQuestListVMFPvi(arg0, (void *)5);
        }
    }
}

void TQuestListVM__sub_80218D40(u8 *arg0) {
    if (*(u32 *)(arg0 + 0x2380) == 0U) {
        Pair_80218D40 sp8 = lbl_8044BF48[0];
        u16 id = obj_getField1c(*(s32 *)(arg0 + 0x24));
        *(u32 *)(arg0 + 0x2380) = TLobby__sub_80269CC0(TWindowSubComCard__sub_8026CBB8(0x2E), &sp8, 1, id);
        send_and_handle__6TLobbyFPvii(*(u32 *)(arg0 + 0x2380), (void *)(TQuestListVM__data_805D6200 + 0xB4), 1);
        set_field_1c__6TLobbyFPvf(*(u32 *)(arg0 + 0x2380), lbl_805DC6B8);
        if (get_camera_id__11TCameraCtrlFv() >= 2) {
            set_position_xy(*(u32 *)(arg0 + 0x2380), lbl_805DC6BC, lbl_805DC6BC);
        }
    }
    if (*(u32 *)(arg0 + 0x2380) != 0U) {
        if (*(s32 *)(arg0 + 0x2370) != 0xA) {
            set_field_20__12TQuestListVMFPvi(arg0, (void *)*(s32 *)(arg0 + 0x2370));
            return;
        }
        {
            u16 id = obj_getField1c(*(s32 *)(arg0 + 0x24));
            *(u32 *)(arg0 + 0x2378) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), id, 0, 0);
        }
        set_position_xy(*(u32 *)(arg0 + 0x2378), get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
        ((VObj_80218D40 *)(arg0))->m7(5, 1);
        set_field_20__12TQuestListVMFPvi(arg0, (void *)*(s32 *)(arg0 + 0x2370));
    }
}

M2C_UNK quest_vm_load(void *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = TLobby__sub_8001EEFC(TQuestListVM__data_8044BF20);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x2370)));
    }
}

s32 TQuestListVM__sub_802193F0(QL_802193F0 *q, Ent_802193F0 *e) {
    s32 i;
    if (e->a == -1 || e->c == -1) {
        return 0;
    }
    if (e->a != lbl_805D5544) {
        return 0;
    }
    if (e->b != 0 && e->b != 2) {
        return 0;
    }
    for (i = 0; i < q->count; i++) {
        if (strcmp(q->recs[i].name, e->name) == 0) {
            return 0;
        }
    }
    return 1;
}

M2C_UNK TQuestListVM__sub_80219A9C(u8 *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = TLobby__sub_8001EEFC((M2C_UNK *)((s32) &(*(RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20 *)&TQuestListVM__data_8044BF20).value));
        TQuestListVM__data_805D6200 = M2C_FIELD(arg0, s32 *, 0x2384);
        TQuestListVM__data_805D6204 = 0x40000;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
        ((VObj_18_a70a39 *)(arg0))->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x3F), 1);
    }
}

M2C_UNK init__12TQuestListVMFPv(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern M2C_UNK TQuestListVM__data_8044BF20[];
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D6210;

void TQuestListVM__vt9(u8 *arg0) {
    u32 temp_r0;
    if (update_load_status__12TQuestListVMFPv((void *)(arg0)) != 0) {
        ((VObj_18_a70a39 *)(arg0))->m5(TQuestVmDownLoadServer__sub_8006EF6C((s32)((int) (0x44))), 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0x12)));
    }
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        init__12TQuestListVMFPv((void*)((void *) (arg0)));
        return;
    case 1:
        TQuestListVM__sub_80219A9C((u8 *)((void *) (arg0)));
        return;
    case 2:
        TQuestListVM__sub_80219748((void *) (arg0));
        return;
    case 3:
        TQuestListVM__sub_8021969C((void *) (arg0));
        return;
    case 4:
        TQuestListVM__sub_802194BC((void *) (arg0));
        return;
    case 5:
        TQuestListVM__sub_8021924C((void *) (arg0));
        return;
    case 6:
        TQuestListVM__sub_8021916C((void *) (arg0));
        return;
    case 7:
        quest_vm_load((void *) (arg0));
        return;
    case 8:
        TQuestListVM__sub_80219064((void *) (arg0));
        return;
    case 9:
        TQuestListVM__sub_80218E94((void *) (arg0));
        return;
    case 15:
        TQuestListVM__sub_80218D40((u8 *)((void *) (arg0)));
        return;
    case 10:
        TQuestListVM__sub_80218BBC((void *) (arg0));
        return;
    case 11:
        TQuestListVM__sub_80218AD4((u8 *)((void *) (arg0)));
        return;
    case 12:
        TQuestListVM__sub_80218918((void *) (arg0));
        return;
    case 13:
        update_close__12TQuestListVMFPv((void *) (arg0));
        return;
    case 14:
        TQuestListVM__sub_8021884C((void *)((void *) (arg0)));
        return;
    case 16:
        close__12TQuestListVMFPv((void *) (arg0));
        return;
    case 18:
        close_and_destroy__12TQuestListVMFPv((void *) (arg0));
        return;
    case 17:
        invoke_callback_and_queue_destruction__12TQuestListVMFPv((void *) (arg0));
        return;
    case 20:
        handle_click__12TQuestListVMFPv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__12TQuestListVMFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **) ((s8 *) arg0 + 0x18) = __vt__12TQuestListVM;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
            M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
            M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
            M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2388) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x2388));
            M2C_FIELD(arg0, u32 *, 0x2388) = 0U;
        }
        lbl_805D6210 = 0;
        TLobby__sub_8001EDF4(TQuestListVM__data_8044BF20);
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80219DE0___vt__12TQuestListVM_size[sizeof(RecoveredGlobal_80219DE0___vt__12TQuestListVM) == 0x30 ? 1 : -1];
u8 *TQuestListVM__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80219DE0___vt__12TQuestListVM *)&__vt__12TQuestListVM).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3690;
    M2C_FIELD(arg0, s32 *, 0x2368) = 0;
    M2C_FIELD(arg0, s32 *, 0x2370) = 0;
    M2C_FIELD(arg0, s32 *, 0x2374) = 0;
    M2C_FIELD(arg0, s32 *, 0x237C) = 0;
    M2C_FIELD(arg0, s32 *, 0x2380) = 0;
    M2C_FIELD(arg0, s32 *, 0x2378) = 0;
    M2C_FIELD(arg0, s32 *, 0x2384) = 0;
    M2C_FIELD(arg0, s32 *, 0x2388) = alloc__22TQuestVmDownLoadServerFPv((int) ((void *)0x20000));
    M2C_FIELD(arg0, s32 *, 0x2390) = 0;
    TQuestListVM__data_805D6200 = 0;
    TQuestListVM__data_805D6204 = 0;
    TQuestListVM__data_805D6208 = 0;
    TQuestListVM__data_805D620C = 0;
    M2C_FIELD(arg0, s32 *, 0x2398) = 4;
    M2C_FIELD(arg0, s32 *, 0x239C) = 0;
    M2C_FIELD(arg0, s32 *, 0x23A0) = arg2;
    M2C_FIELD(arg0, s32 *, 0x23B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x23BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x23C0) = 0;
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0)));
    (*(u8 * *)&lbl_805D6210) = arg0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x23A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x23A4) = 0;
    update_load_status__12TQuestListVMFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x23AC) = 0;
    M2C_FIELD(arg0, s32 *, 0x23B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x23B4) = 0;
    return arg0;
}

void TQuestVmDownLoadServer__sub_80219EC4(void* p) { *(u16*)((char*)p + 0x70) |= 0x8; }
typedef char RecoveredGlobal_8033B9C4_lbl_80513910_size[sizeof(RecoveredGlobal_8033B9C4_lbl_80513910) == 0x10 ? 1 : -1];
void TQuestVmDownLoadServer__sub_80219ED4(s32 arg0) {
    M2C_FIELD(&lbl_80512D00.value, s32 *, 4) = arg0;
    M2C_FIELD(&lbl_80512D00.value, s32 *, 0) = arg0;
}

}
