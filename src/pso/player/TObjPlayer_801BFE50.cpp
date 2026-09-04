#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void* init_pair__10TObjPlayerFPv(void* p);
s32 init_state__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_801BFE88(void*);
void TObjPlayer__sub_801BFED4(void* p);
int clear_id__10TObjPlayerFPv(void*);
s32 init_forward__10TObjPlayerFPv();
M2C_UNK setup_state__10TObjPlayerFi();
int setup_state_helper__10TObjPlayerFPv(void* p);

void* init_pair__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BFE88(p); TObjPlayer__sub_801BFE88((char*)p + 0xc); return p; }

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

s32 init_state__10TObjPlayerFi(s32 arg0) {
    setup_state__10TObjPlayerFi();
    TObjPlayer__sub_801BFED4((void *) (arg0));
    return arg0;
}

}

}
