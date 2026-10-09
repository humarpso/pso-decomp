#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8029CE64___vt__13TOGrassJungle {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__13TOGrassJungle[];
extern s32 grass_jungle_class_name;
u8 *TOGrassJungle__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct Base_8029CD90 { char pad[0x18]; };
struct VObj_8029CD90 : Base_8029CD90 {
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

void TOKeyJungleMain__vt20(s32 arg0);
void *__dt__13TOGrassJungleFv(void *arg0, s16 arg1);
void render__13TOGrassJungleFv(u8 *arg0);
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
M2C_UNK get_bml_model(s32, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 get_global_state__14TOKeyMachine01Fv(void);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 TOGrassJungle__data_805D65D8;
extern s32 TOGrassJungle__data_805D65DC;
extern const f32 lbl_805DDD30;
extern const f32 lbl_805DDD34;

void render__13TOGrassJungleFv(u8 *arg0) {
    if (((VObj_8029CD90 *)arg0)->m8(lbl_805DDD30, lbl_805DDD34) == 1) {
        set_global_param__8TObjFishFi(TOGrassJungle__data_805D65DC);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        get_bml_model(TOGrassJungle__data_805D65D8, M2C_FIELD(arg0, s32 *, 0x90));
        draw_ginja_object();
        pop_matrix();
    }
}

extern M2C_UNK __vt__13TOGrassJungle[];

void *__dt__13TOGrassJungleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOGrassJungle;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8029CE64___vt__13TOGrassJungle_size[sizeof(RecoveredGlobal_8029CE64___vt__13TOGrassJungle) == 0x34 ? 1 : -1];
u8 *TOGrassJungle__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8029CE64___vt__13TOGrassJungle *)&__vt__13TOGrassJungle).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) grass_jungle_class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) < 0) {
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) > 1) {
        M2C_FIELD(arg0, s32 *, 0x90) = 1;
    }
    return arg0;
}

void TOKeyJungleMain__vt20(s32 arg0) {
    M2C_UNK var_r31;
    s32 temp_r3;

    var_r31 = 0x4AD12;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    switch (temp_r3) {
    case 34:
        var_r31 = 0x4004AD12;
        break;
    case 35:
        var_r31 = 0x4004AD12;
        break;
    }
    play_sound_effect(var_r31, arg0 + 0x38, 0, 0);
}

}
