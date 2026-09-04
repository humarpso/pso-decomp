#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_80337910 { char pad[0x18]; };
struct VObj_80337910 : Base_80337910 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80337948 { char pad[0x18]; };
struct VObj_80337948 : Base_80337948 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__21TShopDeleteItemWindowFPv(void *arg0);
void TShopDeleteItemWindow__vt4(void *arg0);
void TShopDeleteItemWindow__vt5(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);

void TShopDeleteItemWindow__vt5(void *arg0) {
    struct VObj_80337910 *o = (struct VObj_80337910 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m5();
    }
}

void TShopDeleteItemWindow__vt4(void *arg0) {
    struct VObj_80337948 *o = (struct VObj_80337948 *)M2C_FIELD(arg0, void **, 0x64);
    if (o != NULL) {
        o->m4();
    }
}

struct Base_80337980 { char pad[0x18]; };
struct VObj_80337980 : Base_80337980 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();
    virtual void m4(int a, int b);
};

void destroy__21TShopDeleteItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x30));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
    ((VObj_80337980 *)arg0)->m4(0x4C, 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8033819C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__21TShopDeleteItemWindow[];

void *__dt__21TShopDeleteItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80338258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__15TShopWindowBaseFv(void *);
void init__9TItemDataFv(void *);

extern M2C_UNK __vt__21TShopDeleteItemWindow[];
extern void *lbl_805D4250;

void *TShopDeleteItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TShopDeleteItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4250;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x5C) = 1;
    M2C_FIELD(arg0, u8 *, 0x54) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, void **, 0x64) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 64));
    return arg0;
}

}
#endif
#endif
