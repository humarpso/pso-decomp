#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DF7D0;
extern M2C_UNK lbl_805DF7D4;
void fn_8032DA28(u8 *arg0);
u32 __nw__7TObjectFUl(int);
s32 setup_button__16TAdGuideButtonGCFPvPv(int, void *);
u32 TAdGuideButtonGC__ct(int, void *);
extern u32 lbl_805D6D04;
void create_guide_button(s32 arg0, s32 arg1);
}

extern "C" {

void create_guide_button(s32 arg0, s32 arg1) {
    u32 temp_r3;
    u32 var_r0;
    if ((u32) lbl_805D6D04 == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x1A8));
        var_r0 = temp_r3;
        if (var_r0 != 0U) {
            var_r0 = TAdGuideButtonGC__ct((int) (temp_r3), (void *) (arg0));
        }
        lbl_805D6D04 = var_r0;
        if (var_r0 != 0U) {
            setup_button__16TAdGuideButtonGCFPvPv((int) (var_r0), (void *) (arg1));
        }
    }
}

void fn_8032DA28(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805DF7D0;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DF7D0;
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) lbl_805DF7D0;
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) lbl_805DF7D0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x18) = 0xFF;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x20) = &lbl_805DF7D4;
}

}
