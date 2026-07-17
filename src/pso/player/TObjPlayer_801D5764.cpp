#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0);
void set_field_1c__10TObjPlayerFPvi(void* p, s32 v);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);

s32 get_owner_if_alive__10TObjPlayerFPv(void *arg0) {
    if (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    return 0;
}
void set_field_1c__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }

}
