#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A8210_lbl_804DDF04 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_802A8210_lbl_804DDF04 lbl_804DDF04;
u8 *fn_802A8210(u8 *arg0, s32 arg1, u8 *arg2);
u8 *__nw__7TObjectFUl(u32);
s8 find_indirect_effect_ctrl(u8 arg0);
s32 check_demo_mode__10TObjPlayerFv();
void TEffIndirectCtrl__sub_802A9548(u8 *);
u8 TEffIndirectCtrl__sub_802A9554(u8 *);
u8 *TEffIndirectCtrl__ct(u8 *, s32, s32);
extern u8 *indirect_effect_ctrl_table[];
extern s32 tl_01;
extern u8 indirect_effect_ctrl_count;
void register_indirect_effect_ctrl(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_802A8210_lbl_804DDF04_size[sizeof(RecoveredGlobal_802A8210_lbl_804DDF04) == 0x18 ? 1 : -1];
u8 *fn_802A8210(u8 *arg0, s32 arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804DDF04.value;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg1;
    register_indirect_effect_ctrl((s32)((s32) arg1));
    return arg0;
}
void register_indirect_effect_ctrl(s32 arg0) {
    u8 *p;
    if (((s8 (*)(s32))find_indirect_effect_ctrl)(arg0) < 0 && indirect_effect_ctrl_count < 6) {
        p = __nw__7TObjectFUl(0x54);
        if (p != NULL) {
            p = TEffIndirectCtrl__ct(p, arg0, tl_01);
        }
        indirect_effect_ctrl_table[indirect_effect_ctrl_count] = p;
        indirect_effect_ctrl_count++;
    }
}
s8 find_indirect_effect_ctrl(u8 arg0) {
    s32 i;
    for (i = 0; i < indirect_effect_ctrl_count; i++) {
        if (indirect_effect_ctrl_table[i] != 0) {
            u8 id = TEffIndirectCtrl__sub_802A9554(indirect_effect_ctrl_table[i]);
            if (id == arg0) {
                if (check_demo_mode__10TObjPlayerFv() == 0) {
                    TEffIndirectCtrl__sub_802A9548(indirect_effect_ctrl_table[i]);
                }
                return i;
            }
        }
    }
    return -1;
}

}
