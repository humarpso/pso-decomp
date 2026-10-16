#include "types.h"
#include "pso/item/TUnk_804A1E28.h"

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

struct RecoveredGlobal_80123CA8_lbl_8043E878 {
    s32 value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_80123CA8_lbl_8043E8D8 {
    s32 value;
    u8 remaining[0x5C];
};

extern "C" {
s32 add_actor_tp(void *, s32);
s16 obj_getS16_32E(void *);
extern const f32 lbl_805DAD20;
void update_weapon__13TUnk_804A1E28Fv(u8 *arg0);
u8 * init_state__10TObjPlayerFv(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_state__10TObjPlayerFi(s32 arg0);
s32 scale_current_matrix(void *, int);
extern RecoveredGlobal_80123CA8_lbl_8043E878 lbl_8043E878;
extern RecoveredGlobal_80123CA8_lbl_8043E8D8 lbl_8043E8D8;
void sorcerers_cane_node_callback(u8 *arg0);
}

extern "C" {

u8 *create_state__10TObjPlayerFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_state__10TObjPlayerFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"
#include "pso/player/TObjPlayer.h"

typedef char RecoveredGlobal_80123CA8_lbl_8043E878_size[sizeof(RecoveredGlobal_80123CA8_lbl_8043E878) == 0x60 ? 1 : -1];
typedef char RecoveredGlobal_80123CA8_lbl_8043E8D8_size[sizeof(RecoveredGlobal_80123CA8_lbl_8043E8D8) == 0x60 ? 1 : -1];
void sorcerers_cane_node_callback(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;
    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        TObjPlayer::play_particle_effect_once();
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x1F8);
        scale_current_matrix((void *) ((u8 *)&lbl_8043E878.value + (temp_r4 * 0xC)), (int) (temp_r4));
        return;
    case 4:
        TObjPlayer::play_particle_effect_once();
        temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x1F8);
        scale_current_matrix((void *) ((u8 *)&lbl_8043E8D8.value + (temp_r4_2 * 0xC)), (int) (temp_r4_2));
        return;
    case 7:
        TObjPlayer::play_particle_effect_once();
        return;
    }
}

void TUnk_804A1E28::update_weapon() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r0;
    s16 temp_r3_3;
    s32 temp_r3;
    s32 temp_r3_2;
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1FE) == 1) {
        temp_r3 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r3 == 7) {
            *(s16 *)((s8 *)arg0 + 0x1FE) = 0;
        } else {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r3 + 1);
        }
    }
    if ((s16) *(s16 *)((s8 *)arg0 + 0x1FE) == 2) {
        temp_r3_2 = *(s32 *)((s8 *)arg0 + 0x1F8);
        if (temp_r3_2 == 0) {
            *(s16 *)((s8 *)arg0 + 0x1FE) = 3;
        } else {
            *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (temp_r3_2 - 1);
        }
    }
    temp_r3_3 = obj_getS16_32E(*(u8 **)((s8 *)arg0 + 0xF0));
    temp_r0 = *(s16 *)((s8 *)arg0 + 0x1FC) - temp_r3_3;
    if (temp_r0 < 0) {
        *(s16 *)((s8 *)arg0 + 0x1FC) = temp_r3_3;
        return;
    }
    if (temp_r0 > 0) {
        add_actor_tp(*(u8 **)((s8 *)arg0 + 0xF0), (s32) (lbl_805DAD20 * (f32) temp_r0));
        *(s16 *)((s8 *)arg0 + 0x1FC) = obj_getS16_32E(*(u8 **)((s8 *)arg0 + 0xF0));
    }
}

}
