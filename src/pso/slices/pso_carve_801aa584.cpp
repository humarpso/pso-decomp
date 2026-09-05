#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int __dl__FPv(void* a0);
s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1);
}

extern "C" {

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK init_forward__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_80313138(void *);
M2C_UNK __construct_array(void *, void *, void *, int, int);
s32 TObjPlayer__sub_803966F8(s32, s32 *, s32, s32);
int TObjPlayer__sub_801AA6E4(void* a0 = 0, void* a1 = 0);
void* TObjPlayer__sub_801AA66C(void* p, void* a1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
void* TObjPlayer__sub_801AA61C(void* p);
s16 get_hp__10TObjPlayerFPv(void* p);
u16 get_section_id__10TObjPlayerFPv(void* p);
void set_field_2__10TObjPlayerFPvs(void* p, s16 v);
void set_type__10TObjPlayerFPvs(void* p, s16 v);
u16 get_entity_type__10TObjPlayerFPv(void* p);

}

s32 TObjPlayer__sub_801AA584(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        ((M2C_UNK)__dl__FPv((void*)(arg0)));
    }
    return arg0;
}

}
