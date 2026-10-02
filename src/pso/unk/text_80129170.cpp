#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
f32 get_speed__10TObjPlayerFPv(void *);
s32 TLobby__sub_800822E8(void *, s32);
s32 is_flag_b0_4__10TObjPlayerFPv(void *);
extern const f32 lbl_805DAE00;
extern const f32 lbl_805DAE04;
extern const f32 lbl_805DAE08;
extern const f32 lbl_805DAE0C;
extern const f32 lbl_805DAE10;
extern const f32 lbl_805DAE14;
void TObjPlayer__sub_80129170(u8 *self);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_80129170(u8 *self) {
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
        if (TLobby__sub_800822E8(M2C_FIELD(self, void **, 0xF0), 0x20) != 0) {
            flo = lbl_805DAE00;
            lo = 0;
            fhi = lbl_805DAE04;
            hi = 0x4000;
        } else if (TLobby__sub_800822E8(M2C_FIELD(self, void **, 0xF0), 0x40) != 0) {
            flo = lbl_805DAE08;
            lo = 0x4000;
            fhi = lbl_805DAE0C;
            hi = -0x4000;
        } else if (TLobby__sub_800822E8(M2C_FIELD(self, void **, 0xF0), 0x80) != 0) {
            flo = lbl_805DAE10;
            lo = -0x4000;
            fhi = lbl_805DAE14;
            hi = 0x2000;
        } else {
            ok = 0;
        }
        if (ok == 1) {
            if (flag == 0) {
                if (speed < flo) {
                    M2C_FIELD(self, s32 *, 0x1FC) = lo;
                } else if (flo <= speed && speed <= fhi) {
                    M2C_FIELD(self, s32 *, 0x1FC) = (s32)((speed - flo) * ((f32)(hi - lo) / (fhi - flo)) + (f32)lo);
                } else {
                    M2C_FIELD(self, s32 *, 0x1FC) = hi;
                }
            } else {
                M2C_FIELD(self, s32 *, 0x1FC) = hi;
            }
        }
    }
}
#pragma pop

}
