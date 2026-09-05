#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TObjTailsTailsMove__sub_800FFE14(s32, s32, void *);
M2C_UNK TObjTailsTailsMove__sub_800FFE04();
void fn_800F93B4(s32 arg0, s32 arg1, void *arg2);
void fn_800F93B4(s32 arg0, s32 arg1, void *arg2);
}

extern "C" {

void fn_800F93B4(s32 arg0, s32 arg1, void *arg2) {
    TObjTailsTailsMove__sub_800FFE14(TObjTailsTailsMove__sub_800FFE04(), arg1, arg2);
}

}
