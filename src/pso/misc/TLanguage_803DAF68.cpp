#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_803DAF70 { s32 a; s32 b; u8 *p; };

struct Tbl_803DAF70 { Ent_803DAF70 *arr; };

struct G_803DAF70 { u8 pad[0x20]; Tbl_803DAF70 *f20; };

extern "C" {
extern u8 *lbl_805D774C;
void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1);
void set_entry_index__9TLanguageFii(s32 i, s32 x);
}

extern "C" {

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1);

void set_index__9TLanguageFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
#pragma push
#pragma scheduling off
#pragma peephole off
void set_entry_index__9TLanguageFii(s32 i, s32 x) {
    set_index__9TLanguageFPvi(((G_803DAF70 *)lbl_805D774C)->f20->arr[i].p, x);
}
#pragma pop

}
