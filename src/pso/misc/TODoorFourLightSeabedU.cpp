#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorFourLightSeabedU__vt19(void);
s32 TODoorFourLightSeabedU__vt20(void);
void *__dt__22TODoorFourLightSeabedUFv(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);

extern s32 lbl_805D6610;

s32 TODoorFourLightSeabedU__vt20(void) {
    return lbl_805D6610;
}

extern s32 lbl_805D6614;

s32 TODoorFourLightSeabedU__vt19(void) {
    return lbl_805D6614;
}

extern M2C_UNK __vt__22TODoorFourLightSeabedU[];

void *__dt__22TODoorFourLightSeabedUFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TODoorFourLightSeabedU;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__19TODoorFourLightBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
