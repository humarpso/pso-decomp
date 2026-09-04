#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjAreaWarpEndingJung__create(void *arg0);
void *TObjAreaWarpEndingJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjAreaWarpEndingJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpEndingJung__ct(o, tl_05, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019B234
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
M2C_UNK set_global_render_param__12TObjWarpJungFv();
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
s32 update_warp_display__12TObjWarpJungFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
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
        set_global_render_param__12TObjWarpJungFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        render_warp__12TObjWarpJungFPv(0);
        begin_effect_render__13TParticleCtrlFv();
        render_warp_effect__12TObjWarpJungFii(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
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
#endif
#if PSO_CLASS_PACKAGE == 0x8019B364
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__18TObjAreaWarpEndingFv(void *, int);

extern M2C_UNK __vt__22TObjAreaWarpEndingJung[];

void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
        __dt__18TObjAreaWarpEndingFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019B3BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjAreaWarpEndingJung__ct(void *arg0);
M2C_UNK TObjAreaWarpEnding__ct();

extern M2C_UNK __vt__22TObjAreaWarpEndingJung[];
extern s32 lbl_805D3480;

void *TObjAreaWarpEndingJung__ct(void *arg0) {
    s32 temp_r0;
    u32 temp_r4;

    TObjAreaWarpEnding__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3480;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    temp_r4 = (u32) temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    return arg0;
}

}
#endif
#endif
