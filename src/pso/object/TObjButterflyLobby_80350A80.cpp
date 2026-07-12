#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ButterflyLobbyBase { char pad[0x18]; };
struct ButterflyLobbyVObj : ButterflyLobbyBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__18TObjButterflyLobbyFv(void *arg0);
M2C_UNK render__18TObjButterflyLobbyFPv(void *);
M2C_UNK TObjFish__sub_803DA798(s32);

extern const f32 lbl_805DFE4C;
extern const f32 lbl_805DFE50;

void render__18TObjButterflyLobbyFv(void *arg0) {
    if ((((ButterflyLobbyVObj*)arg0)->m8(lbl_805DFE4C, lbl_805DFE50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0)) {
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0xC8));
        render__18TObjButterflyLobbyFPv(arg0);
    }
}

}
