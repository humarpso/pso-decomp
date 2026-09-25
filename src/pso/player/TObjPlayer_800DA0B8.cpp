#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_800DA4B4 { s32 a; s32 b; s32 c; };

struct Obj_800DA4B4 { u8 pad[0x60]; s32 f60; u8 pad2[0x39c - 0x64]; Rec_800DA4B4 recs[1]; };

struct Vec_800DA4B4 { s32 x; s32 y; s32 z; };

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjPlayer__sub_800DB8D4(u8 *arg0);
void *fn_80086D50(void *pos, void *dir, s32 id);
void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i);
}

extern "C" {

void set_flag_20000__10TObjPlayerFPv(void *arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

void set_flag_20000__10TObjPlayerFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000)) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x20000 | 1);
    }
}

void TObjPlayer__sub_800DA4B4(Obj_800DA4B4 *self, s32 i) {
    Vec_800DA4B4 v;
    v.x = self->f60 + 0x4000;
    v.y = 0;
    v.z = 0x4000;
    fn_80086D50(&self->recs[i], &v, 0xfd);
}

void TObjPlayer__sub_800DB8D4(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s32 *, 0x378);
    M2C_FIELD(arg0, s32 *, 0x378) = 5;
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

}
