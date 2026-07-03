#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOHangceilingCave01Key__ct(void *arg0);
void fn_80168588(void *);
void fn_80168C6C(void *);

extern M2C_UNK __vt__22TOHangceilingCave01Key[];
extern void *lbl_805D2FEC;

void *TOHangceilingCave01Key__ct(void *arg0) {
    fn_80168C6C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TOHangceilingCave01Key;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2FEC;
    fn_80168588(arg0);
    return arg0;
}

}
