#include "pso/TObjBoss2Dust.h"

TObjBoss2Dust::~TObjBoss2Dust() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjBoss2DustCtrl__sub_8003AB5C();
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust __vt__13TObjBoss2Dust;
extern s32 lbl_805D26FC;
u8 *__ct__13TObjBoss2DustFv(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void run_task__13TObjBoss2DustFv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv();

extern const f32 lbl_805D85B0;

void run_task__13TObjBoss2DustFv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805D85B0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= 0x5A) {
        queue_destruction__7TObjectFv();
    }
}
typedef char RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust_size[sizeof(RecoveredGlobal_8003AA9C___vt__13TObjBoss2Dust) == 0x18 ? 1 : -1];
u8 *__ct__13TObjBoss2DustFv(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjBoss2Dust.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26FC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x24), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = TObjBoss2DustCtrl__sub_8003AB5C();
    return arg0;
}

}
