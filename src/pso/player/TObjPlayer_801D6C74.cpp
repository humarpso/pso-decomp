#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1);
void* init_sub_objects__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D7860(void*);
M2C_UNK __dl__FPv(s32);
int fn_801D6A18(void*);
M2C_UNK fn_801D6B8C();
int fn_801D6C4C(void*);

s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_801D6B8C();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void* init_sub_objects__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801D7860((char*)p + 0x8); TObjPlayer__sub_801D7860((char*)p + 0x18); TObjPlayer__sub_801D7860((char*)p + 0x28); TObjPlayer__sub_801D7860((char*)p + 0x38); TObjPlayer__sub_801D7860((char*)p + 0x48); fn_801D6A18((char*)p + 0x58); *(int*)((char*)p + 0x4) = 0; fn_801D6C4C(p); return p; }

}
