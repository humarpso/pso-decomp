#include "pso/TAdGameStartShineGC.h"

TAdGameStartShineGC::~TAdGameStartShineGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DFD64;
extern const f32 lbl_805DFD68;
void run_task__19TAdGameStartShineGCFv(u8 *arg0);
}

extern "C" {

void render__19TAdGameStartShineGCFv(void *arg0);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK render_status_box__20TWindowSubStatusDispFPv(void *);

void render__19TAdGameStartShineGCFv(void *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x7C) != 0)) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        render_status_box__20TWindowSubStatusDispFPv(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}
#pragma push
#pragma fp_contract on
void run_task__19TAdGameStartShineGCFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    s32 temp_r4;
    s32 var_r0;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x78);
    M2C_FIELD(arg0, s32 *, 0x78) = (s32) (temp_r4 + 1);
    if (temp_r4 >= 0xA) {
        M2C_FIELD(arg0, s32 *, 0x7C) = 1;
        M2C_FIELD(arg0, s32 *, 0x74) = (s32) (M2C_FIELD(arg0, s32 *, 0x74) - 0xE);
        var_r0 = M2C_FIELD(arg0, s32 *, 0x74);
        if (var_r0 < 0) {
            var_r0 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x74) = var_r0;
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) -((lbl_805DFD68 * (f32) (M2C_FIELD(arg0, s32 *, 0x78) - 0xB)) - lbl_805DFD64);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DFD64;
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) ((M2C_FIELD(arg0, f32 *, 0x1C) * (M2C_FIELD(arg0, f32 *, 0x2C) - temp_f2)) + temp_f2);
        temp_f2_2 = M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) ((M2C_FIELD(arg0, f32 *, 0x20) * (M2C_FIELD(arg0, f32 *, 0x30) - temp_f2_2)) + temp_f2_2);
        temp_f2_3 = M2C_FIELD(arg0, f32 *, 0x4C);
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x1C) * (M2C_FIELD(arg0, f32 *, 0x34) - temp_f2_3)) + temp_f2_3);
        temp_f2_4 = M2C_FIELD(arg0, f32 *, 0x50);
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) ((M2C_FIELD(arg0, f32 *, 0x20) * (M2C_FIELD(arg0, f32 *, 0x38) - temp_f2_4)) + temp_f2_4);
    }
}
#pragma pop

}
