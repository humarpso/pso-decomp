#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK fn_801566CC(void *);
M2C_UNK fn_803088D0(void *);

extern M2C_UNK __vt__14TBoss7Crawfish[];

void *__dt__14TBoss7CrawfishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TBoss7Crawfish;
        TObjPlayer__sub_80154A00(arg0);
        fn_801566CC(arg0);
        fn_803088D0(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
