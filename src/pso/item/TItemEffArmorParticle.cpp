#include "pso/TItemEffArmorParticle.h"

#include <stddef.h>

typedef char armor_item_id_offset[(offsetof(TItemEffArmorParticle, m_item_id) == 0x1C) ? 1 : -1];
typedef char armor_particle_offset[(offsetof(TItemEffArmorParticle, m_20) == 0x20) ? 1 : -1];
typedef char armor_player_id_offset[(offsetof(TItemEffArmorParticle, m_player_id) == 0x24) ? 1 : -1];
typedef char armor_item_ctrl_offset[(offsetof(TItemEffArmorParticle, m_item_ctrl) == 0x28) ? 1 : -1];
typedef char armor_size_check[(sizeof(TItemEffArmorParticle) == 0x2C) ? 1 : -1];

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 obj_testFlags30(int, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 clear_active_flag__13TParticleCtrlFPv(int);
s32 enable__13TParticleCtrlFPv(int);
u32 find_item_by_id(int);
s32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 get_flag_40__8TItemMagFPv(int);
void *get_player_by_client_id(u16);
}

void TItemEffArmorParticle::run_task() {
    s32 active;
    u32 player, item;

    if (m_item_ctrl != (u32)get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    active = 0;
    if ((u32)m_20 != 0U) {
        player = (u32)get_player_by_client_id(m_player_id);
        item = find_item_by_id(m_item_id);
        if (player != 0U) {
            if (item != 0U) {
                if (TObjPlayer__sub_80102C30() == 2) {
                    if (obj_testFlags30((int)player, 0x800) == 0) {
                        if (get_flag_40__8TItemMagFPv((int)item) == 0) {
                            clear_active_flag__13TParticleCtrlFPv((int)m_20);
                        } else {
                            goto enable_particle;
                        }
                    } else {
                    enable_particle:
                        enable__13TParticleCtrlFPv((int)m_20);
                    }
                    active = 1;
                    copy_pos__11TNowLoadingFPvPv((int)m_20, (void *)(player + 0x2FC));
                }
            }
        }
    }
    if (active == 0) {
        queue_destruction__7TObjectFv(this);
    }
}

TItemEffArmorParticle::~TItemEffArmorParticle() {
    if (m_20 != nullptr) queue_destruction__7TObjectFv(m_20);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80364364 { char pad[0x18]; };
struct V_A_80364364 : Base_A_80364364 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual M2C_UNK m7();
};

extern "C" {

void *TItemEffArmorParticle__ct(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4);
u32 spawn_continuous_particle_effect_with_flags(M2C_UNK, s32, s32);
M2C_UNK set_owner_id__13TParticleCtrlFPvUs(u32, u16);
void *get_player_by_client_id(u16);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 get_item_ctrl__10TObjPlayerFv();

extern void* __vt__21TItemEffArmorParticle[];
extern s32 TItemEffArmorParticle__class_name;

void *TItemEffArmorParticle__ct(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r3;
    u32 p;

    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__21TItemEffArmorParticle;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TItemEffArmorParticle__class_name;
    disallow_rendering__7TObjectFv(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x24) = (s16) arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = get_item_ctrl__10TObjPlayerFv();
    temp_r3 = get_player_by_client_id((u16) arg3);
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u32 *, 0x20) = spawn_continuous_particle_effect_with_flags(((V_A_80364364 *) temp_r3)->m7(), arg4, 0x10);
        p = M2C_FIELD(arg0, u32 *, 0x20);
        if (p != 0U) {
            set_owner_id__13TParticleCtrlFPvUs(p, M2C_FIELD(arg0, u16 *, 0x24));
        }
    } else {
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
    }
    return arg0;
}

}
