#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TObjBase8017E8_8017E7F0 { char pad[0x18]; };
struct TObjBgmCol8017E8_8017E7F0 : TObjBase8017E8_8017E7F0 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

extern "C" {

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2);
void *__dt__10TObjBgmColFv(void *arg0, s16 arg1);
M2C_UNK TPhotonMagicSquare__sub_801A2640();
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__10TObjBgmCol[];

void *__dt__10TObjBgmColFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjBgmCol;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__10TObjBgmCol[];
extern s32 lbl_805D3228;

void *TObjBgmCol__ct(void *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjBgmCol;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3228;
    ((TObjBgmCol8017E8_8017E7F0 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) % 6);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x9C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    }
    return arg0;
}

}
