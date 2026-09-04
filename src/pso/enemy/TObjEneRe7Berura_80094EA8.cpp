#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0);
s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv();

void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B8) = get_field_3D4_shifted__16TObjEneRe7BeruraFPv();
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}

}
