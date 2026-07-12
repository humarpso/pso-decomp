#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TODoorFourLightSeabedUFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__19TODoorFourLightBaseFv(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);

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
