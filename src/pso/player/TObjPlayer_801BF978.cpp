#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_tag__10TObjPlayerFPv(s32 *arg0);
void reset_counter_field4__10TObjPlayerFPv(void *arg0);
void set_vec3_const__10TObjPlayerFPv(void* a0);
void TObjPlayer__sub_801BF9E0(void* p, s16 v);
void TObjPlayer__sub_801BF9E8(void* p, f32 v);
M2C_UNK TObjPlayer__sub_8001BF40();
void init__6gc_tagFv(void *);

void init_tag__10TObjPlayerFPv(s32 *arg0) {
    *arg0 = 0;
    init__6gc_tagFv((char *)arg0 + 4);
}

void reset_counter_field4__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    TObjPlayer__sub_8001BF40();
}

    extern const float TObjPlayer__data_805DC294;
void set_vec3_const__10TObjPlayerFPv(void* a0) { *(float*)((char*)a0 + 0x0) = TObjPlayer__data_805DC294; *(float*)((char*)a0 + 0x4) = TObjPlayer__data_805DC294; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC294; }

void TObjPlayer__sub_801BF9E0(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801BF9E8(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }

}
