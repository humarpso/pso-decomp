#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801301D0_lbl_804A68C8 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80130238(u8 *arg0);
u8 * TObjPlayer__sub_80120D50(void *, void *);
void set_atp__10TObjPlayerFPvs(void *, s16);
extern RecoveredGlobal_801301D0_lbl_804A68C8 lbl_804A68C8;
extern const f32 lbl_805DAFFC;
u8 *construct_cane_weapon(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

typedef char RecoveredGlobal_801301D0_lbl_804A68C8_size[sizeof(RecoveredGlobal_801301D0_lbl_804A68C8) == 0xF8 ? 1 : -1];
u8 *construct_cane_weapon(u8 *arg0, u8 *arg1, u8 *arg2) {
    TObjPlayer__sub_80120D50(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A68C8.value;
    M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DAFFC;
    M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    if ((u8) M2C_FIELD(arg2, u8 *, 2) >= 4U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

u8 *TObjPlayer__sub_80130238(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_cane_weapon((u8 *)(temp_r3), (u8 *)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
