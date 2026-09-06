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
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80100E38(void *);
M2C_UNK update_timer__5TItemFPv(void *);
s8 TObjPlayer__sub_80102C30();
u16 get_id__13TItemProArmorFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
M2C_UNK push_to_player_list__5TItemFPv();
void TItem__sub_80102748(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TItem__sub_80102748(u8 *arg0) {
    s8 temp_r3;
    u32 temp_r4;
    temp_r3 = TObjPlayer__sub_80102C30();
    switch (temp_r3) {
    case 0:
        update_timer__5TItemFPv((void *) (arg0));
        return;
    case 1:
        M2C_FIELD(arg0, u32 *, 0xF0) = TPlayerBattleCtrl4P__sub_801BA74C((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            TObjPlayer__sub_80100E38((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m13();
        }
        break;
    case 2:
        M2C_FIELD(arg0, u32 *, 0xF0) = TPlayerBattleCtrl4P__sub_801BA74C((void *) (get_id__13TItemProArmorFPv((void *) (arg0))));
        temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
        if (temp_r4 != 0U) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r4 + 0x38));
            TObjPlayer__sub_80100E38((void *) (arg0));
            ((VObj_18 *)(arg0))->m12();
            ((VObj_18 *)(arg0))->m14();
            get_field_d8__10TObjPlayerFPv((void *) (arg0));
            push_to_player_list__5TItemFPv();
        }
        break;
    }
}
#pragma pop

}
