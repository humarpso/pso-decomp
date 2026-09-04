#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct LazerFence4Base_801930E8 { char pad[0x18]; };
struct LazerFence4VObj_801930E8 : LazerFence4Base_801930E8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
extern "C" {
s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1);
f32 fn_8013157C(void *, s32);
s16 fn_801A2340(void *, f32, f32);
s32 get_state_flag__9TMainTaskFv();
extern s32 lbl_805D4DF0;
extern void *lbl_805D5C28;
extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;
s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1);
}

extern "C" {

void *create_labo_design_base(void *arg0);
void *create_obj_labo_design_base(void *arg0);
void *TObjLaboDesignBase__create(void *arg0);
void *TObjLaboDesignBase__sub_80364D38(void *arg0);
void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1);
void *alloc_and_construct__18TObjLaboDesignBaseFPv(void *arg0);
void *create_instance__18TObjLaboDesignBaseFPv(void *arg0);
void* fn_80365320(int a0);
int fn_80365334(int a0);
void render__18TObjLaboDesignBaseFPv(u8 *arg0);
void run_task__18TObjLaboDesignBaseFv(void);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
M2C_UNK TObjLaboDesignBase__sub_80364F18(void *, int);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi();

extern void *tl_05;

void *create_instance__18TObjLaboDesignBaseFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 5);
    }
    return o;
}

extern void *tl_05;

void *create_obj_labo_design_base(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 4);
    }
    return o;
}

extern void *tl_05;

void *TObjLaboDesignBase__sub_80364D38(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 3);
    }
    return o;
}

extern void *tl_05;

void *create_labo_design_base(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 2);
    }
    return o;
}

extern void *tl_05;

void *alloc_and_construct__18TObjLaboDesignBaseFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 1);
    }
    return o;
}

extern void *tl_05;

void *TObjLaboDesignBase__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 0);
    }
    return o;
}

s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    return fn_801A2340(arg0, farg0, farg1);
}

void render__18TObjLaboDesignBaseFPv(u8 *arg0) {
    TObjFish__sub_8001EDB0((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0));
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjLaboDesignBase__sub_80364F18((void *) (arg0), (int) (TObjFish__sub_8001EDC4((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0))));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

void run_task__18TObjLaboDesignBaseFv(void) {  }

extern M2C_UNK __vt__18TObjLaboDesignBase[];

void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLaboDesignBase;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern unsigned char lbl_804F2C40[];
void* fn_80365320(int a0) {  return (char*)lbl_804F2C40 + a0 * 44; }

    extern int lbl_80543A48[];
int fn_80365334(int a0) {  return lbl_80543A48[a0]; }

}
