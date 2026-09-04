#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__20TBoss7TentacleNeedleFv(void *arg0);

M2C_UNK TBoss7Tentacle__sub_802EF954();
M2C_UNK TBoss7Tentacle__sub_802EF99C();
M2C_UNK TBoss7Tentacle__sub_802EFB1C();
M2C_UNK advance_needle_timer__20TBoss7TentacleNeedleFPv();

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

}
#else
#if PSO_CLASS_PACKAGE == 0x802EFBA4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0);

extern const f32 lbl_805DEC1C;

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 == 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805DEC1C;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EFBD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__20TBoss7TentacleNeedleFv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void draw_effect__10TObjPlayerFv(void *);
void TObjPlayer__sub_803D99F8(void *, int);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);

extern void *lbl_805D6948;

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    draw_effect__10TObjPlayerFv(arg0);
    set_global_flag__10TObjPlayerFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 28));
    TObjPlayer__sub_803D99F8((void *)((char *)arg0 + 40), 1);
    TObjEneSlimeOne__sub_803E4AF4(lbl_805D6948, M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    TObjPlayer__sub_803D9B78();
    clear_global_state__10TObjPlayerFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802EFC94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TBoss7TentacleNeedleFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

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
#endif
#endif
