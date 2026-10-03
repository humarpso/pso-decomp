#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801B9D50 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_801B9D50 : Base_801B9D50 {
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
VA
VA
VA
VA
VA
    virtual void m19();
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
    virtual s32 m31();
};

extern "C" {

u8 get_field_ed__10TObjPlayerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(s32, M2C_UNK);
u8 get_field_ec__12TOSwitchItemFPv(void *);
M2C_UNK set_animation__10TObjPlayerFPvs(s32, s32);
s32 unequip_by_field326__10TObjPlayerFPv(s32);
M2C_UNK unequip_all_units__10TObjPlayerFi(s32);
M2C_UNK set_equip_slot_entry(s32, s8, M2C_UNK);

void unequip_item__10TObjPlayerFiPv(s32 arg0, void *arg1) {
    VObj_801B9D50 *self = (VObj_801B9D50 *)arg1;

    set_equip_slot_entry(arg0 + 0xD04, self->m31(), 0);
    self->m19();
    if ((get_field_ec__12TOSwitchItemFPv(arg1) == 1) && (get_field_ed__10TObjPlayerFPv(arg1) == 1)) {
        unequip_all_units__10TObjPlayerFi(arg0);
    }
    if (test_action_mask__10TObjPlayerFPvi(arg0, 2) != 0) {
        set_animation__10TObjPlayerFPvs(arg0, unequip_by_field326__10TObjPlayerFPv(arg0));
    }
}

}
