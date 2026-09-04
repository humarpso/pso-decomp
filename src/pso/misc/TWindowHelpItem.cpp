#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void set_flag0_bit2__15TWindowHelpItemFPv(void* p);
void clear_visible_flag__20TWindowSubStatusDispFPv(void* p);
void set_position_xy(void* p, f32 a, f32 b);

void clear_visible_flag__20TWindowSubStatusDispFPv(void* p) { *(u16*)((char*)p + 0x0) &= 0xfffffffd; }
void set_flag0_bit2__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x2; }
void set_position_xy(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x60) = a; *(f32*)((char*)p + 0x64) = b; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80243408
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80243464 { char pad[0x18]; };
struct VObj_80243464 : Base_80243464 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual s32 m34();
};

extern "C" {

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1);
s32 get_help_value__15TWindowHelpItemFv(void);
void *TLobby__sub_80101AB0();
s32 TWindowHelpItem__sub_802434B8();
M2C_UNK TWindowHelpItem__sub_8025B08C(s32, f32, f32);
s32 test_card_flag_2__12TBoss8DragonFPv(s32);

extern f32 lbl_805DCA1C;
extern f32 lbl_805DCA20;
extern f32 lbl_805DCA24;

void set_help_text__15TWindowHelpItemFii(s32 arg0, s32 arg1) {
    if (test_card_flag_2__12TBoss8DragonFPv(arg1) != 0) {
        TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA20);
        return;
    }
    TWindowHelpItem__sub_8025B08C(arg0, lbl_805DCA1C, lbl_805DCA24);
}

s32 get_help_value__15TWindowHelpItemFv(void) {
    struct VObj_80243464 *o;

    if (TWindowHelpItem__sub_802434B8() == -1) {
        return 0;
    }
    o = (struct VObj_80243464 *)TLobby__sub_80101AB0();
    if (o == NULL) {
        return 0;
    }
    return o->m34();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802531A0
#include "types.h"

extern "C" {

void TWindowHelpItem__sub_802531A0(void);

void TWindowHelpItem__sub_802531A0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025322C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__15TWindowHelpItemFi(s32 arg0);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowHelpItem__sub_802531A4(s32, s32);
M2C_UNK TWindowSubStatusDisp__sub_80253154();

void update_displayed_item__15TWindowHelpItemFi(s32 arg0) {
    TWindowSubStatusDisp__sub_80253154();
    TWindowHelpItem__sub_802531A4(arg0, TLobby__sub_8001DC24());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802540AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_disp__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void update_stat_disp__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
        if (M2C_FIELD(arg0, u32 *, 0x70) != 0) {
            if (TWindowHelpItem__sub_80104FCC(temp_r3, M2C_FIELD(arg0, u32 *, 0x70), &sp8) != 0) {
                set_flag_0x10__15TWindowHelpItemFPvi(a, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(b, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(c, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(d, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(e, 1);
                return;
            }
            set_flag_0x10__15TWindowHelpItemFPvi(a, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(b, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(c, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(d, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(e, 0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802543FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__vt7(s32 arg0);
M2C_UNK TWindowHelpItem__sub_802541E0();
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
M2C_UNK set_flag0_bit2__15TWindowHelpItemFPv(int);

void TWindowHelpItem__vt7(s32 arg0) {
    s32 temp_r31;
    s32 temp_r31_2;

    TWindowHelpItem__sub_802541E0();
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (5));
    temp_r31_2 = get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (6));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31));
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r31_2));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80254460
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__vt4(void *arg0);
M2C_UNK set_default_status__17TWindowDuelResultFPvi(void *, s32);
M2C_UNK reset_float_field__15TWindowHelpItemFPv(void *);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
void *get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK TWindowHelpItem__sub_802541E0();

void TWindowHelpItem__vt4(void *arg0) {
    void *temp_r30;
    void *temp_r31;

    TWindowHelpItem__sub_802541E0();
    temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 5);
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
    set_default_status__17TWindowDuelResultFPvi(temp_r30, get_message_10__20TWindowSubStatusDispFPv(0xA1));
    reset_float_field__15TWindowHelpItemFPv(temp_r30);
    M2C_FIELD(temp_r31, s32 *, 0x20) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 5);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025468C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_disp2__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, s32, M2C_UNK *);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void update_stat_disp2__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r3;
    u32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if ((temp_r3 != 0) && (temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), temp_r29 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2), temp_r28 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3), temp_r27 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4), (temp_r4 = M2C_FIELD(arg0, u32 *, 0x70), (temp_r4 == 0U) == 0))) {
        if (TWindowHelpItem__sub_80104FCC(temp_r3, temp_r4, &sp8) != 0) {
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 1);
            set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 1);
            return;
        }
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r31, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r30, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r29, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r28, 0);
        set_flag_0x10__15TWindowHelpItemFPvi(temp_r27, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void set_displayed_item_colored__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    M2C_UNK var_r5;

    var_r5 = -0x100;
    if (arg1 == 0U) {
        var_r5 = -1;
    }
    set_displayed_item_data__15TWindowHelpItemFPvPvPv((void*)(arg0), (void*)(arg1), (void*)(var_r5));
}

void set_displayed_item_data__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa4) = a2; *(void**)((char*)p + 0x70) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802559BC
#include "types.h"

