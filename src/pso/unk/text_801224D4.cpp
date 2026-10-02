#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801224D4_lbl_804A0FA0 {
    M2C_UNK value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80122548(u8 *arg0);
u8 * TObjPlayer__sub_80120D50(void *, void *);
void set_status_flags__10TObjPlayerFPvUi(void *, s32);
void set_atp__10TObjPlayerFPvs(void *, s16);
extern RecoveredGlobal_801224D4_lbl_804A0FA0 lbl_804A0FA0;
extern const f32 lbl_805DACE0;
u8 *construct_dagger_weapon(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

typedef char RecoveredGlobal_801224D4_lbl_804A0FA0_size[sizeof(RecoveredGlobal_801224D4_lbl_804A0FA0) == 0xF8 ? 1 : -1];
u8 *construct_dagger_weapon(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 temp_r0;
    TObjPlayer__sub_80120D50(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A0FA0.value;
    set_status_flags__10TObjPlayerFPvUi(arg0, 0x600);
    M2C_FIELD(arg0, f32 *, 0x1F8) = (f32) lbl_805DACE0;
    temp_r0 = M2C_FIELD(arg2, u8 *, 2);
    if ((temp_r0 >= 5U) && (temp_r0 != 7)) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

u8 *TObjPlayer__sub_80122548(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(construct_dagger_weapon((u8 *)(temp_r3), (u8 *)(tl_05), (u8 *)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}

}
