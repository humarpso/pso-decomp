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
extern "C" {
s32 is_split_screen();
s32 TOKey__sub_8016A280(void *);
s32 TOKey__sub_8016A310(void *);
s32 TOKeyCol__vt13(u8 *arg0);
M2C_UNK TOKeyCave01__sub_8016BF08(void *, int);
void run_task__11TOKeyCave01Fv(u8 *arg0);
}

extern "C" {

void TOKeyCave01__vt14(void *arg0);
void TOKeyCol__vt23(void);
void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1);
void *create__11TOKeyCave01FPv(void *arg0);
void free_objects__11TOKeyCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyCave01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern f32 lbl_805DB744;
extern f32 lbl_805DB748;

void TOKeyCave01__vt14(void *arg0) {
    s32 temp_r4;

    if (lbl_805DB748 < M2C_FIELD(arg0, f32 *, 0x6C)) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0x6C) + lbl_805DB744);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0xFC);
    if (temp_r4 < 0x2000) {
        M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (temp_r4 + 0x333);
    }
}

extern void *tl_05;

void run_task__11TOKeyCave01Fv(u8 *arg0) {
    ((VObj_18 *)(arg0))->m12();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            TOKeyCave01__sub_8016BF08((void *) (arg0), (int) (1));
            ((VObj_18 *)(arg0))->m16();
            M2C_FIELD(arg0, s32 *, 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            TOKeyCave01__sub_8016BF08((void *) (arg0), (int) (0));
            ((VObj_18 *)(arg0))->m17();
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void *create__11TOKeyCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOKeyCave01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A18;
extern s32 *TOKeyCave01__data_805D5A1C;

void free_objects__11TOKeyCave01Fv(void) {
    if ((s32 *) TOKeyCave01__data_805D5A1C != NULL) {
        free_if_valid__10TObjPlayerFi(*TOKeyCave01__data_805D5A1C);
        if ((s32 *) TOKeyCave01__data_805D5A1C != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyCave01__data_805D5A1C);
            TOKeyCave01__data_805D5A1C = NULL;
        }
    }
    if ((u32) lbl_805D5A18 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A18, 1);
        lbl_805D5A18 = 0U;
    }
}

extern M2C_UNK __vt__11TOKeyCave01[];

void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOKeyCave01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOKeyCol__vt23(void) {  }
s32 TOKeyCol__vt13(u8 *arg0) {
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

}
