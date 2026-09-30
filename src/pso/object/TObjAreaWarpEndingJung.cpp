#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_8019B124 { char pad[0x18]; };
struct VObj_8019B124 : VObjBase_8019B124 {
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

struct Warp_8019B170 { u8 pad0[0x8C]; s32 f8C; };

extern "C" {
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void TObjEneBm5GibonU__sub_803D853C(s32 id, const char *fmt, ...);
extern char lbl_804463A4[];
extern char lbl_804463B4[];
void TObjAreaWarpEndingJung__vt18(Warp_8019B170 *arg0);
}

extern "C" {

void *TObjAreaWarpEndingJung__create(void *arg0);
void render__22TObjAreaWarpEndingJungFv(u8 *arg0);
void run_task__22TObjAreaWarpEndingJungFv(void *arg0);
M2C_UNK PPCSync();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void *TObjAreaWarpEndingJung__ct(void *, void *, void *);
M2C_UNK TObjAreaWarp__sub_8019CAB0(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 get_static_field4_as_float__12TObjWarpJungFv(f32);
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK set_global_render_param__12TObjWarpJungFv();
s32 update_warp_display__12TObjWarpJungFv();

extern void *tl_05;

void *TObjAreaWarpEndingJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjAreaWarpEndingJung__ct(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;

void TObjAreaWarpEndingJung__vt18(Warp_8019B170 *arg0) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    arg0->f8C = arg0->f8C % 2;
    if (arg0->f8C == 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_804463A4);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        TObjEneBm5GibonU__sub_803D853C(0x130022, lbl_804463B4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__22TObjAreaWarpEndingJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj_8019B124*)arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
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
