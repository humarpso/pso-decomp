#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjBoss5FloorGrass__sub_8028AAFC(void);
void *__ct__19TObjBoss5FloorGrassFv(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TObjBoss5FloorGrass__sub_8028AAFC(void) {
    void *o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__19TObjBoss5FloorGrassFv(o, tl_02);
    }
    return o;
}

}
