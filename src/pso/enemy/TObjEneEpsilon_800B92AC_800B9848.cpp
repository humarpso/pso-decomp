#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_800B98C0 { u8 pad[0x38c]; u16 f38c; u8 pad2[2]; s32 f390; };

struct Obj_800B9958 { u8 pad[0x38c]; u16 id; u8 pad2[2]; s32 ptr; };

extern "C" {
void fn_800B98A4(u8 *arg0, s32 arg1);
s32 TObjEneEpsilon__sub_800B9848(void *self, u16 x);
void fn_800B98C0(O_800B98C0 *self, u16 _w1);
s32 TNpcPlayer__sub_800D87EC(u16);
void TBoss8Dragon__sub_800B9958(Obj_800B9958 *self, u16 id);
}

extern "C" {

int TBoss2DeRolLe__sub_800B98D8(void);
int TObjEneEpsilon__vt101(void* p);
int spawn_part__14TObjEneEpsilonFi(void*);

s32 TObjEneEpsilon__sub_800B9848(void *self, u16 x) {
    if (x != 0xFFFF) {
        TBoss8Dragon__sub_800B9958((Obj_800B9958 *)((void *)(self)), x);
        return 1;
    }
    fn_800B98C0((O_800B98C0 *)((void *)(self)), x);
    return 0;
}

int TObjEneEpsilon__vt101(void* p) { return spawn_part__14TObjEneEpsilonFi(p); }

void fn_800B98A4(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) (M2C_FIELD(arg0, u16 *, 0x1C) % arg1);
    M2C_FIELD(arg0, s32 *, 0x3B4) = arg1;
}

void fn_800B98C0(O_800B98C0 *self, u16 _w1) {
    self->f390 = 0;
    self->f38c = 0xFFFF;
}

int TBoss2DeRolLe__sub_800B98D8(void) { return 0; }
void TBoss8Dragon__sub_800B9958(Obj_800B9958 *self, u16 id) {
    self->id = id;
    if (id != 0xFFFF) {
        self->ptr = TNpcPlayer__sub_800D87EC(self->id);
    } else {
        self->id = 0xFFFF;
        self->ptr = 0;
    }
}

}
