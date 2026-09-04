#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80313114(void);
int TObjPlayer__sub_80313138(void* a0 = 0);
int TObjPlayer__sub_803131AC(void);
int TObjPlayer__sub_803131B4(void);
int TObjPlayer__sub_80313218(void* p);
void TObjPlayer__sub_80313250(void *arg0, s32 arg1);
int check_flag_at_4__10TObjPlayerFPv(void* p);
int get_max_children__10TObjPlayerFPv(void*);
void process_indexed_element__10TObjPlayerFii(s32 arg0, s32 arg1);
int query_field40__10TObjPlayerFPv(void* p);
void set_field_0__10TObjPlayerFPvs(void* p, s16 v);
void update_children__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801AA64C(void* a0 = 0);
int set_flags__10TObjPlayerFPvUi(void*, int);

void update_children__10TObjPlayerFPv(void* p) { { int n = get_max_children__10TObjPlayerFPv((void*)(p)); int i; for (i = 0; i < n; i++) { TObjPlayer__sub_801AA64C((char*)p + 0x8 + i * 4); } } }

int TObjPlayer__sub_80313114(void) { return 0; }
int TObjPlayer__sub_80313138(void* a0) { return 0; }

int query_field40__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x40, 4); }
int TObjPlayer__sub_803131AC(void) { return 4; }

int TObjPlayer__sub_803131B4(void) { return 0; }

void process_indexed_element__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_80313138((void*)((void*)(arg0 + (arg1 * 0x18))));
}

int check_flag_at_4__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x4, 1); }
int TObjPlayer__sub_80313218(void* p) { return (TObjPlayer__sub_8001BEF8((char*)p + 0x4, 1)) == 0; }
void set_field_0__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_80313250(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) + arg1);
}
int get_max_children__10TObjPlayerFPv(void*) { return 4; }

}
