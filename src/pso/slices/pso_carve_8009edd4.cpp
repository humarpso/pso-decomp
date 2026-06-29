#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe1Canadin__sub_8009EE1C(void* p);
void TObjEneMe1Canadin__sub_8009EE18(void);
void TObjEneMe1Canadin__sub_8009EE84(void);

int TObjEneMe1Canadin__sub_8009EDD4(void) { return 0; }
void TObjEneMe1Canadin__sub_8009EE18(void) {  }
void TObjEneMe1Canadin__sub_8009EE1C(void* p) { if (*(short*)((char*)p + 0x326) != 12) { TObjEneDD__sub_800BBA18(p, (void*)12); } }
void TObjEneMe1Canadin__sub_8009EE4C(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0xD) && (temp_r0 != 0xB)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0xD));
    }
}
void TObjEneMe1Canadin__sub_8009EE84(void) {  }

}
