#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void fn_80156720(void *);
void fn_80156990(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TObjLaboDesignBase[];

void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLaboDesignBase;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        fn_80156720(arg0);
        fn_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
