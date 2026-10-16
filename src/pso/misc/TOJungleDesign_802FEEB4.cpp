#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TOJungleDesign.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct JDBase_802feeb4 { char pad[0x18]; };
struct JDVObj_802feeb4 : JDBase_802feeb4 {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_802FEF98_lbl_804E6580 {
    s32 value;
    u8 remaining[0x80];
};

struct RecoveredGlobal_802FEF98___vt__14TOJungleDesign {
    s32 value;
    u8 remaining[0x38];
};

extern "C" {
s32 init_collision_body_parts(void *, int, int);
extern RecoveredGlobal_802FEF98_lbl_804E6580 TOJungleDesign__collision_desc_table;
extern s32 __vt__14TOJungleDesign[];
extern s32 TOJungleDesign__name;
u8 *TOJungleDesign__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(int);
s32 rotate_matrix_yxz(int, int, int, int);
void free_collision_body_parts(void *);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);

extern const f32 lbl_805DEF20;
extern const f32 lbl_805DEF24;

void TOJungleDesign::render() {
    u8 *arg0 = (u8 *)this;
    if (((JDVObj_802feeb4 *)arg0)->m8(lbl_805DEF20, lbl_805DEF24) == 1) {
        TObjFish::set_global_param((int) (this->texture_id));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_yxz((int) (0), (int) (*(s32 *)&this->m_5c), (int) (this->rotation_y), (int) (this->rotation_z));
        draw_ginja_object((int) (*(s32 *)&this->m_ac));
        pop_matrix();
    }
}

extern s32 __vt__14TOJungleDesign[];

void *__dt__14TOJungleDesignFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOJungleDesign;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802FEF98_lbl_804E6580_size[sizeof(RecoveredGlobal_802FEF98_lbl_804E6580) == 0x84 ? 1 : -1];
typedef char RecoveredGlobal_802FEF98___vt__14TOJungleDesign_size[sizeof(RecoveredGlobal_802FEF98___vt__14TOJungleDesign) == 0x3C ? 1 : -1];
u8 *TOJungleDesign__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802FEF98___vt__14TOJungleDesign *)&__vt__14TOJungleDesign).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOJungleDesign__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOJungleDesign *)arg0)->init_design_variant();
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)&TOJungleDesign__collision_desc_table.value + (*(s32 *)((s8 *)arg0 + 0xB0) * 0x2C)), (int) (1));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}
