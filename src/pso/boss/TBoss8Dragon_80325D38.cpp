#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_80325D58 { f32 x; f32 y; f32 z; } Vec_80325D58;

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TObjPlayer__sub_8001978C(f32);
f32 TObjPlayer__sub_803D89C0(void *, void *);
void TNpcPlayer__sub_803D97B4(void *);
extern const f32 lbl_805DF630;
extern const f32 lbl_805DF634;
s32 TObjPlayer__sub_80325D58(void *arg0, Vec_80325D58 *from, Vec_80325D58 *dir, Vec_80325D58 *to, f32 dist);
}

extern "C" {

int queue_destruction__12TBoss8DragonFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int queue_destruction__12TBoss8DragonFPv(void* p) { return queue_destruction__7TObjectFv(p); }
#pragma push
#pragma fp_contract on
#define STEP_80325D58() \
    { \
        f32 xx = d.x * d.x; \
        f32 yy = d.y * d.y; \
        f32 zz = d.z * d.z; \
        if (TObjPlayer__sub_8001978C(zz + (xx + yy)) <= dist) { \
            return 0; \
        } \
        to->x = dir->x * dist + from->x; \
        to->y = dir->y * dist + from->y; \
        to->z = dir->z * dist + from->z; \
        return 1; \
    }
s32 TObjPlayer__sub_80325D58(void *arg0, Vec_80325D58 *from, Vec_80325D58 *dir, Vec_80325D58 *to, f32 dist) {
    Vec_80325D58 d;
    Vec_80325D58 n;
    f32 t;
    d.x = to->x - from->x;
    d.y = to->y - from->y;
    d.z = to->z - from->z;
    t = TObjPlayer__sub_803D89C0(dir, &d);
    if (lbl_805DF630 > t) {
        VecCopy__FP3VecPC3Vec(to, from);
        return 1;
    }
    if (lbl_805DF634 != t) {
        VecCopy__FP3VecPC3Vec(&n, &d);
        TNpcPlayer__sub_803D97B4(&n);
        if (lbl_805DF634 != TObjPlayer__sub_803D89C0(dir, &n)) {
            STEP_80325D58()
        }
        STEP_80325D58()
    }
    STEP_80325D58()
}
#pragma pop

}
