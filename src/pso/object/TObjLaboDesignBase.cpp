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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_38 { u8 bytes[0x38]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct M2CCopy_3C { u8 bytes[0x3C]; };

struct RecoveredGlobal_80365210___vt__18TObjLaboDesignBase {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1);
f32 xz_distance_squared(void *, s32);
s16 fn_801A2340(void *, f32, f32);
s32 get_state_flag__9TMainTaskFv();
extern s32 lbl_805D4DF0;
extern void *lbl_805D5C28;
extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;
s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1);
s32 begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 TObjPlayer__sub_803D99F8(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
s32 TOSignCave03__sub_803DB510(int);
void TObjLaboDesignBase__sub_80364F18(s32 arg0, u8 *arg1);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK TObjEneGibbles__sub_80156780(void *, int, int);
M2C_UNK TObjPlayer__sub_801569F4();
s32 create__10TObjMapCsnFi(void *, f32, f32);
void* fn_80365320(int a0);
int fn_80365334(int a0);
extern M2C_UNK __vt__18TObjLaboDesignBase[];
extern s32 lbl_805D44A0;
extern const f32 lbl_805E02A0;
extern const f32 lbl_805E02A4;
extern const f32 lbl_805E02A8;
extern const f32 lbl_805E02AC;
extern const f32 lbl_805E02B0;
u8 *TObjLaboDesignBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
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
s32 get_bml_model(int, int);
void TObjPlayer__sub_80154A00(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
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
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(5));
    }
    return o;
}

extern void *tl_05;

void *create_obj_labo_design_base(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(4));
    }
    return o;
}

extern void *tl_05;

void *TObjLaboDesignBase__sub_80364D38(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(3));
    }
    return o;
}

extern void *tl_05;

void *create_labo_design_base(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(2));
    }
    return o;
}

extern void *tl_05;

void *alloc_and_construct__18TObjLaboDesignBaseFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(1));
    }
    return o;
}

extern void *tl_05;

void *TObjLaboDesignBase__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0), (s32)(0));
    }
    return o;
}

s16 TObjLaboDesignBase__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (xz_distance_squared(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    return fn_801A2340(arg0, farg0, farg1);
}

void TObjLaboDesignBase__sub_80364F18(s32 arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (temp_r31 & 0x100000) {
            begin_effect_render__13TParticleCtrlFv();
        } else {
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B2C();
        if (!(temp_r31 & 1)) {
            TOHangerMachine01__sub_803D9C00((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            TObjPlayer__sub_803D99F8((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            TBoss7Tentacle__sub_803D9BA0((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 8)) {
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(var_r30, s32 *, 4)));
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r4 != NULL) {
                TObjLaboDesignBase__sub_80364F18(arg0, temp_r4);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

void render__18TObjLaboDesignBaseFPv(u8 *arg0) {
    TObjFish__sub_8001EDB0((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0));
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjLaboDesignBase__sub_80364F18((s32)((void *) (arg0)), (u8 *)((int) (get_bml_model((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0)))));
    pop_matrix();
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

typedef char RecoveredGlobal_80365210___vt__18TObjLaboDesignBase_size[sizeof(RecoveredGlobal_80365210___vt__18TObjLaboDesignBase) == 0x38 ? 1 : -1];
u8 *TObjLaboDesignBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    struct CopyStack_80365210 { u8 bytes[0x3C]; };
    CopyStack_80365210 copy_storage_80365210;
    s32 temp_r0;
    s32 temp_r4;
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80365210___vt__18TObjLaboDesignBase *)&__vt__18TObjLaboDesignBase).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D44A0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0xB0) = arg3;
    M2C_FIELD(arg0, s32 *, 0xAC) = ((s32)fn_80365334((int) (M2C_FIELD(arg0, s32 *, 0xB0))));
    TObjEneGibbles__sub_80156780((void *) (arg0), (int) (((s32)fn_80365320((int) (M2C_FIELD(arg0, s32 *, 0xB0))))), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805E02A0;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805E02A4;
    M2C_FIELD(arg0, s32 *, 0xBC) = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_r0 == 3) || (temp_r0 == 4)) {
        temp_r4 = arg2 - 4;
        *(M2CCopy_3C *)(copy_storage_80365210.bytes) = *(const M2CCopy_3C *)(temp_r4 + 4);
        (*(f32 *)(copy_storage_80365210.bytes + 0x24)) = lbl_805E02A8;
        (*(f32 *)(copy_storage_80365210.bytes + 0x28)) = lbl_805E02AC;
        (*(f32 *)(copy_storage_80365210.bytes + 0x2C)) = lbl_805E02B0;
        M2C_FIELD(arg0, s32 *, 0xBC) = create__10TObjMapCsnFi((void *) ((copy_storage_80365210.bytes)), (f32) (lbl_805E02AC), (f32) (lbl_805E02A8));
    }
    return arg0;
}

void* fn_80365320(int a0) {  return (char*)lbl_804F2C40 + a0 * 44; }

    extern int lbl_80543A48[];
int fn_80365334(int a0) {  return lbl_80543A48[a0]; }

}
