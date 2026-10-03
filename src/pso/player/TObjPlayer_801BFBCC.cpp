#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801BFBEC_lbl_804C3E38 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct O_801BFC90 { u16 a; u16 b; s32 c; };

extern "C" {
s32 reset_type__10TObjPlayerFPv(void *);
extern RecoveredGlobal_801BFBEC_lbl_804C3E38 lbl_804C3E38;
u8 *TObjPlayer__sub_801BFBEC(u8 *arg0);
void TObjPlayer__sub_801BFC90(O_801BFC90 *p);
void clear_id__10TObjPlayerFPv(void *);
void set_speed__10TObjPlayerFPvf(void *, f32);
extern const f32 lbl_805DC2DC;
int init_player_scale_state(void *arg0);
}

extern "C" {

void TObjPlayer__sub_801BFD3C(void* p);
void* init_members__10TObjPlayerFPv(void* p);
void* init_sub__10TObjPlayerFPv(void* p);
void* init_subobjects__10TObjPlayerFPv(void* p);
void* init_wrapper__10TObjPlayerFPv(void* p);
void* reset_and_clear__10TObjPlayerFPv(void* p);
void reset_scale_vector__10TObjPlayerFPv(void *arg0);
void* set_vec4_const_wrapper__10TObjPlayerFPv(void* p);
void* wrap_update__10TObjPlayerFPv(void* p);
int zero_vec3(void*);
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

typedef char RecoveredGlobal_801BFBEC_lbl_804C3E38_size[sizeof(RecoveredGlobal_801BFBEC_lbl_804C3E38) == 0xC ? 1 : -1];
u8 *TObjPlayer__sub_801BFBEC(u8 *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &lbl_804C3E38.value;
    reset_type__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void* reset_and_clear__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv(p); reset_counter_field4__10TObjPlayerFPv(p); return p; }
void* wrap_update__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFC90((O_801BFC90 *)((void*)(p))); return p; }

void TObjPlayer__sub_801BFC90(O_801BFC90 *p) {
    p->c = 0;
    p->a = 0xFFFF;
    p->b = 0;
}

void* set_vec4_const_wrapper__10TObjPlayerFPv(void* p) { set_vec4_const__10TObjPlayerFPv(p); return p; }
void* init_members__10TObjPlayerFPv(void* p) { zero_vec3(p); return p; }
void* init_wrapper__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFD3C((void*)(p)); return p; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* init_sub__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0xc); reset_stat_scale_and_ring__10TObjPlayerFi(p); return p; }
void* init_subobjects__10TObjPlayerFPv(void* p) { init_forward__10TObjPlayerFPv((char*)p + 0x4); init_pair__10TObjPlayerFPv((char*)p + 0x18); init_player_scale_state((void *)(p)); return p; }
int init_player_scale_state(void *arg0) {
    *(u16 *)arg0 = 0xFFFF;
    clear_id__10TObjPlayerFPv((u8 *)arg0 + 4);
    set_speed__10TObjPlayerFPvf(arg0, lbl_805DC2DC);
}

}
