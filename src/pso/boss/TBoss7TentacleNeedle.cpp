#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__20TBoss7TentacleNeedleFv(void *arg0, s16 arg1);
void run_task__20TBoss7TentacleNeedleFv(void *arg0);
M2C_UNK TBoss7Tentacle__sub_802EF954();
M2C_UNK TBoss7Tentacle__sub_802EF99C();
M2C_UNK TBoss7Tentacle__sub_802EFB1C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK advance_needle_timer__20TBoss7TentacleNeedleFPv();
void queue_destruction__7TObjectFv(void *);

void run_task__20TBoss7TentacleNeedleFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r0) {
    case 0:
        advance_needle_timer__20TBoss7TentacleNeedleFPv();
        return;
    case 1:
        TBoss7Tentacle__sub_802EFB1C();
        return;
    case 2:
        TBoss7Tentacle__sub_802EF99C();
        return;
    case 3:
        TBoss7Tentacle__sub_802EF954();
        return;
    }
}

extern M2C_UNK __vt__20TBoss7TentacleNeedle[];

void *__dt__20TBoss7TentacleNeedleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TBoss7TentacleNeedle;
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
