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

extern "C" {
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(M2C_UNK *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
extern M2C_UNK TQuestListVM__data_8044BF20[];
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
void TQuestListVM__sub_80219A9C(u8 *arg0);
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
s32 update_load_status__12TQuestListVMFPv(void *arg0);
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D3690;
extern s32 TQuestListVM__data_805D6200;
extern s32 TQuestListVM__data_805D6204;
extern s32 TQuestListVM__data_805D6208;
extern s32 TQuestListVM__data_805D620C;
extern s32 lbl_805D6210;
u8 *TQuestListVM__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

struct Base_802186E4_80218570 { char pad[0x18]; };
struct VObj_802186E4_80218570 : Base_802186E4_80218570 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();
    virtual void m7(int a, int b);
    virtual int m8();
};

void TQuestListVM__sub_8021884C(void);
void TQuestVmDownLoadServer__sub_80219EC4(void* p);
void *__dt__12TQuestListVMFv(void *arg0, s16 arg1);
void close__12TQuestListVMFPv(void *arg0);
void close_and_destroy__12TQuestListVMFPv(void *arg0);
void close_windows__12TQuestListVMFPv(void *arg0);
void handle_click__12TQuestListVMFPv(void *arg0);
void init__12TQuestListVMFPv(void* p);
void invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0);
void quest_vm_load(void *arg0);
void set_enemy_mode_3__12TQuestListVMFv(void);
void update_close__12TQuestListVMFPv(void *arg0);
s32 update_load_status__12TQuestListVMFPv(void *arg0);
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

void handle_click__12TQuestListVMFPv(void *arg0) {
    VObj_802186E4_80218570 *obj = (VObj_802186E4_80218570 *) arg0;
    if (obj->m8() != 0) {
        obj->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x23B4)));
    }
}

void invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0) {
    M2C_UNK (*temp_r12)();

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x23C0);
    if (temp_r12 != NULL) {
        temp_r12();
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK TQuestListVM__data_8044BF20[];

void close_and_destroy__12TQuestListVMFPv(void *arg0) {
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

void close__12TQuestListVMFPv(void *arg0) {
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

void TQuestListVM__sub_8021884C(void) {  }

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

void quest_vm_load(void *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = TLobby__sub_8001EEFC(TQuestListVM__data_8044BF20);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(M2C_FIELD(arg0, s32 *, 0x2370)));
    }
}

void TQuestListVM__sub_80219A9C(u8 *arg0) {
    if (TLobby__sub_8001EEF4() != 0) {
        M2C_FIELD(arg0, s32 *, 0x2384) = TLobby__sub_8001EEFC((M2C_UNK *)((s32) &(*(RecoveredGlobal_80219A9C_TQuestListVM__data_8044BF20 *)&TQuestListVM__data_8044BF20).value));
        TQuestListVM__data_805D6200 = M2C_FIELD(arg0, s32 *, 0x2384);
        TQuestListVM__data_805D6204 = 0x40000;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
        ((VObj_18_a70a39 *)(arg0))->m5(TQuestVmDownLoadServer__sub_8006EF6C(0x3F), 1);
    }
}

void init__12TQuestListVMFPv(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern M2C_UNK TQuestListVM__data_8044BF20[];
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D6210;

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
