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

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct En_80287AD8 { u8 pad[8]; f32 f8; };

struct Wn_80287AD8 { u8 pad[0x60]; u32 f60; };

extern "C" {
extern const f32 lbl_805DD880;
void fn_80287BE8(Obj_80287BE8 *o);
u32 TWindowSubStatusDisp__sub_80144D68(char *);
TimerChild_80287B60 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
extern char lbl_8044FCD8[];
extern const f32 lbl_805DD878;
extern const f32 lbl_805DD87C;
void fn_80287B60(TWindowTimer_80287B60 *self);
u32 TWindowSubStatusDisp__sub_80144D68(char *);
TimerChild_80287B60 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
extern u8 lbl_8044FCC8[];
extern const f32 lbl_805DD878;
extern const f32 lbl_805DD87C;
void fn_80287AD8(Wn_80287AD8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80287AD8(Wn_80287AD8 *arg0) {
    f32 temp_f31;
    En_80287AD8 *e;
    arg0->f60 |= 1;
    temp_f31 = (f32)TWindowSubStatusDisp__sub_80144D68((char *)(lbl_8044FCC8));
    e = ((En_80287AD8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0));
    e->f8 = -(lbl_805DD87C * temp_f31 - lbl_805DD878);
}
#pragma pop

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
