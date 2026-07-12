#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0);
void TObjEneMe3SinowZoa__sub_8031AADC(void* p);
void init_setup__18TObjEneMe3SinowZoaFPv(void* p);
void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0);
int TObjEneDD__vt92(void*);
int TObjEneDD__vt93(void*);
int TObjEneMe3Stelth__sub_800F5864(void*, void*);
int TObjEneMe3Stelth__sub_800F5874(void*, void*);
s32 TObjEneMe3SinowZoa__sub_8031A494(void *);
s32 TObjEneMe3SinowZoa__sub_8031A4D0();

extern const f32 lbl_805DF304;
extern const f32 lbl_805DF360;
extern const f32 lbl_805DF388;
extern const f32 lbl_805DF38C;

void setup_move_bounds__18TObjEneMe3SinowZoaFPv(void *arg0) {
    if (TObjEneMe3SinowZoa__sub_8031A4D0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = TObjEneMe3SinowZoa__sub_8031A494(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (lbl_805DF388 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (lbl_805DF360 + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) (lbl_805DF38C + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (lbl_805DF304 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

void TObjEneMe3SinowZoa__sub_8031AADC(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_setup__18TObjEneMe3SinowZoaFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void update_shadow_height__18TObjEneMe3SinowZoaFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

}
