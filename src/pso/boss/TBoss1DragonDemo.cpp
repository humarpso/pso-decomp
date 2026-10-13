#include "pso/TBoss1DragonDemo.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8002B744 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8002B744___vt__16TBoss1DragonDemo {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK restore_player_cameras();
u8 *get_scripted_camera_playback();
s32 isV2Mode__12TBoss1DragonFv();
s32 activate_camera_mode(int);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8002B744___vt__16TBoss1DragonDemo __vt__16TBoss1DragonDemo;
extern s32 TBoss1DragonDemo__name;
extern const f32 lbl_805D8128;
u8 *__ct__16TBoss1DragonDemoFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
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
        restore_player_cameras();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
typedef char RecoveredGlobal_8002B744___vt__16TBoss1DragonDemo_size[sizeof(RecoveredGlobal_8002B744___vt__16TBoss1DragonDemo) == 0x18 ? 1 : -1];
TBoss1DragonDemo::~TBoss1DragonDemo() {}
u8 *__ct__16TBoss1DragonDemoFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8002B744, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8002B744, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8002B744, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8002B744, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8002B744, sp10) == 0x8) ? 1 : -1];
    Stack_8002B744 stack;
    s32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__16TBoss1DragonDemo.value;
    M2C_FIELD(arg0, s32 *, 0) = TBoss1DragonDemo__name;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = lbl_805D8128;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    temp_r3 = isV2Mode__12TBoss1DragonFv();
    switch (temp_r3) {
    case 0:
        stack.sp8 = 1;
        stack.sp9 = 0;
        stack.spA = 0;
        stack.spC = M2C_FIELD(arg0, f32 *, 0x20);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x1C);
        activate_camera_mode((int) (5));
        cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x238E));
        break;
    case 1:
        stack.sp8 = 1;
        stack.sp9 = 1;
        stack.spA = 0;
        stack.spC = M2C_FIELD(arg0, f32 *, 0x20);
        stack.sp10 = M2C_FIELD(arg0, f32 *, 0x1C);
        activate_camera_mode((int) (5));
        cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x3333));
        break;
    }
    return arg0;
}

}