extern "C" {

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2);
int TWindowHelpItem__sub_80255440(void*);
int update_cursor_selection__15TWindowHelpItemFPv(void*);

void set_items_and_refresh__15TWindowHelpItemFPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0xa0) = a2; *(void**)((char*)p + 0x6c) = a1; update_cursor_selection__15TWindowHelpItemFPv(p); TWindowHelpItem__sub_80255440(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255AB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0);

void update_cursor_selection__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA4) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x70);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA4);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) != -1) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) M2C_FIELD(arg0, s32 *, 0x6C);
        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) M2C_FIELD(arg0, s32 *, 0xA0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFE);
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x9C) = -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255B20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowHelpItem__sub_80255B20(u8 *arg0);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026C800(int, int);

void TWindowHelpItem__sub_80255B20(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r3_2;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0xA8));
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if ((temp_r3_2 & 1) && (temp_r3_2 & 2)) {
        TWindowSubStatusDisp__sub_8026C800((int) (M2C_FIELD(arg0, s32 *, 0x64)), (int) (temp_r3));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255B94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_display__15TWindowHelpItemFPv(u8 *arg0);
void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowHelpItem__sub_802553F8(void *);
M2C_UNK TWindowHelpItem__sub_80255440(void *);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
void __dl__7TObjectFPv(void *);
s32 fn_80244994(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK fn_80263A20(void *, s16);
M2C_UNK fn_8026C9C8(s32);
s32 TWindowShortListCtrl__sub_8026C9DC(s32);
void delete_if_allocated(void *, int);

void update_display__15TWindowHelpItemFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x60) & 1) && (fn_80244994(arg0) != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 4)) {
        if (!(M2C_FIELD(arg0, u8 *, 0x60) & 4)) {
            if (TWindowShortListCtrl__sub_8026C9DC(M2C_FIELD(arg0, s32 *, 0x64)) != 0) {
                TWindowHelpItem__sub_80255440(arg0);
            }
        } else {
            fn_8026C9C8(M2C_FIELD(arg0, s32 *, 0x64));
        }
        TWindowHelpItem__sub_802553F8(arg0);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
    if (!(M2C_FIELD(arg0, u8 *, 0x60) & 8)) {
        fn_80263A20(arg0, M2C_FIELD(arg0, s16 *, 0x20));
    }
}

extern M2C_UNK lbl_804CF8B0[];

void *dt__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CF8B0;
        delete_if_allocated(M2C_FIELD(arg0, void **, 0x64), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80255DDC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 is_confirmed__18TWindowInputNumberFPv();
s32 TWindowHelpItem__sub_80255DDC(void* p);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
s16 get_item_type__20TWindowSubStatusDispFPv(void* p);
s16 get_field_2F8__20TWindowSubStatusDispFPv(void* p);
s16 get_stat__20TWindowSubStatusDispFPv(void* p);
s16 get_value__20TWindowSubStatusDispFPv(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

s32 TWindowHelpItem__sub_80255DDC(void* p) { return *(s32*)((char*)p + 0x1c); }
void set_flag0_bit20__15TWindowHelpItemFPv(void* p) { *(u16*)((char*)p + 0x0) |= 0x20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A12C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0);
M2C_UNK set_flag4_and_field1c__15TWindowHelpItemFPvi(u16 *, M2C_UNK);
M2C_UNK set_flag8_and_field20__15TWindowHelpItemFPvi(u16 *, M2C_UNK);

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = *arg0;
    temp_r3 = temp_r0 & 4;
    if ((temp_r3 != 0) || (temp_r0 & 8)) {
        if (temp_r3 == 0) {
            set_flag4_and_field1c__15TWindowHelpItemFPvi(arg0, 0);
        }
        if (!(*arg0 & 8)) {
            set_flag8_and_field20__15TWindowHelpItemFPvi(arg0, 0);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A238
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1);
void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
M2C_UNK set_flag4_and_field1c__15TWindowHelpItemFPvi(void *, s32);

void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= 0x10;
        return;
    }
    *arg0 &= 0xFFFFFFEF;
}

void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 == arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        return;
    }
    if (temp_r0 > arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFF77E8FF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFFDD8C41;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    set_flag4_and_field1c__15TWindowHelpItemFPvi(arg0, arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A2D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);

void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

M2C_UNK strncpy(s32, u32, s32);

void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x18) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x18), arg1, temp_r3 + 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A504
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_display_timer__15TWindowHelpItemFPv(void *arg0);

void tick_display_timer__15TWindowHelpItemFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r4 - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = -1;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A530
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804CF9F8[];

void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9F8;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A600
#include "types.h"

extern "C" {

int TWindowHelpItem__sub_8025A600(void* p);

int TWindowHelpItem__sub_8025A600(void* p) { return *(u16*)((char*)p + 0x0) & 0x20; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A900
#include "types.h"

extern "C" {

void TWindowHelpItem__sub_8025A900(void);

void TWindowHelpItem__sub_8025A900(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A904
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);

extern M2C_UNK lbl_804CFA10[];

void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA10;
        destroy__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8025A9B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_float_field__15TWindowHelpItemFPv(void *arg0);

extern f32 lbl_805DCFA8;

void reset_float_field__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFA8;
}

}
#endif
#endif
