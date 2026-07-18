#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_80313138(void* a0 = 0);

void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int get_max_children__10TObjPlayerFPv(void* a0 = 0);
void update_children__10TObjPlayerFPv(void* p);
int query_field40__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_803131AC(void);
int check_flag_at_4__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80313218(void* p);
void set_field_0__10TObjPlayerFPvs(void* p, s16 v);
int set_flags__10TObjPlayerFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);

void process_indexed_element__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_80313138((void*)(arg0 + (arg1 * 0x18)));
}

}
