#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TObjLazerFenceExtraFv(void *arg0);
M2C_UNK TObjLazerFenceExtra__sub_801926D0();
M2C_UNK reset_by_door__19TObjLazerFenceExtraFPv();

void run_task__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
    switch (temp_r0) {
    case 0:
        TObjLazerFenceExtra__sub_801926D0();
        return;
    case 1:
        reset_by_door__19TObjLazerFenceExtraFPv();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8019264C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFenceExtraBase { char pad[0x18]; };
struct LazerFenceExtraVObj : LazerFenceExtraBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__19TObjLazerFenceExtraFv(void *arg0);
M2C_UNK fn_80192554(void *);
M2C_UNK render_lazer_fence_model(void *);

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    if ((((LazerFenceExtraVObj*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD8) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
        switch (temp_r0) {
        case 0:
            fn_80192554(arg0);
            return;
        case 1:
            render_lazer_fence_model(arg0);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80192774
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0) {
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s16 *, 0xB0)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019280C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TObjLazerFenceExtra[];

void *__dt__19TObjLazerFenceExtraFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjLazerFenceExtra;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801929F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLazerFenceExtra__create(void *arg0);
void *TObjLazerFenceExtra__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLazerFenceExtra__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjLazerFenceExtra__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
