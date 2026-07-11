#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__20TAdGameStartShadowGCFv(void *arg0);
void render__20TAdGameStartShadowGCFv(void* p);

int TMainTask__sub_8001A430(void*);
int fn_80320B38(void*);

void render__20TAdGameStartShadowGCFv(void* p) { if (TMainTask__sub_8001A430(p) != 1) { fn_80320B38(p); } }

void run_task__20TAdGameStartShadowGCFv(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (M2C_FIELD(arg0, s32 *, 0xC4) + 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC4);
    if (temp_r0 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (M2C_FIELD(arg0, s32 *, 0xC0) + 0x19);
        var_r0 = M2C_FIELD(arg0, s32 *, 0xC0);
        if (var_r0 > 0xFF) {
            var_r0 = 0xFF;
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else if (temp_r0 > 0x1C) {
        M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (M2C_FIELD(arg0, s32 *, 0xC0) - 0x19);
        var_r0_2 = M2C_FIELD(arg0, s32 *, 0xC0);
        if (var_r0_2 < 0) {
            var_r0_2 = 0;
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xC0) << 0x18) | 0xFF0000 | 0xFFFF);
}

}
