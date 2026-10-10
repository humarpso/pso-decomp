#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D53B0;
bool fn_800FD8A0(s32 arg0);
extern s32 current_room_id;
bool is_current_room(s32 arg0);
}

extern "C" {

bool fn_800FD8A0(s32 arg0) {
    return lbl_805D53B0 == arg0;
}
bool is_current_room(s32 arg0) {
    return current_room_id == arg0;
}

}
