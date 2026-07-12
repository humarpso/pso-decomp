#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void new_child_object__10TObjPlayerFi(s32 arg0);
void* __nw__7TObjectFUl(M2C_UNK);
void* init_attack_ctrl__10TObjPlayerFPvUsUs(void*, s32, s32);

extern s32 tl_07;

void new_child_object__10TObjPlayerFi(s32 arg0) {
    void *obj = __nw__7TObjectFUl(0x24);
    if (obj != 0) {
        init_attack_ctrl__10TObjPlayerFPvUsUs(obj, tl_07, arg0);
    }
}

}
