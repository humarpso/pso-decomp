#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_801BFC90(void*);
void TObjPlayer__sub_801BFD3C(void* p);
void* init_members__10TObjPlayerFPv(void* p);
void* init_sub__10TObjPlayerFPv(void* p);
void* init_subobjects__10TObjPlayerFPv(void* p);
void* init_wrapper__10TObjPlayerFPv(void* p);
void* reset_and_clear__10TObjPlayerFPv(void* p);
void reset_scale_vector__10TObjPlayerFPv(void *arg0);
void* set_vec4_const_wrapper__10TObjPlayerFPv(void* p);
void* wrap_update__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BF964(void*);
int TObjPlayer__sub_801BFDD4(void*);
int init_forward__10TObjPlayerFPv(void*);
int init_pair__10TObjPlayerFPv(void*);
int reset_counter_field4__10TObjPlayerFPv(void*);
int reset_stat_scale_and_ring__10TObjPlayerFi(void*);
int set_vec4_const__10TObjPlayerFPv(void*);

extern const f32 TObjPlayer__data_805DC278;

void reset_scale_vector__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, f32 *, 8) = (f32) TObjPlayer__data_805DC278;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

void* reset_and_clear__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv(p); reset_counter_field4__10TObjPlayerFPv(p); return p; }
void* wrap_update__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFC90((void*)(p)); return p; }

int TObjPlayer__sub_801BFC90(void*) { return 0; }

void* set_vec4_const_wrapper__10TObjPlayerFPv(void* p) { set_vec4_const__10TObjPlayerFPv(p); return p; }
void* init_members__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BF964(p); return p; }
void* init_wrapper__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFD3C((void*)(p)); return p; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* init_sub__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0xc); reset_stat_scale_and_ring__10TObjPlayerFi(p); return p; }
void* init_subobjects__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0x4); init_pair__10TObjPlayerFPv((char*)p + 0x18); TObjPlayer__sub_801BFDD4(p); return p; }

}
