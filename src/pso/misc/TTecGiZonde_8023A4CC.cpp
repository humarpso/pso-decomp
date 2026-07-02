#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8023A4D0(void *arg0);
void render__11TTecGiZondeFv(void);
s32 queue_destruction__7TObjectFv();

void render__11TTecGiZondeFv(void) {  }
void fn_8023A4D0(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0x74);
    if (temp_f1 > M2C_FIELD(arg0, f32 *, 0x70)) {
        queue_destruction__7TObjectFv();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x64));
}

}
