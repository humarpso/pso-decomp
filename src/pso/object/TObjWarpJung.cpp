#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_801A0070 { char pad[0x18]; };
struct VObj_801A0070 : VObjBase_801A0070 {
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

int TObjWarpJung__vt17(void* p);
void *__dt__12TObjWarpJungFv(void *arg0, s16 arg1);
f32 get_static_field4_as_float__12TObjWarpJungFv(void);
void render__12TObjWarpJungFv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
int TObjAreaWarp__sub_8019CA24(void*);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK set_global_render_param__12TObjWarpJungFv();
s32 update_warp_display__12TObjWarpJungFv();

extern const f32 lbl_805DC040;
extern const f32 lbl_805DC044;

void render__12TObjWarpJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj_801A0070*)arg0)->m8(lbl_805DC040, lbl_805DC044) != 0) {
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

int TObjWarpJung__vt17(void* p) { return TObjAreaWarp__sub_8019CA24(p); }

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

extern M2C_UNK lbl_80446708;
extern void *lbl_805D5CAC;

f32 get_static_field4_as_float__12TObjWarpJungFv(void) {
    return (f32) M2C_FIELD(lbl_805D5CAC, u32 *, 4);
}

}
