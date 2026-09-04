#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__15TObjLazerFence4Fv(void *arg0);
M2C_UNK reset_if_door_closed__15TObjLazerFence4FPv();
M2C_UNK TObjLazerFence4__sub_801933C8();

void run_task__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        TObjLazerFence4__sub_801933C8();
        return;
    case 1:
        reset_if_door_closed__15TObjLazerFence4FPv();
        return;
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801930E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1);
s32 get_state_flag__9TMainTaskFv();
f32 fn_8013157C(void *, s32);
s16 fn_801A2340(void *, f32, f32);

extern s32 lbl_805D4DF0;

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80193290
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__15TObjLazerFence4FPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
void set_global_param__8TObjFishFi(void *);

extern void *lbl_805D5C28;

void draw__15TObjLazerFence4FPv(void *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0xC0));
    TObjPlayer__sub_803D9B78();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80193378
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_if_door_closed__15TObjLazerFence4FPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void reset_if_door_closed__15TObjLazerFence4FPv(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0xBA)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80193468
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFence4Base { char pad[0x18]; };
struct LazerFence4VObj : LazerFence4Base {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__15TObjLazerFence4Fv(void *arg0);
M2C_UNK draw__15TObjLazerFence4FPv(void *);
M2C_UNK TObjLazerFence4__sub_801932E4(void *);

extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;

void render__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    if (((LazerFence4VObj*)arg0)->m8(lbl_805DBE70, lbl_805DBE74) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 0:
            TObjLazerFence4__sub_801932E4(arg0);
            return;
        case 1:
            draw__15TObjLazerFence4FPv(arg0);
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80193524
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *create__15TObjLazerFence4FPv(void *arg0);
void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1);
void *TObjLazerFence4__ct(void *, void *, void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *tl_05;

void *create__15TObjLazerFence4FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TObjLazerFence4__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TObjLazerFence4[];

void *__dt__15TObjLazerFence4Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjLazerFence4;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
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
#endif
