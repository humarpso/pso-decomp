#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void TObjEneMe3SinowZoa__sub_800D75F4(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E4));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E4) = 0;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E0));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E0) = 0;
        if (M2C_FIELD(arg0, void **, 0x424) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x424)); M2C_FIELD(arg0, M2C_UNK *, 0x424) = 0; }
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        TObjEneMe3SinowZoa__sub_800D75F4((s8 *)arg0 + 0x3E8, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
