#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 get_speed__10TObjPlayerFPv(void *);
s32 test_action_mask__10TObjPlayerFPvi(void *, s32);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
extern const f32 lbl_805DAEA8;
extern const f32 lbl_805DAEAC;
extern const f32 lbl_805DAEB0;
extern const f32 lbl_805DAEB4;
extern const f32 lbl_805DAEB8;
extern const f32 lbl_805DAEBC;
void TObjPlayer__sub_8012B664(u8 *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8012B664(u8 *self) {
    s32 flag;
    s32 ok;
    s32 lo;
    s32 hi;
    f32 speed;
    f32 flo;
    f32 fhi;
    if (M2C_FIELD(self, void **, 0xF0) != NULL) {
        speed = get_speed__10TObjPlayerFPv(M2C_FIELD(self, void **, 0xF0));
        flag = is_flag_b0_4__10TObjPlayerFPv(M2C_FIELD(self, void **, 0xF0));
        ok = 1;
        if (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(self, void **, 0xF0), 0x20) != 0) {
            flo = lbl_805DAEA8;
            lo = 0;
            fhi = lbl_805DAEAC;
            hi = 0x4000;
        } else if (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(self, void **, 0xF0), 0x40) != 0) {
            flo = lbl_805DAEB0;
            lo = 0x4000;
            fhi = lbl_805DAEB4;
            hi = -0x4000;
        } else if (test_action_mask__10TObjPlayerFPvi(M2C_FIELD(self, void **, 0xF0), 0x80) != 0) {
            flo = lbl_805DAEB8;
            lo = -0x4000;
            fhi = lbl_805DAEBC;
            hi = 0x2000;
        } else {
            ok = 0;
        }
        if (ok == 1) {
            if (flag == 0) {
                if (speed < flo) {
                    M2C_FIELD(self, s32 *, 0x1F8) = lo;
                } else if (flo <= speed && speed <= fhi) {
                    M2C_FIELD(self, s32 *, 0x1F8) = (s32)((speed - flo) * ((f32)(hi - lo) / (fhi - flo)) + (f32)lo);
                } else {
                    M2C_FIELD(self, s32 *, 0x1F8) = hi;
                }
            } else {
                M2C_FIELD(self, s32 *, 0x1F8) = hi;
            }
        }
    }
}
#pragma pop

}
