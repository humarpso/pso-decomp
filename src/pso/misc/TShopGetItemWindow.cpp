#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__18TShopGetItemWindowFPv(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);

void close__18TShopGetItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8021ED9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__18TShopGetItemWindow[];

void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TShopGetItemWindow;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021EE58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void __ct__15TShopWindowBaseFv(void *);
void init__9TItemDataFv(void *);

extern M2C_UNK __vt__18TShopGetItemWindow[];
extern void *lbl_805D36C8;

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TShopGetItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36C8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x54) = 1;
    M2C_FIELD(arg0, u8 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, void **, 0x5C) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 56));
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021EEE4
#include "types.h"

extern "C" {

s16 get_cursor_index__18TShopGetItemWindowFPv(void* p);

s16 get_cursor_index__18TShopGetItemWindowFPv(void* p) { return *(s16*)((char*)p + 0x74); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021EEEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct Base_8021EEEC { char pad[0x18]; };
struct VObj_8021EEEC : Base_8021EEEC {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual s32 m14();
};

extern "C" {

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D53A0;

void calc_item_count__18TShopGetItemWindowFPvPv(void *arg0, s32 *arg1) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 1;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = ((VObj_8021EEEC *)arg0)->m14() + 1;
    } else {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if (temp_r3 != NULL) {
            var_r31 = ((VObj_8021EEEC *)temp_r3)->m14() + 1;
        }
    }
    if (var_r31 < 1) {
        var_r31 = 1;
    }
    if (var_r31 > 0xC7) {
        var_r31 = 0xC7;
    }
    *arg1 = var_r31;
}

}
#endif
#endif
