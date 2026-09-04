#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjAreaWarpForest__vt17(void* p);
void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
int TObjAreaWarp__sub_8019CA24(void*);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

int TObjAreaWarpForest__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

extern M2C_UNK __vt__18TObjAreaWarpForest[];

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpForest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
