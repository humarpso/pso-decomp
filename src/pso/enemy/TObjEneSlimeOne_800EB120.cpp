#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1);
void request_destroy__11TBoss4Type2FUi(void *);
void __dt__15TObjEneSlimeOneFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__15TObjEneSlimeOne[];

void *__dt__15TObjEneSlimeOneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjEneSlimeOne;
        TObjEneGibbles__sub_80156720(arg0);
        M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0;
        if (M2C_FIELD(arg0, void **, 0x3E8) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3E8)); M2C_FIELD(arg0, M2C_UNK *, 0x3E8) = 0; }
        __dt__15TObjEneSlimeOneFis(M2C_FIELD(arg0, void **, 0x388), 1);
        M2C_FIELD(arg0, M2C_UNK *, 0x388) = 0;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
