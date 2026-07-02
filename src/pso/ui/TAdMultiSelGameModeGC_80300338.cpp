#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiSelGameModeGC__sub_80300338(void);
void TAdMultiSelGameModeGC__sub_80300360(void *arg0);
int fn_8000F9CC(int);
s32 fn_8023EB84();
s32 fn_8023EBB4();
int fn_80300CE4(void);

void TAdMultiSelGameModeGC__sub_80300338(void) { fn_80300CE4(); fn_8000F9CC(14); }
void TAdMultiSelGameModeGC__sub_80300360(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        fn_8023EBB4();
        return;
    case 1:
        fn_8023EB84();
        return;
    }
}

}
