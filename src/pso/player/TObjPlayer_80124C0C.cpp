#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80124C64(void *arg0);
void increment_burst_counter(u8 *arg0);
void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1);
s32 get_anim_state__10TObjPlayerFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__15TItemShootModelFv(void *, int);

extern M2C_UNK lbl_804A2148[];

void *dt_item_shoot_model__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2148;
        __dt__15TItemShootModelFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_80124C64(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    }
}

void increment_burst_counter(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + 1);
}

s32 get_anim_state__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
