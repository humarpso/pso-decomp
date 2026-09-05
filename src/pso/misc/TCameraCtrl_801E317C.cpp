#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern f32 lbl_805D3588;
extern f32 lbl_805D358C;
void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1);
}

extern "C" {

void TCameraCtrl__sub_801E32E4(void);
int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);

void TCameraCtrl__sub_801E32D8(f32 farg0, f32 farg1) {
    lbl_805D3588 = farg0;
    lbl_805D358C = farg1;
}

void TCameraCtrl__sub_801E32E4(void) {  }

}
