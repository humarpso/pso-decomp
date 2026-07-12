#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBos { char pad[0x18]; };
struct TBoss3VoloptP01 : VBos {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__15TBoss3VoloptP01Fv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
f32 TObjFish__sub_8001973C();
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
s32 TObjPlayer__sub_80080750();
M2C_UNK TObjPlayer__sub_800D8A2C();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjPlayer__sub_803E4684(s32);
M2C_UNK TObjFish__sub_803E46BC(void *);

extern u8 *lbl_805D4CCC;
extern const f32 lbl_805D8780;
extern const f32 lbl_805D8784;
extern const f32 lbl_805D8788;

void render__15TBoss3VoloptP01Fv(u8 *arg0) {
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((TBoss3VoloptP01*)arg0)->m8(lbl_805D8780, lbl_805D8784) != 0)) {
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        TObjPlayer__sub_800D8A2C();
        TObjPlayer__sub_803D9B2C();
        if (TObjPlayer__sub_80080750() == 1) {
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, void **, 0x34));
        } else {
            TObjPlayer__sub_803D9624(0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x38C), M2C_FIELD(arg0, f32 *, 0x40));
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x40000) {
                TObjPlayer__sub_803E4684(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
            } else {
                if (temp_r3 & 0x80000) {
                    TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x3B4));
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = (s8) (lbl_805D8788 * TObjFish__sub_8001973C());
                    M2C_FIELD(lbl_805D4CCC, s8 *, 4) = 0;
                    M2C_FIELD(lbl_805D4CCC, s8 *, 5) = 0;
                } else {
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = 0;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 4) = 0xCC;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 5) = 0xFF;
                }
                draw__16TObjEneRe7BeruraFPv(arg0);
            }
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        TParticleCtrl__sub_801E2F20();
    }
}

}
