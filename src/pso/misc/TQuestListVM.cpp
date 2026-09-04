#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_load_status__12TQuestListVMFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1E38(s32);

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

}
#else
#if PSO_CLASS_PACKAGE == 0x80073DC4
#include "types.h"

extern "C" {

int get_status_flag__17TWindowSubComCardFPv(void* p);
void set_field_20__12TQuestListVMFPvi(void* p, s32 v);

void set_field_20__12TQuestListVMFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EAF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_quest_id__12TQuestListVMFPv(u8 *arg0);

s32 get_quest_id__12TQuestListVMFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2B0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007EB00
#include "types.h"

extern "C" {

int get_instance__12TQuestListVMFv(void);
void reset__12TQuestListVMFv(void);

    extern int TQuestListVM__data_805D6200;
int get_instance__12TQuestListVMFv(void) {  return TQuestListVM__data_805D6200; }

    extern int TQuestListVM__data_805D6200;
void reset__12TQuestListVMFv(void) { TQuestListVM__data_805D6200 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F95F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C2FC(M2C_UNK *, void *, s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007C48C(M2C_UNK *, u32);
M2C_UNK TLobby__sub_800F7DAC(void *, s32);
M2C_UNK bswap_32__FPUl(u32 *);
M2C_UNK init_single_player_chr_select__6TLobbyFPv(M2C_UNK *);

u32 decrypt_quest_data__12TQuestListVMFPviiUi(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    M2C_UNK sp10[60];
    u32 spC;
    u32 sp8;

    spC = M2C_FIELD(arg0, u32 *, 0);
    sp8 = M2C_FIELD(arg0, u32 *, 4);
    bswap_32__FPUl(&spC);
    bswap_32__FPUl(&sp8);
    if (spC > arg3) {
        return 0U;
    }
    init_single_player_chr_select__6TLobbyFPv(&sp10[0]);
    TAdSinglePlyChrSelectGC__sub_8007C48C(&sp10[0], sp8);
    TAdSinglePlyChrSelectGC__sub_8007C2FC(&sp10[0], arg0 + 8, arg1 - 8);
    TLobby__sub_800F7DAC(arg0 + 8, arg2);
    return spC;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021845C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021845C { char pad[0x18]; };
struct VObj_8021845C : Base_8021845C {
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
struct Base_802184C8 { char pad[0x18]; };
struct VObj_802184C8 : Base_802184C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80218500 { char pad[0x18]; };
struct VObj_80218500 : Base_80218500 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80218538 { char pad[0x18]; };
struct VObj_80218538 : Base_80218538 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};

extern "C" {

void TQuestListVM__vt4(void *arg0);
void TQuestListVM__vt5(void *arg0);
void TQuestListVM__vt7(void *arg0);
s32 TQuestListVM__vt8(void *arg0);
s32 TShopWindowBase__sub_80223A48(void *);

s32 TQuestListVM__vt8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x23A0);
    if (temp_r3 != NULL) {
        if (((VObj_8021845C *)temp_r3)->m8() == 0) {
            return 0;
        }
        return TShopWindowBase__sub_80223A48(arg0) ? 1 : 0;
    }
    return 1;
}

void TQuestListVM__vt7(void *arg0) {
    struct VObj_802184C8 *o = (struct VObj_802184C8 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m7();
    }
}

void TQuestListVM__vt5(void *arg0) {
    struct VObj_80218500 *o = (struct VObj_80218500 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m5();
    }
}

void TQuestListVM__vt4(void *arg0) {
    struct VObj_80218538 *o = (struct VObj_80218538 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m4();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802185F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__12TQuestListVMFPv(void *arg0);
void set_enemy_mode_3__12TQuestListVMFv(void);
M2C_UNK TWindow__close(void *);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x802186E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_click__12TQuestListVMFPv(void *arg0);
void invoke_callback_and_queue_destruction__12TQuestListVMFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

struct Base_802186E4 { char pad[0x18]; };
struct VObj_802186E4 : Base_802186E4 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4();virtual void m5();virtual void m6();
    virtual void m7(int a, int b);
    virtual int m8();
};

void handle_click__12TQuestListVMFPv(void *arg0) {
    VObj_802186E4 *obj = (VObj_802186E4 *) arg0;
    if (obj->m8() != 0) {
        obj->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x23B4));
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x80218790
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_destroy__12TQuestListVMFPv(void *arg0);
void close__12TQuestListVMFPv(void *arg0);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
s32 TLobby__sub_8001EEF4();
M2C_UNK reset__12TQuestListVMFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021884C
#include "types.h"

extern "C" {

void TQuestListVM__sub_8021884C(void);

void TQuestListVM__sub_8021884C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80218850
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vf24(int, int);
};

extern "C" {

void update_close__12TQuestListVMFPv(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK close_windows__12TQuestListVMFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 get_status_flag__6TLobbyFPv(void *);
s32 get_flag_bit2__6TLobbyFPv(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK TQuestVmDownLoadServer__sub_80219EC4(void *);

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
            TQuestVmDownLoadServer__sub_80219EC4(M2C_FIELD(arg0, void **, 0x2374));
        }
        ((VObj18 *) arg0)->vf24(0x19, 1);
        close_windows__12TQuestListVMFPv(arg0);
        set_field_20__12TQuestListVMFPvi(arg0, 5);
        return;
    }
    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (get_status_flag__6TLobbyFPv(p) != 0)) {
        set_field_20__12TQuestListVMFPvi(arg0, 0x11);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80219B20
#include "types.h"

extern "C" {

void init__12TQuestListVMFPv(void* p);
int set_field_20__12TQuestListVMFPvi(void*, void*);

int memset(void*, void*, void*);

void init__12TQuestListVMFPv(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80219CF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TQuestListVMFv(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
M2C_UNK TLobby__sub_8001EDF4(M2C_UNK *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

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

}
#endif
#endif
