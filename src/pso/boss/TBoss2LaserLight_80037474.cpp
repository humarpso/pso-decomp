#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss2LaserLight__sub_80037474(void* p);
void TBoss2LaserLight__sub_80037480(void* p);
void *__dt__16TBoss2LaserLightFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void fn_801335F0(void *);

void TBoss2LaserLight__sub_80037474(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss2LaserLight__sub_80037480(void* p) { *(s32*)((char*)p + 0x24) = 1; }

extern M2C_UNK __vt__16TBoss2LaserLight[];

void *__dt__16TBoss2LaserLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBoss2LaserLight;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { fn_801335F0(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
