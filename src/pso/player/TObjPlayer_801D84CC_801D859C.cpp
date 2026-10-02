#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_801D8664 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 rest[0x11];
};

extern "C" {
void init__9TItemDataFv(void *);
void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1);
void TObjPlayer__sub_801D8664(s32 arg0, s8 arg1, s8 arg2);
}

extern "C" {

struct VObj_84Base_801d859c_801D84CC { char pad[0x18]; };
struct VObj_84_801d859c_801D84CC : VObj_84Base_801d859c_801D84CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual s8 m31();
};

void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1);
int TBoss4DarkFalz__sub_8004C220(void*);
s32 TLobby__sub_8011AF58();
M2C_UNK TObjPlayer__sub_801B8DE8(s32, s32, M2C_UNK);
u32 TObjPlayer__sub_801B8E68(s32, void *);
M2C_UNK equip_item_to_slot__10TObjPlayerFPvPvi(s32, void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_801BE9A8(s32);
M2C_UNK TObjPlayer__sub_801BF8EC(s32, s8, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv();
u32 get_slot_value__10TObjPlayerFPvi(s32, s8);
void *lookup_inventory_item__10TObjPlayerFPv(void *);
M2C_UNK obj_getField1c();
int query_darkfalz_state__10TObjPlayerFPv(void* p);
int set_animation__10TObjPlayerFPvs(void*);
int set_animation_default__10TObjPlayerFPv(void* p);
M2C_UNK set_flag_20000__10TObjPlayerFi(s32);

void process_trade_target__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    void *temp_r3;

    obj_getField1c();
    M2C_FIELD(arg1, s32 *, 0xC) = TLobby__sub_8011AF58();
    temp_r3 = lookup_inventory_item__10TObjPlayerFPv(arg1);
    if (temp_r3 != NULL) {
        s8 val = ((VObj_84_801d859c_801D84CC *)temp_r3)->m31();
        s32 val_ext = (s32)val;
        if (get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, val_ext) != 0U) {
            TObjPlayer__sub_801B8DE8(arg0, get_field_d8__10TObjPlayerFPv(), 1);
            TObjPlayer__sub_801BF8EC(arg0 + 0xD04, val_ext, 0);
        }
        if (TObjPlayer__sub_801B8E68(arg0, temp_r3) != 0U) {
            set_flag_20000__10TObjPlayerFi(arg0);
            equip_item_to_slot__10TObjPlayerFPvPvi(arg0, temp_r3, 0);
            TObjPlayer__sub_801BE9A8(arg0);
        }
    }
}
void TObjPlayer__sub_801D8664(s32 arg0, s8 arg1, s8 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801D8664, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_801D8664, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_801D8664, spA) == 0x2) ? 1 : -1];
    Stack_801D8664 stack;
    init__9TItemDataFv((void *) (&stack.sp8));
    stack.sp9 = arg1;
    stack.sp8 = 0;
    stack.spA = arg2;
    process_trade_target__10TObjPlayerFiPv(arg0, (void *) (&stack.sp8));
}

}
