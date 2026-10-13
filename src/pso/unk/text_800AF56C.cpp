#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void queue_destruction__7TObjectFv(void *);
u8 * __dt__9TObjEnemyFv(void *, s16);
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(s32);
M2C_UNK __destroy_arr(void *, void *, int, int);
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK __vt__11TObjEneMoja[];
u8 *__dt__11TObjEneMojaFv(u8 *arg0, s16 arg1);
}

extern "C" {

u8 *__dt__11TObjEneMojaFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjEneMoja;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x398));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u8 **, 0x398) = NULL;
        }
        free_collision_body_parts(arg0);
        __destroy_arr((void *) ((u8 *)(arg0) + 0x39C), (void *) (TObjPlayer__sub_800D7C58), (int) (0x1C), (int) (4));
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

}
