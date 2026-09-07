#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick {
    M2C_UNK value;
    u8 remaining[0x144];
};

extern "C" {
void init_geometry__19TOHangceilingCave01FPv(void *);
u8 * TOHangceilingCave01KeyQuick__sub_80168C6C(void *, s32);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void *, f32);
extern RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick __vt__27TOHangceilingCave01KeyQuick;
extern s32 lbl_805D2FF0;
extern const f32 lbl_805DB688;
u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick_size[sizeof(RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick) == 0x148 ? 1 : -1];
u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__27TOHangceilingCave01KeyQuick.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FF0;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    set_scale__27TOHangceilingCave01KeyQuickFPvf(arg0, lbl_805DB688 + M2C_FIELD(arg0, f32 *, 0x70));
    return arg0;
}

}
