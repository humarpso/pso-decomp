#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOAirconCave01__sub_80156E48(void *arg0);
void TObjPlayer__sub_800D9718(void *);
void fn_80156CEC(void *);

extern M2C_UNK lbl_804AF8D8[];

void *TOAirconCave01__sub_80156E48(void *arg0) {
    TObjPlayer__sub_800D9718(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_804AF8D8;
    fn_80156CEC(arg0);
    return arg0;
}

}
