#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__13TObjEneRe4Bit[];

void *__dt__13TObjEneRe4BitFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0x3DC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
