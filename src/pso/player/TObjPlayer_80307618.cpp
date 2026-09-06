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
    virtual void m12();
    virtual void m13();
    virtual s16 m14();
};

extern "C" {
u8 * TObjPlayer__sub_80307784(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80307800(s32 arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1);
void TObjPlayer__sub_803078BC(void);
void TObjPlayer__sub_80307908(void);
void *TObjPlayer__sub_8030790C(void *arg0, s16 arg1);
void disable_keyboard_control__10TObjPlayerFv(void);
void play_action_23_with_temp_state__10TObjPlayerFPv(u8 *arg0);
void update_invincible_blink__10TObjPlayerFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
M2C_UNK TObjPlayer__sub_80120908();
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv();
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, M2C_UNK);

void play_action_23_with_temp_state__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r31;

    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    TObjPlayer__sub_80120908();
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    TObjPlayer__sub_80120BBC(arg0, 0x23);
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
}

extern f32 lbl_805DF0A8;

void update_invincible_blink__10TObjPlayerFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) > 0) {
        if (get_slot_count__14TItemProShieldFPv() == 1) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0) {
                set_status_flags__10TObjPlayerFPvUi(arg0, 0x800);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xB6);
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (lbl_805DF0A8 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x200)));
    }
}

extern M2C_UNK lbl_804E70A8[];

void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E70A8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_80307800(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80307784(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void TObjPlayer__sub_803078BC(void) {  }

extern s32 lbl_805D6A5C;

void disable_keyboard_control__10TObjPlayerFv(void) {
    queue_destruction__7TObjectFv();
    if ((s32) lbl_805D6A5C != 0) {
        TKeyBoardControl__sub_8000F9CC(2);
        return;
    }
    TKeyBoardControl__sub_8000F91C(2);
    TKeyBoardControl__sub_8000F9CC(0x12);
}

void TObjPlayer__sub_80307908(void) {  }

extern M2C_UNK lbl_804E71A0[];

void *TObjPlayer__sub_8030790C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E71A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
