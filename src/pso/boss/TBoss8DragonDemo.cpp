#include "pso/TBoss8DragonDemo.h"

TBoss8DragonDemo::~TBoss8DragonDemo() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TCameraCtrl__sub_80069DA8();
u8 *TCameraCtrl__sub_8006C1F0();
void run_task__16TBoss8DragonDemoFv(u8 *arg0);
}

extern "C" {

f32 TBoss8DragonDemo__sub_802F2CB4(void* p);
f32 TBoss8DragonDemo__sub_802F2CBC(void* p);
int copy_position__16TBoss8DragonDemoFPv(void* p);
void render__16TBoss8DragonDemoFv(void);
int VecCopy__FP3VecPC3Vec(void*);

int copy_position__16TBoss8DragonDemoFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x78); }
f32 TBoss8DragonDemo__sub_802F2CB4(void* p) { return *(f32*)((char*)p + 0x5c); }
f32 TBoss8DragonDemo__sub_802F2CBC(void* p) { return *(f32*)((char*)p + 0x54); }

void render__16TBoss8DragonDemoFv(void) {  }

void run_task__16TBoss8DragonDemoFv(u8 *arg0) {
    if ((M2C_FIELD(TCameraCtrl__sub_8006C1F0(), u16 *, 2) & 1) || ((s32) *M2C_FIELD(arg0, s32 **, 0x24) == 0)) {
        TCameraCtrl__sub_80069DA8();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
