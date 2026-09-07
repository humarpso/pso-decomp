#include "pso/TAdGameStartSubGC.h"

TAdGameStartSubGC::~TAdGameStartSubGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 lbl_805DE9A0;
extern const f32 lbl_805DE9A4;
extern const f32 lbl_805DE9A8;
extern const f32 lbl_805DE9AC;
void run_task__17TAdGameStartSubGCFv(u8 *arg0);
}

extern "C" {

void render__17TAdGameStartSubGCFv(void* p);
int TAdGameStartSubGC__sub_802E6864(void*);
int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);

void render__17TAdGameStartSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); TAdGameStartSubGC__sub_802E6864(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
#pragma push
#pragma fp_contract on
void run_task__17TAdGameStartSubGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + 1);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r4 < 4) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) -((lbl_805DE9A4 * (f32) temp_r4) - lbl_805DE9A0);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DE9A4 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) - lbl_805DE9A0);
    } else if (temp_r4 > 0x1C) {
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) -((lbl_805DE9AC * (f32) (temp_r4 - 0x1D)) - lbl_805DE9A8);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) -((lbl_805DE9AC * (f32) (M2C_FIELD(arg0, s32 *, 0x84) - 0x1D)) - lbl_805DE9A8);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x84) > 0x1D) {
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) - 0x55);
        }
        var_r0 = M2C_FIELD(arg0, s32 *, 0x80);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = var_r0;
    }
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x20) - temp_f2)) + temp_f2);
    temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x24) - temp_f2_2)) + temp_f2_2);
    temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((M2C_FIELD(arg0, f32 *, 0x70) * (M2C_FIELD(arg0, f32 *, 0x28) - temp_f2_3)) + temp_f2_3);
    temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x74) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2_4)) + temp_f2_4);
}
#pragma pop

}
