#include "pso/TObjWarpString.h"

TObjWarpString::~TObjWarpString() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019B854___vt__14TObjWarpString {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void __ct__7TObjectFP7TObject(void *, void *);
void strncpy(s32, s32, s32);
extern RecoveredGlobal_8019B854___vt__14TObjWarpString __vt__14TObjWarpString;
extern s32 lbl_805D347C;
extern const f32 lbl_805DBFE4;
u8 *__ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
}

extern "C" {

void run_task__14TObjWarpStringFv(void *arg0);
M2C_UNK TObjWarpString__sub_8019B6E4();
M2C_UNK TObjWarpString__sub_8019B728();
M2C_UNK TObjWarpString__sub_8019B744();
M2C_UNK TObjWarpString__sub_8019B77C();

void run_task__14TObjWarpStringFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        TObjWarpString__sub_8019B77C();
        return;
    case 1:
        TObjWarpString__sub_8019B744();
        return;
    case 2:
        TObjWarpString__sub_8019B728();
        return;
    case 3:
        TObjWarpString__sub_8019B6E4();
        return;
    }
}
typedef char RecoveredGlobal_8019B854___vt__14TObjWarpString_size[sizeof(RecoveredGlobal_8019B854___vt__14TObjWarpString) == 0x18 ? 1 : -1];
u8 *__ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TObjWarpString.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D347C;
    strncpy((s32) (arg0 + 0x1C), arg2, 0x20);
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0x40) = 0x18;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

}
