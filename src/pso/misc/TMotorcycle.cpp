#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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

struct RecoveredGlobal_801950B8_lbl_804B8564 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_801950B8_lbl_804B8564_size[sizeof(RecoveredGlobal_801950B8_lbl_804B8564) == 0x10 ? 1 : -1];

struct Moto_801951C8 { s32 x0; u8 pad4[0x30 - 4]; u32 flags; u8 pad34[0x68 - 0x34]; f32 x68; u8 pad6C[0xBC - 0x6C]; s32 xBC; };

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
s32 set_global_param__8TObjFishFi(s32);
M2C_UNK get_bml_model(void *, int);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK rotate_matrix_yxz(int, int, int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object();
extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;
extern const f32 lbl_805DBED0;
extern const f32 lbl_805DBED4;
void render__11TMotorcycleFv(u8 *arg0);
M2C_UNK get_bml_model(void *, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
M2C_UNK add_entry__11TMotorcycleFsiiff(int, void *, void *, f32, f32);
extern RecoveredGlobal_801950B8_lbl_80445E18 lbl_80445E18;
extern RecoveredGlobal_801950B8_lbl_804B8564 lbl_804B8564;
extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;
extern const f32 lbl_805DBED8;
extern const f32 lbl_805DBEDC;
void load_resources__11TMotorcycleFv(void);
f32 get_random_float__8TObjFishFv(f32);
void reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
M2C_UNK TObjMesBase__ct(void *, void *, void *);
extern s32 lbl_80445DF4[];
extern M2C_UNK lbl_804B8574[];
extern M2C_UNK __vt__11TMotorcycle[];
extern s32 motorcycle_class_name;
void *TMotorcycle__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TMotorcycle__vt12(void);
void *__dt__11TMotorcycleFv(void *arg0, s16 arg1);
void *create__11TMotorcycleFPv(void *arg0);
void free_statics__11TMotorcycleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__11TObjMesBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

void render__11TMotorcycleFv(u8 *arg0) {
    if ((get_state_flag__9TMainTaskFv() != 1) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBED0, lbl_805DBED4) != 0)) {
        set_depth_buffer_settings_id__FUl((int) (3));
        if ((u32) lbl_805D5C44 != 0U) {
            set_global_param__8TObjFishFi((s32) lbl_805D5C44);
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            rotate_matrix_yxz((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)), (int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
            get_bml_model((void *) ((*(s32 *)&lbl_805D5C40)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)));
            draw_ginja_object();
            pop_matrix();
        }
        func_80141618__Fv();
    }
}

void TMotorcycle__vt12(void) {  }

extern void *tl_05;

void *create__11TMotorcycleFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TMotorcycle__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 lbl_805D5C40;
extern u32 lbl_805D5C44;

void free_statics__11TMotorcycleFv(void) {
    if ((u32) lbl_805D5C44 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5C44);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5C44);
        lbl_805D5C44 = 0U;
    }
    if ((u32) lbl_805D5C40 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5C40, 1);
        lbl_805D5C40 = 0U;
    }
}

extern M2C_UNK __vt__11TMotorcycle[];

void load_resources__11TMotorcycleFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804B8564.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5C40) = (unsigned char *) ((void *) var_r0);
    (*(u8 * *)&lbl_805D5C44) = load_gvm_texture_file((s32) &lbl_80445E18.value);
    add_entry__11TMotorcycleFsiiff((int) (0x3C), (void *) (((s32)get_bml_model((void *)((*(u8 * *)&lbl_805D5C40)), (int)(0)))), (void *) ((*(u8 * *)&lbl_805D5C44)), (f32) (lbl_805DBED8), (f32) (lbl_805DBEDC));
    add_entry__11TMotorcycleFsiiff((int) (0x3D), (void *) (((s32)get_bml_model((void *)((*(u8 * *)&lbl_805D5C40)), (int)(1)))), (void *) ((*(u8 * *)&lbl_805D5C44)), (f32) (lbl_805DBED8), (f32) (lbl_805DBEDC));
}

void *__dt__11TMotorcycleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMotorcycle;
        unregister_object_by_id((M2C_UNK *)arg0);
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMotorcycle;
    self->x0 = motorcycle_class_name;
    self->xBC = get_random_float__8TObjFishFv(self->x68);
    self->xBC = self->xBC % 2;
    self->xBC = lbl_80445DF4[self->xBC];
    init_collision_body_parts(arg0, lbl_804B8574, 1);
    self->flags |= 0x40000000;
    reset_photon_effect__10TObjPlayerFPv(arg0);
    return arg0;
}

}
