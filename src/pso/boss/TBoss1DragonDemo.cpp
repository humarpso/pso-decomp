#include "pso/TBoss1DragonDemo.h"

TBoss1DragonDemo::~TBoss1DragonDemo() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TCameraCtrl__sub_80069DA8();
u8 *get_scripted_camera_playback();
}

extern "C" {

void TBoss1DragonDemo__sub_8002B68C(void);
void TBoss1DragonDemo__sub_8002B690(void);
void render__16TBoss1DragonDemoFv(void);

void TBoss1DragonDemo__sub_8002B68C(void) {  }
void TBoss1DragonDemo__sub_8002B690(void) {  }

void render__16TBoss1DragonDemoFv(void) {  }

void run_task__16TBoss1DragonDemoFv(u8 *arg0) {
    if ((M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) || ((s32) *M2C_FIELD(arg0, s32 **, 0x24) == 0)) {
        TCameraCtrl__sub_80069DA8();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
