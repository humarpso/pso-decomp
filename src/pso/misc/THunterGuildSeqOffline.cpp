#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void THunterGuildSeqOffline__vt10(void* p);

int set_field_20__12TQuestListVMFPvi(void*, void*);
int create_instance__19THunterGuildWarningFi(void*);
int fn_80223480(void*);
int restore_player_state__13TShopSequenceFPv(void*);

void THunterGuildSeqOffline__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
#else
#if PSO_CLASS_PACKAGE == 0x800F8820
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *THunterGuildSeqOffline__sub_800F8820(void *arg0, s16 arg1);
void destroy_task_object__12TBoss3VoloptFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804999D0[];

void *THunterGuildSeqOffline__sub_800F8820(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999D0;
        destroy_task_object__12TBoss3VoloptFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800F8878
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__22THunterGuildSeqOfflineFPvPvPv(void *arg0, void *arg1, void *arg2);
void init_object__12TBoss3VoloptFPvPv(void *, void *);

extern void *tl_fade;
extern const f32 lbl_805DA8E8;
extern M2C_UNK lbl_804999D0[];

void *init__22THunterGuildSeqOfflineFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999D0;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DA8E8;
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80211FEC
#include "types.h"

extern "C" {

int THunterGuildSeqOffline__sub_80211FEC(int a0);

    extern int lbl_80513E70[];
int THunterGuildSeqOffline__sub_80211FEC(int a0) {  return lbl_80513E70[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212000
#include "types.h"

extern "C" {

int THunterGuildSeqOffline__sub_80212000(int a0);

    extern int lbl_80513E60[];
int THunterGuildSeqOffline__sub_80212000(int a0) {  return lbl_80513E60[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212014
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__22THunterGuildSeqOfflineFPv(void *arg0);
void *THunterGuildSeqOffline__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = THunterGuildSeqOffline__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212060
#include "types.h"

extern "C" {

int THunterGuildSeqOffline__sub_80212060(int a0);

    extern int THunterGuildSeqOffline__data_80513DD8[];
int THunterGuildSeqOffline__sub_80212060(int a0) {  return THunterGuildSeqOffline__data_80513DD8[a0]; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021250C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_close__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_8021250C { char pad[0x18]; };
struct VObj_8021250C : Base_8021250C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_8021250C *THunterGuildSeqOffline__data_805D6188;

void set_state_close__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(0xC, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 0;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212564
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_4__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80212564 { char pad[0x18]; };
struct VObj_80212564 : Base_80212564 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212564 *THunterGuildSeqOffline__data_805D6188;

void set_state_4__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 4;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802125BC
#include "types.h"
struct Base_802125BC { char pad[0x18]; };
struct VObj_802125BC : Base_802125BC {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

void handle_click__22THunterGuildSeqOfflineFPv(void *arg0);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int set_field_20__12TQuestListVMFPvi(void *, int);

void handle_click__22THunterGuildSeqOfflineFPv(void *arg0) {
    VObj_802125BC *o = (VObj_802125BC *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212644
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_3__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80212644 { char pad[0x18]; };
struct VObj_80212644 : Base_80212644 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212644 *THunterGuildSeqOffline__data_805D6188;

void set_state_3__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 3;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021269C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_quest_list__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(s32, M2C_UNK);

extern s32 THunterGuildSeqOffline__data_805D6188;

void init_quest_list__22THunterGuildSeqOfflineFv(void) {
    set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 9);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802126C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_close__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_802126C4 { char pad[0x18]; };
struct VObj_802126C4 : Base_802126C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern VObj_802126C4 *THunterGuildSeqOffline__data_805D6188;

void notify_close__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(0x19, 1);
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 4);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021277C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_close2__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_8021277C { char pad[0x18]; };
struct VObj_8021277C : Base_8021277C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_8021277C *THunterGuildSeqOffline__data_805D6188;

void set_state_close2__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(0xC, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 0;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802127D4
#include "types.h"

extern "C" {

void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_5__22THunterGuildSeqOfflineFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 5; TKeyBoardControl__sub_8000F950(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212800
#include "types.h"

extern "C" {

void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_1__22THunterGuildSeqOfflineFv(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 1; TKeyBoardControl__sub_8000F950(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021282C
#include "types.h"

extern "C" {

void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void);
int TKeyBoardControl__sub_8000F950(void);
int clear_counter__6TLobbyFv(void);

    extern int evt2_random_enemies_mode;
void set_enemy_mode_0__22THunterGuildSeqOfflineFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212858
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_close__22THunterGuildSeqOfflineFv(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80212858 { char pad[0x18]; };
struct VObj_80212858 : Base_80212858 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212858 *THunterGuildSeqOffline__data_805D6188;

void request_close__22THunterGuildSeqOfflineFv(void) {
    if (THunterGuildSeqOffline__data_805D6188 != NULL) {
        THunterGuildSeqOffline__data_805D6188->m7(6, 1);
        M2C_FIELD(THunterGuildSeqOffline__data_805D6188, s32 *, 0x38) = 2;
        set_field_20__12TQuestListVMFPvi(THunterGuildSeqOffline__data_805D6188, 5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212CE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
};

extern "C" {

void handle_window_input__22THunterGuildSeqOfflineFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void handle_window_input__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x34);

    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 5);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212D9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(int, int);
    virtual s32 m8();
};

extern "C" {

void handle_select__22THunterGuildSeqOfflineFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void handle_select__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x34);
    if (p != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 1) {
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 5);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80212E50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802136A4_80212e50 { u8 pad[0x18]; };
struct VObj_802136A4_80212e50 : Base_802136A4_80212e50 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9(s32, s32);
    virtual s32 m10();
};

extern "C" {

void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 set_position_xy(s32, f32, f32);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);

void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((((VObj_802136A4_80212e50 *)arg0)->m10() != 0)
        && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x2C) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4_80212e50 *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 6);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802133C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802133C4 { char pad[0x18]; };
struct VObj_802133C4 : Base_802133C4 {
    virtual void m0(); virtual void m1();
};

extern "C" {

void notify_quest_thread__22THunterGuildSeqOfflineFv(void);
int THunterGuildSeqOffline__sub_80213410(void* p);
int THunterGuildSeqOffline__sub_80213430(void*);
void *create__12TQuestThreadFi(s32);

extern s32 THunterGuildSeqOffline__data_80513DC8[];

void notify_quest_thread__22THunterGuildSeqOfflineFv(void) {
    s32 v = THunterGuildSeqOffline__data_80513DC8[3];
    if (v != -1) {
        void *obj = create__12TQuestThreadFi(v);
        if (obj != NULL) {
            ((VObj_802133C4 *)obj)->m1();
        }
    }
}

int THunterGuildSeqOffline__sub_80213410(void* p) { return THunterGuildSeqOffline__sub_80213430(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213458
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 THunterGuildSeqOffline__sub_80213458(void);

extern void *lbl_805D61BC;

s32 THunterGuildSeqOffline__sub_80213458(void) {
    if ((void *) lbl_805D61BC != NULL) {
        return M2C_FIELD(lbl_805D61BC, s32 *, 0x20);
    }
    return -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802136A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802136A4 { u8 pad[0x18]; };
struct VObj_802136A4 : Base_802136A4 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9(s32, s32);
    virtual s32 m10();
};

extern "C" {

void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 set_position_xy(s32, f32, f32);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);

void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((((VObj_802136A4 *)arg0)->m10() != 0)
        && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x3C) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x3C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x3C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4 *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 7);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213788
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80213788 { char pad[0x18]; };
struct V_A_80213788 : Base_A_80213788 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_8021383c { char pad[0x18]; };
struct V_A_8021383c : public Base_A_8021383c {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m7(int, int);
    virtual s32 m8();
};
struct Base_802138F0 { char pad[0x18]; };
struct VObj_802138F0 : Base_802138F0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

extern "C" {

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80213788 *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x38);
    if (p != 0) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0) {
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_8021383c *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_8021383c *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    if ((((VObj_802138F0 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_802138F0 *)arg0)->m7(0xC, 1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 0xC);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213B98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK restore_player_state__13TShopSequenceFPv();
s32 THunterGuildSeqOffline__sub_8022350C(void *, M2C_UNK);

void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    M2C_FIELD(arg0, s32 *, 0x2C) = THunterGuildSeqOffline__sub_8022350C(arg0, 1);
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213E64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void THunterGuildSeqOffline__sub_80213E64(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80213E64 { char pad[0x18]; };
struct VObj_80213E64 : Base_80213E64 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80213E64 *lbl_805D61B8;

void THunterGuildSeqOffline__sub_80213E64(void) {
    if (lbl_805D61B8 != NULL) {
        lbl_805D61B8->m7(6, 1);
        set_field_20__12TQuestListVMFPvi(lbl_805D61B8, 0xC);
        M2C_FIELD(lbl_805D61B8, s32 *, 0x34) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213EBC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void THunterGuildSeqOffline__sub_80213EBC(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

struct Base_80213EBC { char pad[0x18]; };
struct VObj_80213EBC : Base_80213EBC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80213EBC *lbl_805D61B8;

void THunterGuildSeqOffline__sub_80213EBC(void) {
    if (lbl_805D61B8 != NULL) {
        lbl_805D61B8->m7(0xC, 1);
        set_field_20__12TQuestListVMFPvi(lbl_805D61B8, 0xA);
        M2C_FIELD(lbl_805D61B8, s32 *, 0x34) = 2;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80213F78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80213F78 { char pad[0x18]; };
struct VObj_80213F78 : Base_80213F78 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void THunterGuildSeqOffline__sub_80213F78(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

extern struct VObj_80213F78 *lbl_805D61B8;

void THunterGuildSeqOffline__sub_80213F78(void) {
    if (lbl_805D61B8 != NULL) {
        lbl_805D61B8->m7(0xC, 1);
        set_field_20__12TQuestListVMFPvi(lbl_805D61B8, 9);
        M2C_FIELD(lbl_805D61B8, s32 *, 0x34) = 0;
    }
}

}
#endif
#endif
