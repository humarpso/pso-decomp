#include "types.h"

struct O_8002B108 { u8 pad[0x1c]; s32 arr[1]; };

struct Obj_8002B118 { u8 pad[0x1c]; void *colli[3]; };

extern "C" {
extern f32 TBoss1Dragon__data_805D7F9C;
extern f32 TBoss1Dragon__data_805D7F24;
extern f32 TBoss1Dragon__data_805D7FF8;
extern f32 lbl_805D8014;
extern f32 lbl_805D9E80;
extern f32 lbl_805D4AF0;
extern f32 TBoss1Dragon__gravity_accel;
extern f32 lbl_805D4AF8;
extern f32 boss1_dragon_gravity;
extern f32 lbl_805D4B40;
void init_gravity_globals__12TBoss1DragonFv(void);
s32 TBoss1Dragon__sub_8002B108(O_8002B108 *self, s32 i);
void TBoss1DragonColli__sub_8002B35C(void *c);
void disable_dragon_blocking_bodies(Obj_8002B118 *self);
}

extern "C" {

void init_gravity_globals__12TBoss1DragonFv(void) {
    lbl_805D4AF0 = TBoss1Dragon__data_805D7F9C * lbl_805D9E80;
    TBoss1Dragon__gravity_accel = TBoss1Dragon__data_805D7F24 * lbl_805D9E80;
    lbl_805D4AF8 = TBoss1Dragon__data_805D7FF8 * lbl_805D9E80;
    boss1_dragon_gravity = lbl_805D8014 * lbl_805D9E80;
    lbl_805D4B40 = TBoss1Dragon__data_805D7FF8 * lbl_805D9E80;
}
s32 TBoss1Dragon__sub_8002B108(O_8002B108 *self, s32 i) {
    return self->arr[i];
}
void disable_dragon_blocking_bodies(Obj_8002B118 *self) {
    s32 i;
    for (i = 0; i < 3; i++) {
        TBoss1DragonColli__sub_8002B35C(self->colli[i]);
    }
}

}

__declspec(section ".ctors") static void *const __sinit_TBoss1Dragon_8002B0CC_cpp_ref = (void *)init_gravity_globals__12TBoss1DragonFv;
