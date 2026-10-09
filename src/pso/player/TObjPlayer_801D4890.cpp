#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A_801d48f8 { char pad[0x18]; };
struct V_A_801d48f8 : Base_A_801d48f8 {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual s32 m34();
    virtual void m35(s32);
};

extern "C" {
void remove_equipped_item__10TObjPlayerFPvii(void *, s32, s32);
s32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_801D49F4(void *arg0, void *arg1, s32 *arg2, s32 arg3);
}

extern "C" {

int run_and_get_result__10TObjPlayerFPvi(void* a0, int a1);
int run_state_query__10TObjPlayerFPvi(void* a0, int a1);
s32 update_inventory_item__10TObjPlayerFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
M2C_UNK place_on_ground__5TItemFPvsPvi(void *, s16, s32, M2C_UNK);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 is_item_equipped(void *);
s32 start_inventory_update__10TObjPlayerFPvi(void *, s32);
int collect_owner_fields_recursive__10TObjPlayerFPv(void*);
int count_owned_items__10TObjPlayerFPv(void*);
void *get_owner_if_alive__10TObjPlayerFPv();
M2C_UNK queue_destruction__7TObjectFv(s32, s16);

    extern int lbl_805D5DEC;
    extern int lbl_805D5DF4;
int run_and_get_result__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5DEC = a1; lbl_805D5DF4 = 0; collect_owner_fields_recursive__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

    extern int lbl_805D5DF4;
    extern int lbl_805D5E00;
int run_state_query__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D5E00 = a1; lbl_805D5DF4 = 0; count_owned_items__10TObjPlayerFPv((void*)(*(int*)((char*)a0 + 0x1c4))); return lbl_805D5DF4; }

s32 update_inventory_item__10TObjPlayerFPviiiii(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s16 temp_r4;
    void *temp_r3_2;
    s32 temp_r3;

    if (arg4 < 0) {
        return 0;
    }
    temp_r3 = start_inventory_update__10TObjPlayerFPvi(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    temp_r3_2 = get_owner_if_alive__10TObjPlayerFPv();
    if (temp_r3_2 == NULL) {
        return 0;
    }
    if ((((V_A_801d48f8 *) temp_r3_2)->m34() - arg4) > 0) {
        ((V_A_801d48f8 *) temp_r3_2)->m35(arg4);
        return 1;
    }
    if (is_item_equipped(temp_r3_2) != 0) {
        unequip_item__10TObjPlayerFiPv(arg1, temp_r3_2);
    }
    M2C_FIELD(temp_r3_2, s16 *, 0x28) = get_stat_by_key_state__10TObjPlayerFPv(arg1);
    place_on_ground__5TItemFPvsPvi(temp_r3_2, arg5, arg3, 0);
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
    M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
    queue_destruction__7TObjectFv(temp_r3, temp_r4);
    return 1;
}
s32 TObjPlayer__sub_801D49F4(void *arg0, void *arg1, s32 *arg2, s32 arg3) {
    s32 i;
    s32 r;
    for (i = 0; i < arg3; arg2++, i++) {
        r = start_inventory_update__10TObjPlayerFPvi(arg0, *arg2);
        if (r == 0) {
            return 0;
        }
        ((void (*)(void *, void *, int)) remove_equipped_item__10TObjPlayerFPvii)(arg0, arg1, r);
    }
    return 1;
}

}

struct Base_801D4A6C { char pad[0x18]; };
struct VObj_801D4A6C : Base_801D4A6C {
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
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27(s16);
};

extern "C" {

void remove_equipped_item__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    void *temp_r3;

    temp_r3 = ((void *(*)(s32)) get_owner_if_alive__10TObjPlayerFPv)(arg2);
    if (temp_r3 != NULL) {
        if (((s32 (*)()) is_item_equipped)() != 0) {
            unequip_item__10TObjPlayerFiPv(arg1, temp_r3);
        }
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
        ((VObj_801D4A6C *)temp_r3)->m27(temp_r4);
        ((M2C_UNK (*)(s32)) queue_destruction__7TObjectFv)(arg2);
    }
}

}
