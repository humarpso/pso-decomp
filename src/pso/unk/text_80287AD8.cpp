#include "types.h"
struct Obj_80287BE8 { u8 pad[0x30]; f32 f30; f32 f34; u8 pad2[8]; f32 f40; f32 f44; };

typedef struct TWindowTimer_80287B60 {
    u8 pad[0x60];
    u32 flags;
} TWindowTimer_80287B60;

typedef struct TimerChild_80287B60 {
    u8 pad[8];
    f32 x;
} TimerChild_80287B60;

extern "C" {
extern const f32 lbl_805DD880;
void fn_80287BE8(Obj_80287BE8 *o);
u32 TWindowSubStatusDisp__sub_80144D68(char *);
TimerChild_80287B60 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
extern char lbl_8044FCD8[];
extern const f32 lbl_805DD878;
extern const f32 lbl_805DD87C;
void fn_80287B60(TWindowTimer_80287B60 *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80287B60(TWindowTimer_80287B60 *self) {
    f32 width;
    TimerChild_80287B60 *child;
    self->flags &= ~1;
    width = (f32)TWindowSubStatusDisp__sub_80144D68(lbl_8044FCD8);
    child = get_array_entry__20TWindowSubStatusDispFPvi(self, 0);
    child->x = lbl_805DD878 - lbl_805DD87C * width;
}
#pragma pop

#pragma push
#pragma fp_contract on
void fn_80287BE8(Obj_80287BE8 *o) {
    o->f40 += lbl_805DD880 * (o->f30 - o->f40);
    o->f44 += lbl_805DD880 * (o->f34 - o->f44);
}
#pragma pop

}
