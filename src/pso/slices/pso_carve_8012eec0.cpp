#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80101048();
s32 fn_80121200();
s32 TObjBoss2Tunnel__sub_803D929C(s32, s32);
int fn_8012EF40(void* p);
int fn_80115BFC(void*, int);

void fn_8012EEC0(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80121200();
    switch (temp_r3) {
    case 1:
        fn_80101048();
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 2:
        fn_80101048();
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        fn_80101048();
        return;
    }
}
int fn_8012EF40(void* p) { return fn_80115BFC((char*)p + 0x1f8, 3276); }

}
