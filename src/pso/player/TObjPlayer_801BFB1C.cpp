#include "types.h"

extern "C" {
extern const f32 TObjPlayer__data_805DC278;
void TObjPlayer__sub_801BFB4C(u8 *arg0);
}

extern "C" {

void clear_base__10TObjPlayerFPv(void* p);
void* forward_release__10TObjPlayerFPv(void* p);
s32 reset_and_return__10TObjPlayerFi(s32 arg0);
void* set_vec3_const_wrapper__10TObjPlayerFPv(void* p);
s32 TObjPlayer__sub_801BF8F8();
int clear_movement_history(void*);
int set_vec3_const__10TObjPlayerFPv(void*);

s32 reset_and_return__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801BF8F8();
    return arg0;
}

void TObjPlayer__sub_801BFB4C(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 4) = (f32) TObjPlayer__data_805DC278;
    *(f32 *)((s8 *)arg0 + 0) = (f32) TObjPlayer__data_805DC278;
}

void clear_base__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void* forward_release__10TObjPlayerFPv(void* p) { clear_movement_history(p); return p; }
void* set_vec3_const_wrapper__10TObjPlayerFPv(void* p) { set_vec3_const__10TObjPlayerFPv(p); return p; }

}
