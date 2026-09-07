#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m12();
    virtual s32 m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_8016D714_lbl_80441E24 { char value[0x1A]; };
typedef char RecoveredGlobal_8016D714_lbl_80441E24_size[sizeof(RecoveredGlobal_8016D714_lbl_80441E24) == 0x1A ? 1 : -1];

struct RecoveredGlobal_8016D714_lbl_804B2DD8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016D714_lbl_804B2DD8_size[sizeof(RecoveredGlobal_8016D714_lbl_804B2DD8) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016D7F0___vt__14TOKeyMachine01 { M2C_UNK value; u8 remaining[0x6C]; };

extern "C" {
M2C_UNK TOKeyMachine01__sub_8016D148(void *, int);
void run_task__14TOKeyMachine01Fv(u8 *arg0);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
int alloc_buffer__11TOBoss4RockFPv(void *);
u8 * TLanguage__sub_801E4874(s32);
extern RecoveredGlobal_8016D714_lbl_80441E24 lbl_80441E24;
extern RecoveredGlobal_8016D714_lbl_804B2DD8 lbl_804B2DD8;
extern u32 lbl_805D5A30;
extern s32 *TOKeyMachine01__data_805D5A34;
void TOKeyMachine01__sub_8016D714(void);
s32 get_main_phase(void);
s32 is_split_screen(void);
u8 * TOKey__ct(void *);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern M2C_UNK __vt__14TOKeyMachine01[];
extern s32 lbl_805D305C;
extern u32 lbl_805D5A30;
extern s32 *TOKeyMachine01__data_805D5A34;
extern const f32 lbl_805DB784;
extern const f32 lbl_805DB788;
extern const f32 lbl_805DB794;
extern const f32 lbl_805DB798;
u8 *TOKeyMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1);
void *create__14TOKeyMachine01FPv(void *arg0);
void free_statics__14TOKeyMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void run_task__14TOKeyMachine01Fv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            TOKeyMachine01__sub_8016D148((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            TOKeyMachine01__sub_8016D148((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void *create__14TOKeyMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyMachine01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5A30;
extern s32 *TOKeyMachine01__data_805D5A34;

void free_statics__14TOKeyMachine01Fv(void) {
    if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
        free_if_valid__10TObjPlayerFi(*TOKeyMachine01__data_805D5A34);
        *TOKeyMachine01__data_805D5A34 = 0;
        if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyMachine01__data_805D5A34);
            TOKeyMachine01__data_805D5A34 = NULL;
        }
    }
    if ((u32) lbl_805D5A30 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A30, 1);
        lbl_805D5A30 = 0U;
    }
}

extern M2C_UNK __vt__14TOKeyMachine01[];

void TOKeyMachine01__sub_8016D714(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B2DD8.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5A30) = (unsigned char *) ((void *) var_r0);
    (*(s32 *)&TOKeyMachine01__data_805D5A34) = alloc_buffer__11TOBoss4RockFPv((void *)8);
    M2C_FIELD((*(s32 *)&TOKeyMachine01__data_805D5A34), u8 **, 0) = TLanguage__sub_801E4874((s32) &lbl_80441E24.value);
    M2C_FIELD((*(s32 *)&TOKeyMachine01__data_805D5A34), s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A30), u8 **, 0x42C), s32 *, 0xC);
}

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyMachine01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKeyMachine01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016D7F0___vt__14TOKeyMachine01 *)&__vt__14TOKeyMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D305C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *TOKeyMachine01__data_805D5A34;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A30), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB794;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DB798;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB798;
    if (get_main_phase() != 0xF) {
        if (is_split_screen() == 1) {
            goto block_2;
        }
    } else {
block_2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 2) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
                M2C_FIELD(arg0, s32 *, 0xD0) = 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        }
    }
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB784;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB784;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB784;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DB784;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DB788;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DB788;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DB788;
    return arg0;
}

}
