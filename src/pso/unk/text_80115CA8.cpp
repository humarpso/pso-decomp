#include "types.h"

extern "C" {
u8 * TItemMoney__ct(void *, s32, void *);
u8 *TItem__ct(u8 *self, void *parent, u8 *item);
extern s32 __vt__10TItemMoney[];
extern s32 lbl_805D2C20;
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *fn_80115D10(u8 *arg0);
}

struct Money_80115CA8 {
    s32 f0;
    u8 pad4[0x18 - 4];
    s32 *vt;
    u8 pad1c[0xF8 - 0x1C];
    s32 amount;
};
struct Data_80115CA8 { u8 pad[0x10]; s32 amount; };

extern "C" {

#pragma push
#pragma opt_propagation off
u8 *TItemMoney__ct(void *self, s32 parent, void *datav) {
#define arg0 ((struct Money_80115CA8 *)self)
#define data ((struct Data_80115CA8 *)datav)
    TItem__ct((u8 *)arg0, (void *)parent, (u8 *)data);
    arg0->vt = __vt__10TItemMoney;
    s32 max = 999999;
    arg0->f0 = lbl_805D2C20;
    arg0->amount = data->amount;
    if (max < arg0->amount) {
        arg0->amount = max;
    }
    return (u8 *)arg0;
#undef arg0
#undef data
}
#pragma pop

u8 *fn_80115D10(u8 *datav) {
    u8 *temp_r3;
    u8 *var_r0;
    if (datav != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0xFC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TItemMoney__ct(temp_r3, tl_05, datav));
        }
        return var_r0;
    }
    return NULL;
}

}
