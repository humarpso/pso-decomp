#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct JDBase_802feeb4 { char pad[0x18]; };
struct JDVObj_802feeb4 : JDBase_802feeb4 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_802FEF98_lbl_804E6580 {
    M2C_UNK value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_802FEF98___vt__14TOJungleDesign {
    M2C_UNK value;
    u8 remaining[0x38];
};

extern "C" {
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, int, int);
s32 TObjPlayer__sub_801569F4(void *);
s32 init_design_variant__14TOJungleDesignFPv(void *);
extern RecoveredGlobal_802FEF98_lbl_804E6580 lbl_804E6580;
extern M2C_UNK __vt__14TOJungleDesign[];
extern s32 lbl_805D4044;
u8 *TOJungleDesign__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1);
void render__14TOJungleDesignFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(int);
M2C_UNK rotate_matrix_yxz(int, int, int, int);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
M2C_UNK set_global_param__8TObjFishFi(int);

extern const f32 lbl_805DEF20;
extern const f32 lbl_805DEF24;

void render__14TOJungleDesignFv(u8 *arg0) {
    if (((JDVObj_802feeb4 *)arg0)->m8(lbl_805DEF20, lbl_805DEF24) == 1) {
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_yxz((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
        draw_ginja_object((int) (M2C_FIELD(arg0, s32 *, 0xAC)));
        pop_matrix();
    }
}

extern M2C_UNK __vt__14TOJungleDesign[];

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOJungleDesign;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802FEF98_lbl_804E6580_size[sizeof(RecoveredGlobal_802FEF98_lbl_804E6580) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_802FEF98___vt__14TOJungleDesign_size[sizeof(RecoveredGlobal_802FEF98___vt__14TOJungleDesign) == 0x3C ? 1 : -1];
u8 *TOJungleDesign__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802FEF98___vt__14TOJungleDesign *)&__vt__14TOJungleDesign).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4044;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_design_variant__14TOJungleDesignFPv((void *) (arg0));
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)&lbl_804E6580.value + (M2C_FIELD(arg0, s32 *, 0xB0) * 0x2C)), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

}
