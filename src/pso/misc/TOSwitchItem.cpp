#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80177DC0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
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

struct RecoveredGlobal_801780E0___vt__12TOSwitchItem {
    M2C_UNK value;
    u8 remaining[0x6C];
};

extern "C" {
M2C_UNK TObjPlayer__sub_8001978C(f32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DBA10;
extern const f32 lbl_805DBA14;
void render__12TOSwitchItemFv(u8 *arg0);
s32 TOKey__ct(void *);
void update_anim__12TOSwitchItemFPv(void *arg0);
extern M2C_UNK __vt__12TOSwitchItem[];
extern s32 lbl_805D3180;
u8 *TOSwitchItem__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TOSwitchItem__sub_80178080(void);
void TOSwitchItem__sub_80178084(void);
void TOSwitchItem__vt24(void);
void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1);
void *create__12TOSwitchItemFPv(void *arg0);
void update_anim__12TOSwitchItemFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK init_switch_id__5TOKeyFPv();

void update_anim__12TOSwitchItemFPv(void *arg0) {
    f32 temp_f0;

    init_switch_id__5TOKeyFPv();
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (temp_f0 * temp_f0);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) >= 8) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) + 1);
}

void render__12TOSwitchItemFv(u8 *arg0) {
    Stack_80177DC0 stack;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        stack.sp8 = lbl_805DBA10;
        stack.spC = lbl_805DBA10;
        stack.sp10 = lbl_805DBA10;
        stack.sp14 = lbl_805DBA14;
        TObjPlayer__sub_8001978C((f32) (M2C_FIELD(arg0, f32 *, 0xE8)));
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
}

void TOSwitchItem__vt24(void) {  }

extern void *tl_05;

void *create__12TOSwitchItemFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSwitchItem__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOSwitchItem__sub_80178080(void) {  }
void TOSwitchItem__sub_80178084(void) {  }

extern M2C_UNK __vt__12TOSwitchItem[];

void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOSwitchItem;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801780E0___vt__12TOSwitchItem_size[sizeof(RecoveredGlobal_801780E0___vt__12TOSwitchItem) == 0x70 ? 1 : -1];
u8 *TOSwitchItem__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TOKey__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801780E0___vt__12TOSwitchItem *)&__vt__12TOSwitchItem).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3180;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    update_anim__12TOSwitchItemFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    return arg0;
}

}
