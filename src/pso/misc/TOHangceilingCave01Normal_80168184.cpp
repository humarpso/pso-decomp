#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOHangceilingCave01Normal__ct(void *arg0);
void TOHangceilingCave01__sub_80168588(void *);
void TOHangceilingCave01KeyQuick__sub_80168C6C(void *);

extern M2C_UNK __vt__25TOHangceilingCave01Normal[];
extern void *lbl_805D2FE8;

void *TOHangceilingCave01Normal__ct(void *arg0) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TOHangceilingCave01Normal;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FE8;
    TOHangceilingCave01__sub_80168588(arg0);
    return arg0;
}

}
