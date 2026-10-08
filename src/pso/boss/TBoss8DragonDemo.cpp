#include "pso/TBoss8DragonDemo.h"

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802F2D8C {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_802F2D8C___vt__16TBoss8DragonDemo {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_802F2CC4_lbl_804E4A44 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct O_8002B108 { u8 pad[0x1c]; s32 arr[1]; };

struct Obj_8002B118 { u8 pad[0x1c]; void *colli[3]; };

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK restore_player_cameras();
u8 *get_scripted_camera_playback();
void run_task__16TBoss8DragonDemoFv(u8 *arg0);
s32 activate_camera_mode(int);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_802F2D8C___vt__16TBoss8DragonDemo __vt__16TBoss8DragonDemo;
extern s32 lbl_805D3FF8;
extern const f32 lbl_805DED18;
u8 *__ct__16TBoss8DragonDemoFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0);
extern RecoveredGlobal_802F2CC4_lbl_804E4A44 lbl_804E4A44;
extern const f32 lbl_805DE9F4;
void TBoss8DragonDemo__sub_802F2CC4(void);
void TBoss8DragonColli__sub_802F3074(void *c);
void update_colli_parts__12TBoss8DragonFPv(Obj_8002B118 *self);
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

typedef char RecoveredGlobal_802F2CC4_lbl_804E4A44_size[sizeof(RecoveredGlobal_802F2CC4_lbl_804E4A44) == 0x90 ? 1 : -1];
void TBoss8DragonDemo__sub_802F2CC4(void) {
    M2C_FIELD(&lbl_804E4A44.value, f32 *, 4) = (f32) lbl_805DE9F4;
    M2C_FIELD(&lbl_804E4A44.value, f32 *, 0x10) = (f32) lbl_805DE9F4;
}

void render__16TBoss8DragonDemoFv(void) {  }

void run_task__16TBoss8DragonDemoFv(u8 *arg0) {
    if ((M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) || ((s32) *M2C_FIELD(arg0, s32 **, 0x24) == 0)) {
        restore_player_cameras();
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
typedef char RecoveredGlobal_802F2D8C___vt__16TBoss8DragonDemo_size[sizeof(RecoveredGlobal_802F2D8C___vt__16TBoss8DragonDemo) == 0x18 ? 1 : -1];
TBoss8DragonDemo::~TBoss8DragonDemo() {}
u8 *__ct__16TBoss8DragonDemoFv(u8 *arg0, s32 arg1, s32 arg2, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802F2D8C, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_802F2D8C, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_802F2D8C, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802F2D8C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802F2D8C, sp10) == 0x8) ? 1 : -1];
    Stack_802F2D8C stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__16TBoss8DragonDemo.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3FF8;
    M2C_FIELD(arg0, f32 *, 0x1C) = farg0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DED18;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    stack.sp8 = 1;
    stack.sp9 = 0;
    stack.spA = 0;
    stack.spC = M2C_FIELD(arg0, f32 *, 0x20);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x1C);
    activate_camera_mode((int) (5));
    cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x3333));
    return arg0;
}
void update_colli_parts__12TBoss8DragonFPv(Obj_8002B118 *self) {
    s32 i;
    for (i = 0; i < 3; i++) {
        TBoss8DragonColli__sub_802F3074(self->colli[i]);
    }
}

}

__declspec(section ".ctors") static void *const __sinit_TBoss8DragonDemo_cpp_ref = (void *)TBoss8DragonDemo__sub_802F2CC4;
