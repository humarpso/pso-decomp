#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80127F40_lbl_804A0588 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
M2C_UNK TObjPlayer__sub_8011E87C(void *, int);
M2C_UNK TObjPlayer__sub_80120BBC(void *, int);
void TObjPlayer__sub_80127F8C(u8 *arg0);
u8 * init_vtable_804A3738__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80127EE8(u8 *arg0);
u8 * TItemTimerEvent__ct(void *, s16, s32);
extern RecoveredGlobal_80127F40_lbl_804A0588 lbl_804A0588;
u8 *TObjPlayer__sub_80127F40(u8 *arg0, s16 arg1, s32 arg2, f32 farg0);
}

extern "C" {

u8 *TObjPlayer__sub_80127EE8(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_804A3738__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

typedef char RecoveredGlobal_80127F40_lbl_804A0588_size[sizeof(RecoveredGlobal_80127F40_lbl_804A0588) == 0x20 ? 1 : -1];
u8 *TObjPlayer__sub_80127F40(u8 *arg0, s16 arg1, s32 arg2, f32 farg0) {
    TItemTimerEvent__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A0588.value;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    return arg0;
}

void TObjPlayer__sub_80127F8C(u8 *arg0) {
    s32 temp_r31;
    TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x31));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (0));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (1));
    temp_r31 = M2C_FIELD(arg0, s32 *, 0xF4);
    M2C_FIELD(arg0, s32 *, 0xF4) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
    TObjPlayer__sub_80120BBC((void *) (arg0), (int) (0x24));
    M2C_FIELD(arg0, s32 *, 0xF4) = temp_r31;
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (2));
    TObjPlayer__sub_8011E87C((void *) (arg0), (int) (3));
}

}
