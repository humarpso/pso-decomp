#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int on_attack_finished__10TObjPlayerFPv(void* p);
int set_flag_1_at_c__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvi(void* p, s32 v);
s32 get_field_1c__10TObjPlayerFPv(void* p);
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_8012ADD4(void*);
s32 TObjPlayer__sub_801D3424(void *, s32);

void set_action_type__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 get_field_1c__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

}
