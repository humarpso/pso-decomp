#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase { char pad[0x18]; };
struct VObj : VObjBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__22TObjAreaWarpEndingJungFv(u8 *arg0);
void run_task__22TObjAreaWarpEndingJungFv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjAreaWarp__sub_8019CAB0(void *);
f32 get_static_field4_as_float__12TObjWarpJungFv(f32);
M2C_UNK TObjWarpJung__sub_801A0354();
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
s32 update_warp_display__12TObjWarpJungFv();
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

M2C_UNK PPCSync();
extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;

void render__22TObjAreaWarpEndingJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj*)arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        if (update_warp_display__12TObjWarpJungFv() != 0) {
            PPCSync();
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
        switch (temp_r0) {
        case 0:
            TObjWarpJung__sub_801A0404(0);
            break;
        case 1:
            TObjWarpJung__sub_801A0404(1);
            break;
        }
        TObjWarpJung__sub_801A0354();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        render_warp__12TObjWarpJungFPv(0);
        TParticleCtrl__sub_801E2EFC();
        render_warp_effect__12TObjWarpJungFii(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        TParticleCtrl__sub_801E2F20();
        TObjPlayer__sub_803D9B78();
    }
}

extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE0;
extern const f32 lbl_805DBFE4;

void run_task__22TObjAreaWarpEndingJungFv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC4);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (temp_f1 + lbl_805DBFDC);
    if (M2C_FIELD(arg0, f32 *, 0xC4) > (get_static_field4_as_float__12TObjWarpJungFv(temp_f1) - lbl_805DBFE0)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    }
    TObjAreaWarp__sub_8019CAB0(arg0);
}

}
