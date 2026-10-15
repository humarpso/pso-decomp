#include "types.h"
#include "pso/misc/TOSwitchItem.h"

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
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801780E0___vt__12TOSwitchItem {
    s32 value;
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
    virtual s32 m19();
    virtual void m20();
    virtual void m21();
    virtual s32 m22();
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
s32 newton_sqrtf(f32);
s32 check_demo_mode__10TObjPlayerFv();
s32 TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DBA10;
extern const f32 lbl_805DBA14;
s32 TOKey__ct(void *);
extern s32 __vt__12TOSwitchItem[];
extern s32 lbl_805D3180;
u8 *TOSwitchItem__ct(u8 *arg0, s32 arg1, s32 arg2);
u8 get_field_ed__10TObjPlayerFv(int);
s32 copy_item_data_and_process__5TItemFv(int);
u8 *get_sorted_item_registry_entry(s32);
s32 get_item_registry_count();
s8 TObjPlayer__sub_80102C30(u8 *);
u8 get_field_ec__12TOSwitchItemFv(int);
f32 horizontal_distance_squared(Pos_80177E24 *, Pos_80177E24 *);
s32 is_state_ec1_ed3__10TObjPlayerFv(int);
void run_task__12TOSwitchItemFv(u8 *arg0);
}

extern "C" {

void TOSwitchItem__sub_80178080(void);
void TOSwitchItem__sub_80178084(void);
void TOSwitchItem__vt24(void);
void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 init_switch_id__5TOKeyFv();

void TOSwitchItem::update_anim() {
    f32 temp_f0;

    init_switch_id__5TOKeyFv();
    temp_f0 = *(f32 *)((s8 *)this + 0x68);
    *(f32 *)((s8 *)this + 0xE8) = (f32) (temp_f0 * temp_f0);
    *(s32 *)((s8 *)this + 0xF0) = (s32) *(s32 *)((s8 *)this + 0x88);
    if ((s32) *(s32 *)((s8 *)this + 0xF0) >= 8) {
        *(s32 *)((s8 *)this + 0xF0) = 0;
    }
    *(s32 *)((s8 *)this + 0xF4) = (s32) (*(s32 *)((s8 *)this + 0x8C) + 1);
}

void TOSwitchItem::render() {
    u8 *arg0 = (u8 *)this;
    Stack_80177DC0 stack;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        stack.sp8 = lbl_805DBA10;
        stack.spC = lbl_805DBA10;
        stack.sp10 = lbl_805DBA10;
        stack.sp14 = lbl_805DBA14;
        newton_sqrtf((f32) (*(f32 *)((s8 *)arg0 + 0xE8)));
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
    temp_r31 = get_item_registry_count();
    var_r29 = 0;
    while (var_r29 != temp_r31) {
        temp_r27 = (u8 *)(get_sorted_item_registry_entry(var_r29));
        if ((TObjPlayer__sub_80102C30(temp_r27) == 0) && (horizontal_distance_squared(&((Obj_80177E24 *)temp_r27)->pos, &((Obj_80177E24 *)arg0)->pos) < *(f32 *)((s8 *)arg0 + 0xE8))) {
            temp_r0 = *(u32 *)((s8 *)arg0 + 0xF0);
            switch (temp_r0) {
            case 0:
                var_r30 += 1;
                break;
            case 1:
                if (get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 0) {
                    var_r30 += 1;
                }
                break;
            case 2:
                if ((get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 1) && (get_field_ed__10TObjPlayerFv((int) (temp_r27)) == 1)) {
                    var_r30 += 1;
                }
                break;
            case 3:
                if ((get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 1) && (get_field_ed__10TObjPlayerFv((int) (temp_r27)) == 2)) {
                    var_r30 += 1;
                }
                break;
            case 4:
                if (is_state_ec1_ed3__10TObjPlayerFv((int) (temp_r27)) == 1) {
                    var_r30 += 1;
                }
                break;
            case 5:
                if (get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 2) {
                    var_r30 += 1;
                }
                break;
            case 6:
                if (get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 3) {
                    var_r30 += ((VObj_18_1753c2 *)(temp_r27))->m34();
                }
                break;
            case 7:
                if (get_field_ec__12TOSwitchItemFv((int) (temp_r27)) == 4) {
                    var_r30 += copy_item_data_and_process__5TItemFv((int) (temp_r27));
                }
                break;
            }
        }
        var_r29 += 1;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF4) <= var_r30) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xEC) == 0) {
            *(s32 *)((s8 *)arg0 + 0xEC) = 1;
            ((VObj_18_1753c2 *)(arg0))->m19();
        }
    } else if ((s32) *(s32 *)((s8 *)arg0 + 0xEC) != 0) {
        *(s32 *)((s8 *)arg0 + 0xEC) = 0;
        ((VObj_18_1753c2 *)(arg0))->m19();
    }
}

void *TOSwitchItem::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSwitchItem__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOSwitchItem__sub_80178080(void) {  }
void TOSwitchItem__sub_80178084(void) {  }

extern s32 __vt__12TOSwitchItem[];

void *__dt__12TOSwitchItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TOSwitchItem;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801780E0___vt__12TOSwitchItem_size[sizeof(RecoveredGlobal_801780E0___vt__12TOSwitchItem) == 0x70 ? 1 : -1];
u8 *TOSwitchItem__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TOKey__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801780E0___vt__12TOSwitchItem *)&__vt__12TOSwitchItem).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3180;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOSwitchItem *)arg0)->update_anim();
    *(s32 *)((s8 *)arg0 + 0xEC) = 0;
    return arg0;
}

}
