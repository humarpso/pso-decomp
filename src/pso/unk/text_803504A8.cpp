#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_quest_bgm_issued_flag();
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80350440(void *, void *, u32);
extern void *tl_05;
u8 get_slot_count__14TItemProShieldFPv();
void *item_object_variant_deleting_dtor_80350530(void *arg0, s16 arg1);
void *fn_80350588(void *arg0);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
extern M2C_UNK lbl_804F0D34[];

void create_quest_bgm_object(s32 arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = arg1;
    if (var_r31 >= 7U) {
        var_r31 = 0U;
    }
    if (get_quest_bgm_issued_flag() == 0) {
        void *obj = __nw__7TObjectFUl(0x1C);
        if (obj != 0) {
            fn_80350440(obj, tl_05, var_r31);
        }
    }
}

void fn_80350504(void) {
    ((M2C_UNK (*)(s32, int))create_quest_bgm_object)((s32)tl_05, (u8)get_slot_count__14TItemProShieldFPv());
}

void *item_object_variant_deleting_dtor_80350530(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0D34;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

void *fn_80350588(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0D34;
    return arg0;
}

}
