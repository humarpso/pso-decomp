#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TObjBoss1Rock__ct(void *, void *, void *, void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_80482078[];

void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
    TObjBoss1Rock__ct(arg0, arg2, arg3, arg4);
    return arg0;
}

}
