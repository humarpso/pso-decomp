#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s16 m14();
};

struct Base_801221A0 { u8 pad0[0x18]; };

struct Pl_801221A0 : Base_801221A0 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual s32 m49(void *, s32, s32, s32);
};

struct Self_801221A0 : Pl_801221A0 {
    u8 pad1C[0x1EC - 0x1C];
    void *fn1ec;
    void *fn1f0;
    u8 pad1F4[4];
    u8 a1f8[0xC];
    u8 a204[0xC];
};

extern "C" {
u8 * init_state_vector__10TObjPlayerFPv(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_state_vector_state__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
void spawn_weapon_impact_effect();
void create_shoot_model_rot_z();
void create_gun_shot();
void guld_milla_marker(Self_801221A0 *self);
}

extern "C" {

u8 *create_state_vector_state__10TObjPlayerFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_state_vector__10TObjPlayerFPv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
void guld_milla_marker(Self_801221A0 *self) {
    if (is_mode_two_and_ready__10TObjPlayerFPv(self) != 0) {
        self->fn1f0 = (void *)create_shoot_model_rot_z;
        self->fn1ec = NULL;
    } else {
        self->fn1f0 = (void *)create_gun_shot;
        self->fn1ec = (void *)spawn_weapon_impact_effect;
    }
    if (self->m49(self->a1f8, 0, 0, 1) != 0) {
        self->m49(self->a204, 0, 0, 0);
    } else {
        self->m49(self->a204, 0, 0, 1);
    }
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

}
