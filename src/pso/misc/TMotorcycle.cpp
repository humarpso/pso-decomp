#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TMotorcycle.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
extern char lbl_80445DB8[];
extern char lbl_80445DC8[];
extern char lbl_80445DE0[];
extern const char *fe_obj_baiku_model_names[3];
extern BmlResourceDescriptor motorcycle_resource_descriptor;
extern const char *fe_obj_baiku_motion_names[1];
}

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct RecoveredGlobal_801950B8_lbl_80445E18 { char value[0x13]; };
typedef char RecoveredGlobal_801950B8_lbl_80445E18_size[sizeof(RecoveredGlobal_801950B8_lbl_80445E18) == 0x13 ? 1 : -1];

struct RecoveredGlobal_801950B8_lbl_804B8564 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801950B8_lbl_804B8564_size[sizeof(RecoveredGlobal_801950B8_lbl_804B8564) == 0x10 ? 1 : -1];

struct Moto_801951C8 { s32 x0; u8 pad4[0x30 - 4]; u32 flags; u8 pad34[0x68 - 0x34]; f32 x68; u8 pad6C[0xBC - 0x6C]; s32 xBC; };

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
s32 get_bml_model(void *, int);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 rotate_matrix_yxz(int, int, int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
extern u32 TMotorcycle__bml_resource;
extern u32 TMotorcycle__texture_list;
extern const f32 lbl_805DBED0;
extern const f32 lbl_805DBED4;
s32 get_bml_model(void *, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_801950B8_lbl_80445E18 lbl_80445E18;
extern u32 TMotorcycle__bml_resource;
extern u32 TMotorcycle__texture_list;
extern const f32 lbl_805DBED8;
extern const f32 lbl_805DBEDC;
f32 fabs_float(f32);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjMesBase__ct(void *, void *, void *);
extern s32 lbl_80445DF4[];
extern s32 TMotorcycle__collision_parts[];
extern s32 __vt__11TMotorcycle[];
extern s32 motorcycle_class_name;
void *TMotorcycle__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
s32 __dt__11TObjMesBaseFv(void *, s32);
void *__nw__7TObjectFUl(int);

void TMotorcycle::render() {
    u8 *arg0 = (u8 *)this;
    if ((get_state_flag__9TMainTaskFv() != 1) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBED0, lbl_805DBED4) != 0)) {
        set_depth_buffer_settings_id__FUl((int) (3));
        if ((u32) TMotorcycle__texture_list != 0U) {
            TObjFish::set_global_param((s32) TMotorcycle__texture_list);
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_yxz((int) (0), (int) (*(s32 *)&this->m_5c), (int) (this->rotation_y), (int) (this->rotation_z));
            get_bml_model((void *) ((*(s32 *)&TMotorcycle__bml_resource)), (int) (*(s32 *)&this->m_bc));
            draw_ginja_object();
            pop_matrix();
        }
        func_80141618__Fv();
    }
}

void TMotorcycle::vfunc_14() {  }

extern void *tl_05;

void *TMotorcycle::create() {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TMotorcycle__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

extern u32 TMotorcycle__bml_resource;
extern u32 TMotorcycle__texture_list;

void TMotorcycle::free_statics() {
    if ((u32) TMotorcycle__texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TMotorcycle__texture_list);
        TAdSinglePlyChrSelectGC::safe_free(TMotorcycle__texture_list);
        TMotorcycle__texture_list = 0U;
    }
    if ((u32) TMotorcycle__bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TMotorcycle__bml_resource, 1);
        TMotorcycle__bml_resource = 0U;
    }
}

extern s32 __vt__11TMotorcycle[];

void TMotorcycle::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &motorcycle_resource_descriptor, 0, 0, 0));
    }
    (*(u8 * *)&TMotorcycle__bml_resource) = (unsigned char *) ((void *) var_r0);
    (*(u8 * *)&TMotorcycle__texture_list) = load_gvm_texture_file((s32) &lbl_80445E18.value);
    TMotorcycle::add_entry((s16)((int) (0x3C)), (s32)((void *) (((s32)get_bml_model((void *)((*(u8 * *)&TMotorcycle__bml_resource)), (int)(0))))), (s32)((void *) ((*(u8 * *)&TMotorcycle__texture_list))), (f32)((f32) (lbl_805DBED8)), (f32)((f32) (lbl_805DBEDC)));
    TMotorcycle::add_entry((s16)((int) (0x3D)), (s32)((void *) (((s32)get_bml_model((void *)((*(u8 * *)&TMotorcycle__bml_resource)), (int)(1))))), (s32)((void *) ((*(u8 * *)&TMotorcycle__texture_list))), (f32)((f32) (lbl_805DBED8)), (f32)((f32) (lbl_805DBEDC)));
}

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TMotorcycle;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        __dt__11TObjMesBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#define self ((Moto_801951C8 *)arg0)
void *TMotorcycle__ct(void *arg0, void *arg1, void *arg2) {
    TObjMesBase__ct(arg0, arg1, arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TMotorcycle;
    self->x0 = motorcycle_class_name;
    self->xBC = fabs_float(self->x68);
    self->xBC = self->xBC % 2;
    self->xBC = lbl_80445DF4[self->xBC];
    init_collision_body_parts(arg0, TMotorcycle__collision_parts, 1);
    self->flags |= 0x40000000;
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *fe_obj_baiku_model_names[3] = { lbl_80445DB8, lbl_80445DC8, NULL };
BmlResourceDescriptor motorcycle_resource_descriptor = { lbl_80445DE0, fe_obj_baiku_model_names, fe_obj_baiku_motion_names, 2, 0 };
__declspec(section ".sdata") const char *fe_obj_baiku_motion_names[1] = { NULL };
}
