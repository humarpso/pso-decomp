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

struct VBase_18_1753c2 { char pad[0x18]; };

struct VObj_18_1753c2 : VBase_18_1753c2 {
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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual M2C_UNK m19();
    virtual void m20();
    virtual void m21();
    virtual M2C_UNK m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual s32 m34();
};

struct Pos_80177E24 { f32 x, y, z; };

struct Obj_80177E24 { u8 pad[0x38]; Pos_80177E24 pos; };

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
u8 get_field_ed__10TObjPlayerFPv(int);
s32 copy_item_data_and_process__5TItemFPv(int);
u8 *fn_80101A98(s32);
s32 fn_80101AA8();
s8 TObjPlayer__sub_80102C30(u8 *);
u8 get_field_ec__12TOSwitchItemFPv(int);
f32 TObjPlayer__sub_80141CF8(Pos_80177E24 *, Pos_80177E24 *);
s32 is_state_ec1_ed3__10TObjPlayerFPv(int);
void run_task__12TOSwitchItemFv(u8 *arg0);
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

#pragma opt_loop_invariants off
void run_task__12TOSwitchItemFv(u8 *arg0) {
    s32 temp_r31;
    s32 var_r30;
    s32 var_r29;
    u32 temp_r0;
    u8 *temp_r27;
    ((VObj_18_1753c2 *)(arg0))->m22();
    var_r30 = 0;
    temp_r31 = fn_80101AA8();
    var_r29 = 0;
    while (var_r29 != temp_r31) {
        temp_r27 = (u8 *)(fn_80101A98(var_r29));
        if ((TObjPlayer__sub_80102C30(temp_r27) == 0) && (TObjPlayer__sub_80141CF8(&((Obj_80177E24 *)temp_r27)->pos, &((Obj_80177E24 *)arg0)->pos) < M2C_FIELD(arg0, f32 *, 0xE8))) {
            temp_r0 = M2C_FIELD(arg0, u32 *, 0xF0);
            switch (temp_r0) {
            case 0:
                var_r30 += 1;
                break;
            case 1:
                if (get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 0) {
                    var_r30 += 1;
                }
                break;
            case 2:
                if ((get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 1) && (get_field_ed__10TObjPlayerFPv((int) (temp_r27)) == 1)) {
                    var_r30 += 1;
                }
                break;
            case 3:
                if ((get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 1) && (get_field_ed__10TObjPlayerFPv((int) (temp_r27)) == 2)) {
                    var_r30 += 1;
                }
                break;
            case 4:
                if (is_state_ec1_ed3__10TObjPlayerFPv((int) (temp_r27)) == 1) {
                    var_r30 += 1;
                }
                break;
            case 5:
                if (get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 2) {
                    var_r30 += 1;
                }
                break;
            case 6:
                if (get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 3) {
                    var_r30 += ((VObj_18_1753c2 *)(temp_r27))->m34();
                }
                break;
            case 7:
                if (get_field_ec__12TOSwitchItemFPv((int) (temp_r27)) == 4) {
                    var_r30 += copy_item_data_and_process__5TItemFPv((int) (temp_r27));
                }
                break;
            }
        }
        var_r29 += 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF4) <= var_r30) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = 1;
            ((VObj_18_1753c2 *)(arg0))->m19();
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) != 0) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        ((VObj_18_1753c2 *)(arg0))->m19();
    }
}

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
