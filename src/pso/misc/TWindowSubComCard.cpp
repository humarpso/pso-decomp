#ifndef PSO_CLASS_PACKAGE

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021845C_802183B4 { char pad[0x18]; };
struct VObj_8021845C_802183B4 : Base_8021845C_802183B4 {
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
struct Base_802184C8_802183B4 { char pad[0x18]; };
struct VObj_802184C8_802183B4 : Base_802184C8_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct Base_80218500_802183B4 { char pad[0x18]; };
struct VObj_80218500_802183B4 : Base_80218500_802183B4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_80218538_802183B4 { char pad[0x18]; };
struct VObj_80218538_802183B4 : Base_80218538_802183B4 {
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
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0);
s32 fn_802183B4(void* p);
void poll_download__12TQuestListVMFv(void);
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1);
s32 TShopWindowBase__sub_80223A48(void *);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
s32 poll_serial_access__22TQuestVmDownLoadServerFPv();
s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
int set_field_20__12TQuestListVMFPvi(void*, void*);

s32 fn_802183B4(void* p) { return *(s32*)((char*)p + 0x68); }
void clear_flag_and_release__17TWindowSubComCardFPv(void *arg0) {
    u32 temp;
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x88);
    if (temp != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(temp, 1);
    }
}
void set_selected_entry__12TQuestListVMFPvPv(void* p, void* a1) { set_field_20__12TQuestListVMFPvi(p, (void*)20); *(void**)((char*)p + 0x23b4) = a1; }
void poll_download__12TQuestListVMFv(void) {
    if (get_serial_access__22TQuestVmDownLoadServerFPv() == 0U) {
        poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

s32 TQuestListVM__vt8(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x23A0);
    if (temp_r3 != NULL) {
        if (((VObj_8021845C_802183B4 *)temp_r3)->m8() == 0) {
            return 0;
        }
        return TShopWindowBase__sub_80223A48(arg0) ? 1 : 0;
    }
    return 1;
}

void TQuestListVM__vt7(void *arg0) {
    struct VObj_802184C8_802183B4 *o = (struct VObj_802184C8_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m7();
    }
}

void TQuestListVM__vt5(void *arg0) {
    struct VObj_80218500_802183B4 *o = (struct VObj_80218500_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m5();
    }
}

void TQuestListVM__vt4(void *arg0) {
    struct VObj_80218538_802183B4 *o = (struct VObj_80218538_802183B4 *)M2C_FIELD(arg0, void **, 0x23A0);
    if (o != NULL) {
        o->m4();
    }
}

}
#else

#if PSO_CLASS_PACKAGE == 0x8007BD24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_card__17TWindowSubComCardFv(void);
void remove_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B010(M2C_UNK, M2C_UNK);
s32 get_card_slot__17TWindowSubComCardFi(M2C_UNK);
M2C_UNK remove_entry__17TWindowGetComCardFiii(s32, s32, M2C_UNK);

void init_card__17TWindowSubComCardFv(void) {
    TWindowSubComCard__sub_8007B010(get_card_slot__17TWindowSubComCardFi((M2C_UNK)(0)), 0x1C);
}

void remove_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi((M2C_UNK)(0));
    remove_entry__17TWindowGetComCardFiii(arg0, tmp, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BD94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void scroll_list__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B0D0(s32, s32, M2C_UNK);
s32 get_card_slot__17TWindowSubComCardFi(M2C_UNK);

void scroll_list__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    TWindowSubComCard__sub_8007B0D0(arg0, tmp, 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BDD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fn_8007B2E0(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_a__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fn_8007B2E0(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BE34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_and_press_a__17TWindowSubComCardFi(s32 arg0);
M2C_UNK handle_press_a__17TWindowSubComCardFii(M2C_UNK *, s32);
M2C_UNK init_guild_card_tag__17TWindowSubComCardFi(M2C_UNK *);

void init_and_press_a__17TWindowSubComCardFi(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((M2C_UNK *) sp8);
    handle_press_a__17TWindowSubComCardFii((M2C_UNK *) sp8, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BE70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1);
M2C_UNK clear();
s32 fill_guild_card_from_player(s32, s32);
s32 scroll_list__17TWindowSubComCardFi(s32);
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void handle_press_b__17TWindowSubComCardFii(s32 arg0, s32 arg1) {
    clear();
    if ((fill_guild_card_from_player(arg0, arg1) != 0) && (scroll_list__17TWindowSubComCardFi(arg0) == 0)) {
        select_card_entry__17TWindowSubComCardFi(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BECC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_and_press_b__17TWindowSubComCardFi(s32 arg0);
M2C_UNK handle_press_b__17TWindowSubComCardFii(M2C_UNK *, s32);
M2C_UNK init_guild_card_tag__17TWindowSubComCardFi(M2C_UNK *);

void init_and_press_b__17TWindowSubComCardFi(s32 arg0) {
    u8 sp8[0x84];

    init_guild_card_tag__17TWindowSubComCardFi((M2C_UNK *) sp8);
    handle_press_b__17TWindowSubComCardFii((M2C_UNK *) sp8, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BF08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_press__17TWindowSubComCardFv(void);
s32 get_card_entry__17TWindowSubComCardFi();
s32 scroll_list__17TWindowSubComCardFi();
M2C_UNK select_card_entry__17TWindowSubComCardFi(s32);

void update_press__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = get_card_entry__17TWindowSubComCardFi();
    if (scroll_list__17TWindowSubComCardFi() == 0) {
        select_card_entry__17TWindowSubComCardFi(temp_r31);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8007BF48
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_card_entry__17TWindowSubComCardFi(s32 arg0);
M2C_UNK TWindowSubComCard__sub_8007B1AC(s32, s32, M2C_UNK);
s32 get_card_slot__17TWindowSubComCardFi(M2C_UNK);

void select_card_entry__17TWindowSubComCardFi(s32 arg0) {
    s32 tmp = get_card_slot__17TWindowSubComCardFi(0);
    TWindowSubComCard__sub_8007B1AC(arg0, tmp, 0x1C);
}

}
#endif
#endif
