#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_80049858(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80156990(void *, int);
void __dl__7TObjectFPv(void *);
void fn_80049A0C(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80484A94[];

void *TObjPlayer__sub_80049858(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484A94;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); }
        if (M2C_FIELD(arg0, void **, 0x10) != NULL) { fn_80049A0C(M2C_FIELD(arg0, void **, 0x10)); }
        TObjPlayer__sub_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
