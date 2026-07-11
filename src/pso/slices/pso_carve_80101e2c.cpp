#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80102E00(void *);
s32 fn_80102DA8(void *);
void TItemData__sub_8010CCB0(void *);
void fn_801007B4(int, void *);
struct VOff_80101E2C_arg0 { char pad_0[0x4]; char f_4[1]; };

void handle_6x5E_buy_shop_item(void *arg0) {
    s32 x;
    struct VOff_80101E2C_arg0 *self = (struct VOff_80101E2C_arg0 *)arg0;
    fn_80102E00(arg0);
    x = fn_80102DA8(arg0);
    if (x != 0) {
        TItemData__sub_8010CCB0(self->f_4);
        fn_801007B4(M2C_FIELD(arg0, u16 *, 0x2), self->f_4);
    }
}

}
