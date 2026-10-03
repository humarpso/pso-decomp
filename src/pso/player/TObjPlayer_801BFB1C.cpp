#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BFB4C(u8 *arg0);
}

extern "C" {

void clear_base__10TObjPlayerFPv(void* p);
void* forward_release__10TObjPlayerFPv(void* p);
s32 reset_and_return__10TObjPlayerFi(s32 arg0);
void* set_vec3_const_wrapper__10TObjPlayerFPv(void* p);
M2C_UNK TObjPlayer__sub_801BF8F8();
int clear_movement_history(void*);
int set_vec3_const__10TObjPlayerFPv(void*);

s32 reset_and_return__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801BF8F8();
    return arg0;
}

void TObjPlayer__sub_801BFB4C(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 4) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0) = (f32) TObjPlayer__data_805DC278;
}

void clear_base__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* forward_release__10TObjPlayerFPv(void* p) { clear_movement_history(p); return p; }
void* set_vec3_const_wrapper__10TObjPlayerFPv(void* p) { set_vec3_const__10TObjPlayerFPv(p); return p; }

}
