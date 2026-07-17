#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0);
s32 get_rotation_timer__11TBoss6Type2FPv(u32);
s32 TLobby__sub_800C6C10();
s32 TBoss6Type2__sub_8032F034(void *);
s32 TBoss6Type2__sub_8032F174();
M2C_UNK TBoss6Type2__sub_8032F418(void *);

extern const f32 lbl_805DF7F4;
extern const f32 lbl_805DF7FC;
extern const f32 lbl_805DF81C;
extern const f32 lbl_805DF820;
extern const f32 lbl_805DF824;

void update_rotation_ramp__11TBoss6Type2FPv(void *arg0) {
    if ((TBoss6Type2__sub_8032F174() == 0) || (TBoss6Type2__sub_8032F034(arg0) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF81C);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) < lbl_805DF7FC) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
        }
    } else if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3B8)) {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3BC) + lbl_805DF820);
        if (M2C_FIELD(arg0, f32 *, 0x3BC) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7F4;
        }
        if (lbl_805DF7F4 == M2C_FIELD(arg0, f32 *, 0x3BC)) {
            if (TLobby__sub_800C6C10() != 0) {
                u32 tmp378 = (u32) M2C_FIELD(arg0, u32 *, 0x378);
                if (tmp378 != 0U) {
                    if (get_rotation_timer__11TBoss6Type2FPv(tmp378) == 0) {
                        TBoss6Type2__sub_8032F418(arg0);
                    }
                }
            }
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7FC;
            M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) lbl_805DF7FC;
        M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3B8) + lbl_805DF824);
        if (M2C_FIELD(arg0, f32 *, 0x3B8) > lbl_805DF7F4) {
            M2C_FIELD(arg0, f32 *, 0x3B8) = (f32) lbl_805DF7F4;
        }
    }
}

}
