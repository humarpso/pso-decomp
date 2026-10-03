#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
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
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual M2C_UNK m53();
};

extern "C" {
void obj_setFlags30(void *, u32);
void reset_lobby_model__10TObjPlayerFPv(void *);
void zero_vec3(void *);
void reset_on_death__10TObjPlayerFPv(u8 *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
u16 obj_getField1c(void *);
s32 init_entry_fields__6TLobbyFPviii(int, int, void *, void *);
void zero_vec3(void *);
M2C_UNK calc_death_pose_height_offset(void *, void *);
M2C_UNK update_action_render__10TObjPlayerFPv(void *);
s32 __nw__7TObjectFUl(int);
void complete_deferred_player_death();
extern s32 tl_particlemodel;
void restart_death_pose__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void restart_death_pose__10TObjPlayerFPv(u8 *arg0) {
    s32 var_r31;
    update_action_render__10TObjPlayerFPv(arg0);
    zero_vec3((void *) (arg0 + 0x5FC));
    calc_death_pose_height_offset((void *) (arg0 + 0x5FC), (void *) (arg0));
    if (is_locally_controlled__10TObjPlayerFPv((void *) (arg0)) != 0) {
        var_r31 = __nw__7TObjectFUl((int) (0x2C));
        if (var_r31 != 0) {
            var_r31 = init_entry_fields__6TLobbyFPviii((int) (var_r31), (int) (tl_particlemodel), (void *) (&complete_deferred_player_death), (void *) (obj_getField1c((void *) (arg0))));
        }
        M2C_FIELD(arg0, s32 *, 0x548) = var_r31;
    }
}

void reset_on_death__10TObjPlayerFPv(u8 *arg0) {
    obj_setFlags30(arg0, 0x800U);
    M2C_FIELD(arg0, s16 *, 0x32C) = 0;
    ((VObj_18_4841bb *)(arg0))->m53();
    reset_lobby_model__10TObjPlayerFPv(arg0 + 0x644);
    zero_vec3(arg0 + 0x5FC);
}

}
