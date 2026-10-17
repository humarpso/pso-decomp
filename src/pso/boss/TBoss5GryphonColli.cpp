#include "types.h"
#include "pso/TBoss5GryphonDemo.h"
#include "pso/TBoss5GryphonColli.h"
extern "C" {
s32 gryphon_demo_collision_body_desc[11] = { 0, 0, 0, 0x3F800000, 0, 0, 0x8003, 0, 0, 0, 0 };

void TBoss5GryphonDemo__sub_8006626C(void* p);

int TBoss5GryphonDemo::get_state() { return ((int (*)(void*))TBoss5GryphonDemo__sub_8006626C)(*(void**)((char*)this + 0x1c)); }
void TBoss5GryphonDemo::draw_linked_model(void* position, s32 yaw) { ((TBoss5GryphonDemo *)(((TBoss5GryphonColli*)this)->objects[0]))->draw_model(position, yaw); }

s32 TBoss5GryphonDemo__sub_800663DC(int, void *, int, void *, f32);
s32 __ct__7TObjectFP7TObject(void *, void *);
}

extern "C" void queue_destruction__7TObjectFv(void*);

TBoss5GryphonColli::~TBoss5GryphonColli() {
    for (s32 index = 0; index < 1; ++index) {
        if (objects[index] != NULL) {
            queue_destruction__7TObjectFv(objects[index]);
            objects[index] = NULL;
        }
    }
}

#include <stddef.h>
struct Stack_800661E4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800661E4___vt__18TBoss5GryphonColli {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
extern RecoveredGlobal_800661E4___vt__18TBoss5GryphonColli __vt__18TBoss5GryphonColli;
extern s32 lbl_805D280C;
extern const f32 lbl_805D8ED0;
extern const f32 lbl_805D8ED4;
extern const f32 lbl_805D8ED8;
u8 *TBoss5GryphonColli__ct(u8 *arg0, s32 arg1);
typedef char RecoveredGlobal_800661E4___vt__18TBoss5GryphonColli_size[sizeof(RecoveredGlobal_800661E4___vt__18TBoss5GryphonColli) == 0x18 ? 1 : -1];
u8 *TBoss5GryphonColli__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800661E4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800661E4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800661E4, sp10) == 0x8) ? 1 : -1];
    Stack_800661E4 stack;
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__18TBoss5GryphonColli.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D280C;
    stack.sp8 = lbl_805D8ED0;
    stack.spC = lbl_805D8ED0;
    stack.sp10 = lbl_805D8ED4;
    temp_r3 = __nw__7TObjectFUl((int) (0xB8));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TBoss5GryphonDemo__sub_800663DC((int) (temp_r3), (void *) (arg0), (int) (1), (void *) (&stack.sp8), (f32) (lbl_805D8ED8));
    }
    *(s32 *)((s8 *)arg0 + 0x1C) = var_r0;
    return arg0;
}

}
