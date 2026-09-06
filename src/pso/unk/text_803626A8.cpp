#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E0258;
void TObjPlayer__sub_80362C28(u8 *arg0);
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E025C;
void TObjPlayer__sub_80362C54(u8 *arg0);
void * TObjPlayer__sub_80362CFC(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_80362D38(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);
void *TObjEneEpsilon__ct(void *arg0);
void TObjPlayer__sub_8012A884(void *);
void __construct_array(void *, void *, void *, int, int);
void check_state_flag_4__9TObjEneDDFPv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);

extern M2C_UNK __vt__14TObjEneEpsilon[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern void *lbl_805D4468;

void *TObjEneEpsilon__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneEpsilon;
    __construct_array((void *)((char *)arg0 + 960), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4468;
    check_state_flag_4__9TObjEneDDFPv(arg0);
    return arg0;
}

extern M2C_UNK lbl_804F26E0[];

void TObjPlayer__sub_80362C28(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (f32) (lbl_805E0258));
}

void TObjPlayer__sub_80362C54(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (f32) (lbl_805E025C));
}

void *TObjPlayer__sub_80362CFC(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
    return arg0;
}
u8 *TObjPlayer__sub_80362D38(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)TObjPlayer__sub_80362CFC((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern M2C_UNK lbl_804F26E0[];

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
