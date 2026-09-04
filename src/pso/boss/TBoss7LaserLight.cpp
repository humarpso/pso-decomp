#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss7LaserLight__sub_802EF120(void* p);
void TBoss7LaserLight__sub_802EF12C(void* p);
void *__dt__16TBoss7LaserLightFv(void *arg0, s16 arg1);
void render__16TBoss7LaserLightFv(void);
void TObjLight__sub_801335F0(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void render__16TBoss7LaserLightFv(void) {  }

void TBoss7LaserLight__sub_802EF120(void* p) { *(s32*)((char*)p + 0x24) = 2; }
void TBoss7LaserLight__sub_802EF12C(void* p) { *(s32*)((char*)p + 0x24) = 1; }

extern M2C_UNK __vt__16TBoss7LaserLight[];

void *__dt__16TBoss7LaserLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TBoss7LaserLight;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { TObjLight__sub_801335F0(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
