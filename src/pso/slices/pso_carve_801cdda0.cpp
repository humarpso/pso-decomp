#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_801CDDA0(void *arg0);
M2C_UNK fn_8001053C();
M2C_UNK fn_801D2630(void *);
int fn_801CDDEC(void* p);
int fn_801CEF38(void*);

void fn_801CDDA0(void *arg0) {
    void *temp_r4;

    fn_8001053C();
    fn_801D2630(arg0);
    temp_r4 = M2C_FIELD(arg0, void **, 0x424);
    if (temp_r4 != NULL) {
        M2C_FIELD(temp_r4, u16 *, 0x508) = 0xFFFF;
    }
}
int fn_801CDDEC(void* p) { return fn_801CEF38(p); }
int fn_801CDE0C(void) { return 0; }

}
