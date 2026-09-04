#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void copy_and_register_item_data__11TItemObjectFPv(void *arg0);

void copy_to_item_data__5TItemFPvPv(void *, void *);
void get_item_use_result__9TItemDataFPv(void *);

void copy_and_register_item_data__11TItemObjectFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    get_item_use_result__9TItemDataFPv(&sp8);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800FFE4C
#include "types.h"

extern "C" {

s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int set_flag_1024__11TItemObjectFPv(void* p);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);

int set_flag_1024__11TItemObjectFPv(void* p) { return clear_item_flags__10TObjPlayerFPvUi(p, 1024); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115D7C
#include "types.h"

extern "C" {

void TItem__sub_80115D68(void);
u8 TItemObject__sub_80115D7C(void* p);

u8 TItemObject__sub_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115D94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemObject__vt12(void *arg0);
s32 copy_and_register_item_data__11TItemObjectFPv();
M2C_UNK refresh_if_current_player__20TWindowSubStatusDispFPv(void *);

struct Base_80115D94 { char pad[0x18]; };
struct VObj_80115D94 : Base_80115D94 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual void m31(); virtual void m32(); virtual void m33();
    virtual s32 m34();
};

void TItemObject__vt12(void *arg0) {
    s32 temp_r31;

    temp_r31 = copy_and_register_item_data__11TItemObjectFPv();
    if (((VObj_80115D94 *)arg0)->m34() > temp_r31) {
        refresh_if_current_player__20TWindowSubStatusDispFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116188
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TItemObject__vt7(u8 *arg0);

u8 *TItemObject__vt7(u8 *arg0) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r4 != 0U) {
        return (unsigned char *) (temp_r4 + 0x38);
    }
    return arg0 + 0x38;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801161A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8011620C { char pad[0x18]; };
struct VObj_8011620C : Base_8011620C {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m35();
    virtual s32 m36();
};
struct Base_8011626C { char pad[0x18]; };
struct VObj_8011626C : Base_8011626C {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42();
};

extern "C" {

void TItemObject__vt29(void *arg0);
s32 TItemObject__vt35(void *arg0, s32 arg1);
s32 TItemObject__vt36(void *arg0, s32 arg1);
M2C_UNK set_flag_1024__11TItemObjectFPv(void *);
s32 copy_and_register_item_data__11TItemObjectFPv(void *);
M2C_UNK TItemObject__sub_80115D6C(void *, s32);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
s32 check_flag_400__20TWindowSubStatusDispFv();
M2C_UNK notify_owner__5TItemFPvi(void *, M2C_UNK);
M2C_UNK apply_switch_attack__5TItemFPvi(void *, M2C_UNK);
M2C_UNK TItem__sub_80100824();
s32 get_item_flags__10TObjPlayerFPv(void *);

struct Base_801161A4 { char pad[0x18]; };
struct VObj_801161A4 : Base_801161A4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual int m34();
};

s32 TItemObject__vt36(void *arg0, s32 arg1) {
    s32 temp_r31;

    temp_r31 = arg1 + ((VObj_801161A4 *)arg0)->m34();
    if (temp_r31 <= copy_and_register_item_data__11TItemObjectFPv(arg0)) {
        TItemObject__sub_80115D6C(arg0, temp_r31);
        return 1;
    }
    return 0;
}

s32 TItemObject__vt35(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = ((VObj_8011620C *)arg0)->m36();
    if (arg1 <= temp_r3) {
        TItemObject__sub_80115D6C(arg0, temp_r3 - arg1);
        return 1;
    }
    return 0;
}

void TItemObject__vt29(void *arg0) {
    struct VObj_8011626C *o = (struct VObj_8011626C *)arg0;
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
        M2C_FIELD(arg0, u8 *, 0x101) = 0U;
        o->m42();
        if ((u8) M2C_FIELD(arg0, u8 *, 0x101) == 0) {
            apply_switch_attack__5TItemFPvi(arg0, 0x1AF);
            notify_owner__5TItemFPvi(arg0, 0x5B211);
        }
        if (get_item_flags__10TObjPlayerFPv(arg0) & 0x10) {
            get_field_d8__10TObjPlayerFPv(arg0);
            TItem__sub_80100824();
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116318
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemObject__vt42(void *arg0);

M2C_UNK update_pickup_flag__5TItemFi();

void TItemObject__vt42(void *arg0) {
    update_pickup_flag__5TItemFi();
    M2C_FIELD(arg0, s8 *, 0x101) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801163B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemObject__ct(void *arg0, void *arg1, void *arg2);
M2C_UNK TItemObject__sub_80115D6C(void *, s32);
M2C_UNK TItem__ct();
M2C_UNK TObjPlayer__sub_8010043C(void *, u8);
M2C_UNK clear_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
void *TItemData__sub_8010EA38(void *);
s32 get_item_type_or_default__9TItemListFPv(void *);

extern void* __vt__11TItemObject[];
extern s32 lbl_805D2C28;

void *TItemObject__ct(void *arg0, void *arg1, void *arg2) {
    s16 temp_r3;

    TItem__ct();
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__11TItemObject;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C28;
    M2C_FIELD(arg0, void **, 0xF8) = TItemData__sub_8010EA38(arg2);
    M2C_FIELD(arg0, u8 *, 0x100) = (u8) M2C_FIELD(arg2, u8 *, 4);
    TItemObject__sub_80115D6C(arg0, get_item_type_or_default__9TItemListFPv(arg2));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 0x10) & 1) {
        add_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    } else {
        clear_item_flags__10TObjPlayerFPvUi(arg0, 0x10);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s16 *, 4);
    if (temp_r3 != 0) {
        TObjPlayer__sub_8010043C(arg0, (u8) (temp_r3 + 4));
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801164C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 call_dispatch__11TItemObjectFi(s32 arg0);

s32 (*TLobby__sub_8010440C())(s32);

s32 call_dispatch__11TItemObjectFi(s32 arg0) {
    if (arg0 != 0) {
        s32 (*fp)(s32) = TLobby__sub_8010440C();
        return fp(arg0);
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80116510
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
void __dt__5TItemFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK __vt__11TItemObject[];

void *__dt__11TItemObjectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemObject;
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80306A28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemObject__sub_80306A28(void *arg0);
void TItemObject__ct(void *);

extern M2C_UNK lbl_804E6FA8[];

void *TItemObject__sub_80306A28(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6FA8;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80352B18
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemObject__sub_80352B18(void *arg0);
void TItemObject__ct(void *);
void clear_item_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804F0FF0[];

void *TItemObject__sub_80352B18(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0FF0;
    clear_item_flags__10TObjPlayerFPvUi(arg0, 16);
    return arg0;
}

}
#endif
#endif
