#include "types.h"
#include "pso/misc/TMotorcycle.h"
#include "pso/object/TObjMesBase.h"
#include "pso/object/TObjMotion.h"

struct TObjBase80194_80194C98 { char pad[0x18]; };
struct TObjMesBase80194_80194C98 : TObjBase80194_80194C98 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

#include "pso/object/TObjMesBase.h"
#include "pso/TObject.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/player/TObjPlayer.h"

struct Mc_80194EC4 { u8 pad0[0x68]; f32 f68; u8 pad6C[0x50]; s32 fBC; };

struct Pair_80194AEC { const char *s[2]; };

struct Mes_80194AEC { u8 pad0[0x84]; s32 f84; u8 pad88[4]; s32 f8C; u8 pad90[0x24]; s32 fB4; s32 fB8; };

extern "C" {
extern void* quest_mission_manager;
extern void* quest_area_manager;
extern void* tl_00;
void* __nw__7TObjectFUl(unsigned long);
void* __ct__12TQuestThreadFv(void*, void*, s32);
f32 fabs_float(f32);
void debug_printf_at(int, void *, ...);
extern s32 lbl_80445DF4[];
extern u8 lbl_80445E08[];
void debug_draw_label__11TMotorcycleFv(Mc_80194EC4 *arg0);
void debug_printf_at(int, void *, ...);
extern Pair_80194AEC lbl_80445D94[];
extern u8 lbl_80445D9C[];
extern u8 lbl_80445DAC[];
}

extern "C" {

struct Base_80194CE8_80194C98 { char pad[0x18]; };
struct VObj_80194CE8_80194C98 : Base_80194CE8_80194C98 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
};

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1);
void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2);
void vfunc_14__11TObjMesBaseFv(void);
void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1);
s32 construct_collider_proxy__13TUnk_804AF8A0Fv();
void __dl__7TObjectFPv(void *);
f32 xz_distance_squared(s32, s32);
s32 update_object_view_visibility__13TUnk_804B9870Fff(s32, f32, f32);

}

extern "C" {

void TObjMesBase::debug_draw_label() {
    Mes_80194AEC *arg0 = (Mes_80194AEC *)this;
    arg0->fB4 = arg0->f84;
    arg0->fB8 = arg0->f8C;
    if (arg0->fB8 < 0) {
        arg0->fB8 = 0;
    }
    if (arg0->fB8 > 1) {
        arg0->fB8 = 1;
    }
    Pair_80194AEC names = lbl_80445D94[0];
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x130020, lbl_80445D9C, arg0->fB4);
    debug_printf_at(0x130022, lbl_80445DAC, names.s[arg0->fB8]);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjMesBase::vfunc_13(s32) {
    s32 label = messageLabel;
    if (label != 0) {
        void* root = 0;
        switch (messageBank) {
        case 0: root = quest_mission_manager; break;
        case 1: root = quest_area_manager; break;
        }
        switch (messagePhase) {
        case 0:
            if (!messageChild && label != 0 && root) {
                void* child = __nw__7TObjectFUl(0x194);
                if (child) child = __ct__12TQuestThreadFv(child, root, messageLabel);
                messageChild = child;
                if (messageChild) ((TObject *)messageChild)->set_parent((TObject *)tl_00);
                messagePhase = 1;
            }
            break;
        case 1: break;
        }
    }
}
void TObjMesBase::clear_ref_if_destroyed() {
    void *p = *(void * *)&this->messageChild;
    if ((p != 0) && (((TObject *)p)->all_parents_unqueued_for_destruction() == 0)) {
        *(u32 *)&this->messageChild = 0U;
        this->messagePhase = 0;
    }
}
void TObjMesBase::vfunc_14() {  }

void TObjMesBase::run_task() {
    s32 temp_r0;

    temp_r0 = this->messagePhase;
    switch (temp_r0) {
    case 0:
        ((VObj_80194CE8_80194C98 *)this)->m12();
        return;
    case 1:
        ((VObj_80194CE8_80194C98 *)this)->m13();
        return;
    }
}

extern s32 __vt__11TObjMesBase[];

void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjMesBase;
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__11TObjMesBase[];
extern s32 TObjMesBase__class_name;

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2) {
    construct_collider_proxy__13TUnk_804AF8A0Fv();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjMesBase;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMesBase__class_name;
    ((TObjMesBase80194_80194C98 *)arg0)->ct(arg2);
    *(s32 *)((s8 *)arg0 + 0xB4) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    *(s32 *)((s8 *)arg0 + 0xB8) = (s32) *(s32 *)((s8 *)arg0 + 0x8C);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB8) < 0) {
        *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB8) > 1) {
        *(s32 *)((s8 *)arg0 + 0xB8) = 1;
    }
    *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    *(s32 *)((s8 *)arg0 + 0xB0) = 0;
    return arg0;
}

extern s32 camera_ctrl_instance;

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (xz_distance_squared(camera_ctrl_instance + 0x178, arg0 + 0x38) < (farg1 * farg1)) {
        return 1;
    }
    return update_object_view_visibility__13TUnk_804B9870Fff(arg0, farg0, farg1);
}
void TMotorcycle::debug_draw_label() {
    Mc_80194EC4 *arg0 = (Mc_80194EC4 *)this;
    ((TObjMesBase *)arg0)->TObjMesBase::debug_draw_label();
    arg0->fBC = (s32)fabs_float(arg0->f68);
    arg0->fBC = arg0->fBC % 2;
    arg0->fBC = lbl_80445DF4[arg0->fBC];
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x13001C, lbl_80445E08);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

}
