#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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

struct Mc_80194EC4 { u8 pad0[0x68]; f32 f68; u8 pad6C[0x50]; s32 fBC; };

struct Pair_80194AEC { const char *s[2]; };

struct Mes_80194AEC { u8 pad0[0x84]; s32 f84; u8 pad88[4]; s32 f8C; u8 pad90[0x24]; s32 fB4; s32 fB8; };

extern "C" {
extern void* quest_mission_manager;
extern void* quest_area_manager;
extern void* tl_00;
void* __nw__7TObjectFUl(unsigned long);
void* __ct__12TQuestThreadFv(void*, void*, s32);
void set_parent__7TObjectFP7TObject(void*, void*);
f32 fabs_float(f32);
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(int, void *, ...);
extern s32 lbl_80445DF4[];
extern u8 lbl_80445E08[];
void TMotorcycle__vt14(Mc_80194EC4 *arg0);
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(int, void *, ...);
extern Pair_80194AEC lbl_80445D94[];
extern u8 lbl_80445D9C[];
extern u8 lbl_80445DAC[];
void debug_draw_label__11TObjMesBaseFPv(Mes_80194AEC *arg0);
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
void TObjMesBase__vt12(void);
void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1);
void clear_ref_if_destroyed__11TObjMesBaseFPv(void *arg0);
void dispatch_state__11TObjMesBaseFPv(void *arg0);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv();
void __dl__7TObjectFPv(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *obj);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
f32 xz_distance_squared(s32, s32);
s32 update_object_view_visibility(s32, f32, f32);

}

extern "C" {

void debug_draw_label__11TObjMesBaseFPv(Mes_80194AEC *arg0) {
    arg0->fB4 = arg0->f84;
    arg0->fB8 = arg0->f8C;
    if (arg0->fB8 < 0) {
        arg0->fB8 = 0;
    }
    if (arg0->fB8 > 1) {
        arg0->fB8 = 1;
    }
    Pair_80194AEC names = lbl_80445D94[0];
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80445D9C, arg0->fB4);
    debug_printf_at(0x130022, lbl_80445DAC, names.s[arg0->fB8]);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TObjMesBase::start_message() {
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
                if (messageChild) set_parent__7TObjectFP7TObject(messageChild, tl_00);
                messagePhase = 1;
            }
            break;
        case 1: break;
        }
    }
}
void clear_ref_if_destroyed__11TObjMesBaseFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0xAC);
    if ((p != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0)) {
        M2C_FIELD(arg0, u32 *, 0xAC) = 0U;
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
}
void TObjMesBase__vt12(void) {  }

void dispatch_state__11TObjMesBaseFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        ((VObj_80194CE8_80194C98 *)arg0)->m12();
        return;
    case 1:
        ((VObj_80194CE8_80194C98 *)arg0)->m13();
        return;
    }
}

extern M2C_UNK __vt__11TObjMesBase[];

void *__dt__11TObjMesBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMesBase;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__11TObjMesBase[];
extern s32 TObjMesBase__class_name;

void *TObjMesBase__ct(void *arg0, s32 arg1, s32 arg2) {
    construct_collider_proxy__10TObjPlayerFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TObjMesBase;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjMesBase__class_name;
    ((TObjMesBase80194_80194C98 *)arg0)->ct(arg2);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) < 0) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB8) > 1) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    return arg0;
}

extern s32 camera_ctrl_instance;

s32 TMotorcycle__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (xz_distance_squared(camera_ctrl_instance + 0x178, arg0 + 0x38) < (farg1 * farg1)) {
        return 1;
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}
void TMotorcycle__vt14(Mc_80194EC4 *arg0) {
    debug_draw_label__11TObjMesBaseFPv((Mes_80194AEC *)(arg0));
    arg0->fBC = (s32)fabs_float(arg0->f68);
    arg0->fBC = arg0->fBC % 2;
    arg0->fBC = lbl_80445DF4[arg0->fBC];
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x13001C, lbl_80445E08);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}
