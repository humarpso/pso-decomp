#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
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

struct RecoveredGlobal_8016BF68_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016C010_lbl_80441B4C {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016BC84_lbl_80441ACC {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8016BC84_lbl_804B2B30 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 { M2C_UNK value; u8 remaining[0x6C]; };

struct Obj_8016B9A4 { u8 pad[0x6c]; f32 f; };

extern "C" {
s32 is_split_screen();
s32 TOKey__sub_8016A280(void *);
s32 TOKey__sub_8016A310(void *);
s32 TOKeyCave01__vt13(u8 *arg0);
M2C_UNK TOKeyAncient03__sub_8016B84C(void *, int);
void run_task__14TOKeyAncient03Fv(u8 *arg0);
extern const f32 lbl_805DB718;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB724;
void TOKeyAncient03__vt15(u8 *arg0);
extern const f32 lbl_805DB738;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB744;
void TOKeyCave01__vt15(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt17(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt16(s32 arg0);
u8 *TLobby__sub_80020004(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80441ACC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 lbl_804B2B30;
extern u32 lbl_805D5A10;
extern void *TOKeyAncient03__data_805D5A14;
void TOKeyAncient03__sub_8016BC84(void);
s32 get_main_phase(void);
s32 is_split_screen();
u8 * TOKey__ct(void *);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern M2C_UNK __vt__14TOKeyAncient03[];
extern s32 lbl_805D302C;
extern u32 lbl_805D5A10;
extern void *TOKeyAncient03__data_805D5A14;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB72C;
extern const f32 lbl_805DB730;
u8 *TOKeyAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
extern const f32 lbl_805DB728;
extern const f32 lbl_805DB724;
void TOKeyAncient03__vt14(Obj_8016B9A4 *self);
}

extern "C" {

void TOKeyAncient03__vt16(s32 arg0);
void TOKeyAncient03__vt17(s32 arg0);
void TOKeyCave01__vt23(void);
void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1);
void cleanup_refs__14TOKeyAncient03Fv(void);
void *create__14TOKeyAncient03FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOKeyAncient03__vt17(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4004B20D, arg0 + 0x38, 0, 0);
}

void TOKeyAncient03__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4004B20D, arg0 + 0x38, 0, 0);
}

extern void *tl_05;

void TOKeyAncient03__vt15(u8 *arg0) {
    f32 temp_f1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB718);
        if (lbl_805DB71C <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB718);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB720) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB720) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB724);
    }
}

void TOKeyAncient03__vt14(Obj_8016B9A4 *self) {
    if (lbl_805DB728 < self->f) {
        self->f += lbl_805DB724;
    }
}

void run_task__14TOKeyAncient03Fv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            TOKeyAncient03__sub_8016B84C((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            TOKeyAncient03__sub_8016B84C((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void *create__14TOKeyAncient03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyAncient03__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5A10;
extern void *TOKeyAncient03__data_805D5A14;

void cleanup_refs__14TOKeyAncient03Fv(void) {
    if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TOKeyAncient03__data_805D5A14, s32 *, 4));
        if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyAncient03__data_805D5A14);
            TOKeyAncient03__data_805D5A14 = NULL;
        }
    }
    if ((u32) lbl_805D5A10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A10, 1);
        lbl_805D5A10 = 0U;
    }
}

extern M2C_UNK __vt__14TOKeyAncient03[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void TOKeyAncient03__sub_8016BC84(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TLobby__sub_80020004(temp_r3, 1, &lbl_804B2B30.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5A10) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    (*(s32 * *)&TOKeyAncient03__data_805D5A14) = temp_r3_2;
    *temp_r3_2 = M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A10), u8 **, 0x42C), s32 *, 0xC);
    M2C_FIELD((*(s32 * *)&TOKeyAncient03__data_805D5A14), s32 *, 4) = TLanguage__sub_801E4874((void *) (&lbl_80441ACC.value));
}

void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient03;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOKeyAncient03__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 *)&__vt__14TOKeyAncient03).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D302C;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *(*(s32 * *)&TOKeyAncient03__data_805D5A14);
    M2C_FIELD(arg0, u8 **, 0x34) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A10), u8 **, 0x42C), void **, 8));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB72C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB730;
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
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DB71C;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DB720;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DB720;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DB720;
    return arg0;
}

void TOKeyCave01__vt23(void) {  }
s32 TOKeyCave01__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = TOKey__sub_8016A280((void *) (arg0));
        } else {
            var_r3 = TOKey__sub_8016A310((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = TOKey__sub_8016A280((void *) (arg0));
        break;
    }
    return var_r31;
}

typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];
void TOKeyCave01__vt17(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&lbl_80441B4C.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            TBoss3Volopt__sub_8022675C((M2C_UNK)(temp_r3), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    } else {
        temp_r3_2 = M2C_FIELD(&lbl_80441B4C.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            TBoss3Volopt__sub_8022675C((M2C_UNK)(temp_r3_2), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    }
}

typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];
void TOKeyCave01__vt16(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            TBoss3Volopt__sub_8022675C((M2C_UNK)(temp_r3), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    } else {
        temp_r3_2 = M2C_FIELD(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            TBoss3Volopt__sub_8022675C((M2C_UNK)(temp_r3_2), (s32)(arg0 + 0x38), (M2C_UNK)(0), (M2C_UNK)(0));
        }
    }
}

void TOKeyCave01__vt15(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB738);
        if (lbl_805DB73C <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB738);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB740) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB740) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 - 0x333);
    }
}

}
