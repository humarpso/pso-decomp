#include "types.h"

struct RecoveredGlobal_80036FC8___vt__11TBoss2Joint {
    s32 value;
    u8 remaining[0x1A4];
};

struct RecoveredGlobal_80036A90_lbl_80435A68 {
    s32 value;
    u8 remaining[0x1C];
};

struct V3_80037178 { f32 x, y, z; };

struct Obj_80037178 { u8 pad[0x1c]; V3_80037178 ring[20]; s32 idx; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(s32, s32);
extern const f32 lbl_805DEBC0;
void push_ring_point__15TBoss7LaserPtclFPvPv(Obj_80037178 *self, V3_80037178 *src);
typedef char RecoveredGlobal_80036A90_lbl_80435A68_size[sizeof(RecoveredGlobal_80036A90_lbl_80435A68) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80036FC8___vt__11TBoss2Joint_size[sizeof(RecoveredGlobal_80036FC8___vt__11TBoss2Joint) == 0x1A8 ? 1 : -1];
void push_ring_point__15TBoss7LaserPtclFPvPv(Obj_80037178 *self, V3_80037178 *src) {
    VecCopy__FP3VecPC3Vec((s32)&self->ring[self->idx], (s32)src);
    self->ring[self->idx].y += lbl_805DEBC0;
    self->idx++;
    if (self->idx >= 20) {
        self->idx = 0;
    }
}

}
