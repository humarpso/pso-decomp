#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int TObjWarpJung__vt17(void* p);
int TObjAreaWarp__sub_8019CA24(void*);

int TObjWarpJung__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x801A0024
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjWarpJung__create(void *arg0);
void *TObjWarpJung__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjWarpJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = TObjWarpJung__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0070
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

void render__12TObjWarpJungFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
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
extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;

void render__12TObjWarpJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj*)arg0)->m8(lbl_805DC040, lbl_805DC044) != 0) {
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

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A01CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__12TObjWarpJung[];

void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjWarpJung;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0324
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_static_field4_as_float__12TObjWarpJungFv(void);

extern M2C_UNK lbl_80446708;
extern void *lbl_805D5CAC;

f32 get_static_field4_as_float__12TObjWarpJungFv(void) {
    return (f32) M2C_FIELD(lbl_805D5CAC, u32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0354
#include "types.h"

extern "C" {

void set_global_render_param__12TObjWarpJungFv(void);
int set_global_param__8TObjFishFi(void*);

    extern int lbl_805D5CB0;
void set_global_render_param__12TObjWarpJungFv(void) { set_global_param__8TObjFishFi((void*)(lbl_805D5CB0)); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A0378
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
s32 TObjFish__sub_8001EDC4(s32, s32);

extern s32 lbl_805D5CA8;
extern s32 lbl_805D5CAC;

void render_warp_effect__12TObjWarpJungFii(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = TObjFish__sub_8001EDC4(lbl_805D5CA8, arg0);
    TObjDoor__sub_803DC894(temp_r3, lbl_805D5CAC, (f32) arg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A03D8
#include "types.h"

extern "C" {

void render_warp__12TObjWarpJungFPv(void* a0);
int TObjBoss2Tunnel__sub_803DB470(void);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5CA8;
void render_warp__12TObjWarpJungFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5CA8), a0); TObjBoss2Tunnel__sub_803DB470(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A04C0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_warp_display__12TObjWarpJungFv(void);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);

extern s32 lbl_805D53A4;
extern s32 lbl_805D5CB4;
extern s32 lbl_805D5CB8;
extern s32 lbl_805D5CC4;

s32 update_warp_display__12TObjWarpJungFv(void) {
    if ((s32) lbl_805D53A4 != (s32) lbl_805D5CB4) {
        lbl_805D5CB4 = lbl_805D53A4;
        if ((s32) lbl_805D5CC4 >= 0) {
            TOComputerMachine01__sub_8023DDC8(lbl_805D5CB8, 0, 5, (u16) lbl_805D5CC4, 1);
            return 1;
        }
    }
    return 0;
}

}
#endif
#endif
