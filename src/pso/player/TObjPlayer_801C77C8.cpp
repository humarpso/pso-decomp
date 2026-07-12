#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_state_sync__10TObjPlayerFPv(void *arg0);
s32 TKeyBoardControl__sub_801A58D8();
M2C_UNK TObjPlayer__sub_801D1284(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D12D8(M2C_UNK *);
M2C_UNK TObjPlayer__sub_801D12E8(M2C_UNK *);
s16 obj_getField1c(void *);
s32 obj_isState2_324();
M2C_UNK send_swapped_bytes__10TObjPlayerFPv(M2C_UNK *);

struct VBase_inner_801c77c8 { char pad[8]; };
struct VBase_380_801c77c8 : VBase_inner_801c77c8 { virtual s32 m0(); virtual s32 m1(); virtual s32 m2(); virtual s32 m3(); virtual s32 m4(); virtual s32 m5(); virtual s32 m6(); virtual s32 m7(); virtual s32 m8(); virtual s32 m9(); virtual s32 m10(); virtual s32 m11(); virtual s32 m12(); virtual s32 m13(); virtual s32 m14(); virtual s32 m15(); virtual s32 m16(); virtual s32 m17(); virtual s32 m18(); virtual s32 m19(); virtual s32 m20(); virtual s32 m21(); virtual s32 m22(); virtual s32 m23(); virtual s32 m24(); virtual s32 m25(); virtual s32 m26(); virtual s32 m27(); virtual s32 m28(); virtual s32 m29(); virtual s32 m30(); virtual s32 m31(); virtual s32 m32(); virtual s32 m33(); virtual s32 m34(); virtual s32 m35(); virtual s32 m36(); virtual s32 m37(); virtual s32 m38(); virtual s32 m39(); virtual s32 m40(); virtual s32 m41(); virtual s32 m42(); virtual s32 m43(); virtual s32 m44(); virtual s32 m45(); virtual s32 m46(); virtual s32 m47(); virtual s32 m48(); virtual s32 m49(); virtual s32 m50(); virtual s32 m51(); virtual s32 m52(); virtual s32 m53(); virtual s32 m54(); virtual s32 m55(); virtual s32 m56(); virtual s32 m57(); virtual s32 m58(); virtual s32 m59(); virtual s32 m60(); virtual s32 m61(); virtual s32 m62(); virtual s32 m63(); virtual s32 m64(); virtual s32 m65(); virtual s32 m66(); };

void send_state_sync__10TObjPlayerFPv(void *arg0) {
    s32 sp8[2];
    void *temp_r3;
    s32 temp_r12;

    if (arg0 == NULL || obj_isState2_324() == 0) {
        TObjPlayer__sub_801D1284(sp8);
        *(s16 *)((s8 *)sp8 + 2) = obj_getField1c(arg0);
        temp_r3 = M2C_FIELD(arg0, void **, 0x380);
        temp_r12 = ((VBase_380_801c77c8*)temp_r3)->m66();
        if ((s16) M2C_FIELD(arg0, s16 *, 0x3C0) == temp_r12) {
            TObjPlayer__sub_801D12E8(sp8);
        }
        if (TKeyBoardControl__sub_801A58D8() != 0) {
            TObjPlayer__sub_801D12D8(sp8);
        }
        send_swapped_bytes__10TObjPlayerFPv(sp8);
    }
}

}
