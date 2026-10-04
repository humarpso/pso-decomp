#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_10 { u8 bytes[0x10]; };

struct M2CCopy_14 { u8 bytes[0x14]; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
M2C_UNK fn_8002B094(int);
u8 *csnVector(M2C_UNK *, void *, M2C_UNK);
s32 fn_800B91F4(void *);
M2C_UNK setup_instance__9TObjEneDDFiiPvi(void *, int, void *, int);
s32 advance_animation_playback(void *);
u32 __nw__7TObjectFUl(int);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
void TObjFish__sub_802EC7F0(u8 *arg0);
void TObjFish__sub_802ECCAC(u8 *self);
M2C_UNK release_laser_light__15TBoss7LaserPtclFPv(void *, int);
M2C_UNK free_laser_light__15TBoss7LaserPtclFPv(void *);
M2C_UNK TBoss7LaserPtcl__sub_802ECE28(void *);
s32 TObjFish__sub_802ED4AC(void *, int);
s32 TObjFish__sub_802ED62C(void *, int);
M2C_UNK TBoss7LaserPtcl__sub_802EEE24(void *, void *);
u32 TBoss7LaserLight__sub_802EEF10(void *, void *, int, int);
M2C_UNK fn_8035A8E0(int, void *);
M2C_UNK calc_world_position__15TBoss7LaserPtclFPvPv(int, int);
s32 is_state_2__15TBoss7LaserPtclFPv(void *);
M2C_UNK init_laser__15TBoss7LaserPtclFPv(void *);
M2C_UNK TBoss7LaserPtcl__sub_8035AA58(void *, void *, void *);
M2C_UNK TBoss7LaserPtcl__sub_8035AA98(void *);
u32 TBoss7LaserPtcl__ct(u32, void *, void *, int);
extern M2C_UNK lbl_80472D90[];
extern const f32 lbl_805DEA10;
extern const f32 lbl_805DEA38;
extern const f32 lbl_805DEA4C;
void TBoss7LaserPtcl__sub_802E8FCC(u8 *arg0, u32 arg1);
}

extern "C" {

struct Stack_802EC468 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_802EC468_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Ent_802E88F8 { s32 a; s32 b; };

struct Fish_802E8AD4 { u8 pad[0x628]; u32 flags; };

typedef char RecoveredGlobal_802EC468_lbl_804FF5E8_size[sizeof(RecoveredGlobal_802EC468_lbl_804FF5E8) == 0x28 ? 1 : -1];

struct RecoveredGlobal_802EC7F0_lbl_804E3C2C {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Ply_802ECAA4 { u8 pad[0x326]; s16 state; };

typedef char RecoveredGlobal_802EC7F0_lbl_804E3C2C_size[sizeof(RecoveredGlobal_802EC7F0_lbl_804E3C2C) == 0x30 ? 1 : -1];

struct VBase_802ECBDC { char pad[0x18]; };

struct VObj_802ECBDC : VBase_802ECBDC {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
};

struct Fish_802ECBDC {
    u8 pad0[0x5F8];
    VObj_802ECBDC *kids[10];
};

struct VBase_802ECC44 { char pad[0x18]; };

struct VObj_802ECC44 : VBase_802ECC44 {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
};

struct Fish_802ECC44 {
    u8 pad0[0x5F8];
    VObj_802ECC44 *kids[10];
};

f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
u8 * get_player_data__10TObjPlayerFi(s32);
s32 queue_destruction__7TObjectFv(void *);
s32 get_game_mode__6TLobbyFv();
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
s32 set_field_b8__14TObjEnePanarmsFPvs(void *, int);
s32 spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK enemy_clear_target(void *);
M2C_UNK TBoss2DeRolLe__sub_800B98D8(void *, void *);
s32 enemy_set_target_id(void * a0 = 0, u16 a1 = 0);
M2C_UNK project_sound_origin_from_camera(void *, void *, f32);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
s32 is_alive__9TObjEneDDFPv();
s32 transition_enemy_state(void * a0 = 0, s16 a1 = 0);
void * get_enemy_entity(int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *);
s32 play_persistent_sound(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
int play_sound_effect(void*, void*, void*, void*);
s32 get_node_count__7TObjectFv(int);
s32 TObjFish__sub_802E7B40(void *);
s32 TObjFish__sub_802E7B94(void *);
void TObjFish__sub_802E8528(void* o, u32 k);
void TObjFish__sub_802E8584(void* o, u32 k);
void TObjFish__sub_802E88F8(u8 *arg0, u32 arg1);
void TObjFish__sub_802E8990(u8 *arg0, u32 arg1);
void TObjFish__sub_802E8AD4(Fish_802E8AD4* o, u32 k);
void TObjFish__sub_802E8E34(u8 *arg0, u32 arg1);
void TObjFish__sub_802E8EEC(u8 *arg0, u32 arg1);
void TObjFish__sub_802EBE50(void* o, u32 k);
void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2);
void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2);
void TObjFish__sub_802EC32C(void);
void update_projectile_spawns__8TObjFishFPv(u8 *arg0);
void TObjFish__sub_802EC468(s32 arg0, f32 farg0, f32 farg1);
void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2);
void fn_802EC52C(M2C_UNK arg0, s32 arg1);
void TObjFish__sub_802EC7F0(u8 *arg0);
void TBoss7DeRolLeC__sub_802EC994(void* p);
void fn_802EC9A4(void *arg0, void *arg1);
void fn_802EC9F0(void *arg0, void *arg1);
void handle_6xAA_barba_ray_boss_actions(void *arg0);
void handle_6xA9_barba_ray_boss_actions(void *arg0);
void TObjPlayer__sub_802ECAA4(Ply_802ECAA4 *o);
u8 TObjPlayer__sub_802ECB10(void *arg0);
void TObjFish__sub_802ECB38(u8 *arg0);
void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1);
void TObjFish__sub_802ECBDC(Fish_802ECBDC *self);
void TObjFish__sub_802ECC44(Fish_802ECC44 *self);
void TObjFish__sub_802ECCAC(u8 *self);
s32 TObjFish__sub_802ED4AC(void *, int);
s32 TObjFish__sub_802ED62C(void *, int);
void read_state__11TBoss7JointFPv(void *);
void byteswap_action_packet__11TBoss7JointFPv(void *);
M2C_UNK spawn_default_particle__8TObjFishFv(s32, M2C_UNK);
M2C_UNK TObjFish__sub_802F18E8(void *);
void set_flag_0x200__15TObjBoss2TunnelFv(void);
M2C_UNK vec3_add_to(int, void *);

extern Ent_802E88F8 *lbl_804E3C2C[];
extern RecoveredGlobal_802EC468_lbl_804FF5E8 lbl_804FF5E8;
extern s32 lbl_805D5550;
extern const f32 lbl_805DEA10;
extern const f32 lbl_805DEA14;
extern const f32 lbl_805DEA30;
extern const f32 lbl_805DEA40;
extern const f32 lbl_805DEA44;
extern const f32 lbl_805DEA48;
extern const f32 lbl_805DEA50;
extern const f32 lbl_805DEA54;
extern const f32 lbl_805DEA58;
extern const f32 lbl_805DEA5C;
extern const f32 lbl_805DEA60;
extern const f32 lbl_805DEA64;
extern const f32 lbl_805DEB68;

extern "C" {
void TObjFish__sub_802ECBDC(Fish_802ECBDC *self);
}

void TObjFish__sub_802E8528(void* o, u32 k) {
    switch (k) {
    case 0:
        advance_animation_playback(o);
        TObjFish__sub_802E7B40(o);
        ((s32 (*)(void *))TObjFish__sub_802EC7F0)(o);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 4: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TObjFish__sub_802E8584(void* o, u32 k) {
    switch (k) {
    case 0:
        advance_animation_playback(o);
        TObjFish__sub_802E7B94(o);
        ((s32 (*)(void *))TObjFish__sub_802EC7F0)(o);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 4: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TObjFish__sub_802E88F8(u8 *arg0, u32 arg1) {
    s32 temp_r3;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x728) = lbl_804E3C2C[lbl_805D5550][M2C_FIELD(arg0, s32 *, 0x6B4)].b * 0x1E;
        return;
    case 0:
        advance_animation_playback(arg0);
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x728);
        M2C_FIELD(arg0, s32 *, 0x728) = temp_r3 - 1;
        if (temp_r3 == 0) {
            ((s32 (*)(void *))TObjFish__sub_802EC7F0)(arg0);
        }
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TObjFish__sub_802E8990(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x728) = M2C_FIELD(arg0, s16 *, 0xF4);
        M2C_FIELD(arg0, s16 *, 0xF4) = 1;
        return;
    case 0:
        advance_animation_playback(arg0);
        if (get_node_count__7TObjectFv(M2C_FIELD(arg0, s32 *, 0x7A4)) == 0) {
            ((s32 (*)(void *))TObjFish__sub_802EC7F0)(arg0);
        }
        return;
    case 5:
        M2C_FIELD(arg0, s16 *, 0xF4) = M2C_FIELD(arg0, s32 *, 0x728);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TObjFish__sub_802E8AD4(Fish_802E8AD4* o, u32 k) {
    switch (k) {
    case 4:
        set_field_b8__14TObjEnePanarmsFPvs(o, 0x10);
        ((s32 (*)(void *))TObjFish__sub_802ECC44)(o);
        o->flags |= 4;
        o->flags &= 0xFFFFFEFF;
        set_flag_0x200__15TObjBoss2TunnelFv();
        return;
    case 0:
        queue_destruction__7TObjectFv(o);
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TObjFish__sub_802E8E34(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x628) = M2C_FIELD(arg0, s32 *, 0x628) | 4;
        M2C_FIELD(arg0, s32 *, 0x628) = M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFEFF;
        ((s32 (*)(void *))TObjFish__sub_802ECC44)(arg0);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, f32 *, 0x6F0) = lbl_805DEA10;
        return;
    case 9:
        if (M2C_FIELD(arg0, s16 *, 0xB8) == 1) {
            ((s32 (*)(void *))TObjFish__sub_802EC7F0)(arg0);
        }
        return;
    case 8:
        if (M2C_FIELD(arg0, f32 *, 0x6F0) < lbl_805DEA40) {
            TObjFish__sub_802ED62C(arg0, 0x1C);
        }
        return;
    case 0:
        M2C_FIELD(arg0, f32 *, 0x6F0) = M2C_FIELD(arg0, f32 *, 0x6F0) - lbl_805DEA44;
        return;
    case 1: return;
    case 2: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    }
}

void TObjFish__sub_802E8EEC(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFFB);
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x100);
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xE));
        ((s32 (*)(void *))TObjFish__sub_802ECBDC)((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x6C0) = 3;
        TObjFish__sub_802ED4AC((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x6C0)));
        break;
    case 2:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) {
            TObjFish__sub_802ED62C((void *) (arg0), (int) (2));
            break;
        }
    default:
        break;
    case 9:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 1) {
            ((s32 (*)(void *))TObjFish__sub_802EC7F0)((void *) (arg0));
            break;
        }
        break;
    case 0:
        advance_animation_playback((void *) (arg0));
        if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA48)) != 0) {
            set_effect_target_position__8TObjFishFPvPvPv((void*)((void *) (arg0)), (void*)((int) (0x39906)), (void*)((void *) ((u8 *)(arg0) + 0x50C)));
        }
        break;
    }
}

struct Fish_802ECBDC;
void TBoss7LaserPtcl__sub_802E8FCC(u8 *arg0, u32 arg1) {
    struct CopyStack_802E8FCC { u8 bytes[0x14]; };
    CopyStack_802E8FCC copy_storage_802E8FCC;
    struct { f32 v[3]; } sp8;
    s32 temp_r0;
    s32 temp_r4_2;
    u32 var_r0;
    u32 var_r0_2;
    u32 var_r0_3;
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r30 = (u8 *)((void *)((u8 *)(arg0) + 0x76C));
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFFB);
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x100);
        TObjFish__sub_802ECBDC((Fish_802ECBDC *)arg0);
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xF));
        M2C_FIELD(arg0, s32 *, 0x6C0) = 3;
        TObjFish__sub_802ED4AC((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x6C0)));
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x718)));
        M2C_FIELD(arg0, s32 *, 0x728) = 0;
        M2C_FIELD(arg0, s32 *, 0x72C) = 0;
        M2C_FIELD(arg0, s32 *, 0x730) = 0;
        M2C_FIELD(arg0, s32 *, 0x73C) = 0;
        M2C_FIELD(arg0, f32 *, 0x748) = (f32) lbl_805DEA10;
        M2C_FIELD(arg0, f32 *, 0x76C) = (f32) lbl_805DEA10;
        M2C_FIELD(temp_r30, f32 *, 4) = (f32) lbl_805DEA10;
        M2C_FIELD(temp_r30, f32 *, 8) = (f32) lbl_805DEA10;
        M2C_FIELD(arg0, u32 *, 0x784) = 0U;
        return;
    case 2:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x728) == 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x724) >= 4) {
                TObjFish__sub_802ED62C(arg0, 0x19);
            } else {
                TObjFish__sub_802ED62C(arg0, 0x18);
            }
        }
        break;
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x728) == 4) {
            TObjFish__sub_802EC7F0(arg0);
            return;
        }
        break;
    case 0:
        ((M2C_UNK)advance_animation_playback(arg0));
        M2C_FIELD(arg0, s32 *, 0x7A0) = 6;
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x728);
        switch (temp_r0) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x72C) = (s32) (M2C_FIELD(arg0, s32 *, 0x72C) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x72C) >= 0x14) {
                M2C_FIELD(arg0, s32 *, 0x72C) = 0;
                M2C_FIELD(arg0, s32 *, 0x728) = 1;
                fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x718)));
                set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xD));
                if (fn_800B91F4((void *) (arg0)) != 0) {
                    VecCopy__FP3VecPC3Vec((int)((int) (temp_r30)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x390) + 0x38)));
                } else {
                    M2C_FIELD(arg0, f32 *, 0x76C) = (f32) lbl_805DEA10;
                    M2C_FIELD(temp_r30, f32 *, 4) = (f32) lbl_805DEA10;
                    M2C_FIELD(temp_r30, f32 *, 8) = (f32) lbl_805DEA10;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x7A8));
                }
                var_r0 = __nw__7TObjectFUl((int) (0x58));
                if (var_r0 != 0U) {
                    var_r0 = TBoss7LaserPtcl__ct(var_r0, (void *) (arg0), (void *) ((u8 *)(arg0) + 0x4DC), (int) (temp_r30));
                }
                M2C_FIELD(arg0, u32 *, 0x7A8) = var_r0;
                TBoss7LaserPtcl__sub_802ECE28((void *) (arg0));
                free_laser_light__15TBoss7LaserPtclFPv((void *) (arg0));
                set_effect_target_position__8TObjFishFPvPvPv((void *) (arg0), (void *) (0x39E0F), (void *) ((u8 *)(arg0) + 0x50C));
                return;
            }
            break;
        case 1:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
                TBoss7LaserPtcl__sub_8035AA58(M2C_FIELD(arg0, void **, 0x7A8), (void *) ((u8 *)(arg0) + 0x4DC), (void *) ((u8 *)(arg0) + 0x4E8));
            }
            if ((lbl_805DEA38 < M2C_FIELD(arg0, f32 *, 0xC0)) && ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U)) {
                TBoss7LaserPtcl__sub_8035AA98(M2C_FIELD(arg0, void **, 0x7A8));
            }
            TBoss7LaserPtcl__sub_802ECE28((void *) (arg0));
            if (lbl_805DEA4C <= M2C_FIELD(arg0, f32 *, 0xC0)) {
                M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DEA4C;
                M2C_FIELD(arg0, s32 *, 0x728) = 2;
                if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
                    init_laser__15TBoss7LaserPtclFPv(M2C_FIELD(arg0, void **, 0x7A8));
                }
                set_effect_target_position__8TObjFishFPvPvPv((void *) (arg0), (void *) (0x3A310), (void *) ((u8 *)(arg0) + 0x50C));
                return;
            }
            break;
        case 2:
            temp_r30_2 = (u8 *)((void *)((u8 *)(arg0) + 0x778));
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DEA4C;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
                TBoss7LaserPtcl__sub_8035AA58(M2C_FIELD(arg0, void **, 0x7A8), (void *) ((u8 *)(arg0) + 0x4DC), (void *) ((u8 *)(arg0) + 0x4E8));
                calc_world_position__15TBoss7LaserPtclFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x7A8)), (int) (temp_r30_2));
                fn_8035A8E0((int) (M2C_FIELD(arg0, u32 *, 0x7A8)), (void *) (&sp8));
            }
            temp_r3 = (u8 *)(csnVector((M2C_UNK *)&sp8, temp_r30_2, 0x16EF));
            if (temp_r3 != NULL) {
                VecCopy__FP3VecPC3Vec((int)((int) (temp_r30_2)), (void *)((int) (M2C_FIELD(temp_r3, s32 *, 4))));
                if ((u32) M2C_FIELD(arg0, u32 *, 0x71C) == 0U) {
                    var_r0_2 = __nw__7TObjectFUl((int) (0x124));
                    if (var_r0_2 != 0U) {
                        var_r0_2 = TBoss7LaserLight__sub_802EEF10((void *) var_r0_2, (void *) (arg0), (int) (6), (int) (0x208));
                    }
                    M2C_FIELD(arg0, u32 *, 0x71C) = var_r0_2;
                } else {
                    TBoss7LaserPtcl__sub_802EEE24(M2C_FIELD(arg0, void **, 0x71C), temp_r30_2);
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x720) == 0U) {
                    var_r0_3 = __nw__7TObjectFUl((int) (0x124));
                    if (var_r0_3 != 0U) {
                        var_r0_3 = TBoss7LaserLight__sub_802EEF10((void *) var_r0_3, (void *) (arg0), (int) (0xF), (int) (0x209));
                    }
                    M2C_FIELD(arg0, u32 *, 0x720) = var_r0_3;
                } else {
                    TBoss7LaserPtcl__sub_802EEE24(M2C_FIELD(arg0, void **, 0x720), temp_r30_2);
                }
            }
            temp_r4 = (u8 *)((void *)((u8 *)(lbl_80472D90) + -4));
            *(M2CCopy_14 *)(copy_storage_802E8FCC.bytes) = *(const M2CCopy_14 *)((s32) temp_r4 + 4);
            (*(f32 *)(copy_storage_802E8FCC.bytes + 0x4)) = M2C_FIELD(M2C_FIELD(arg0, f32 **, 0x620), f32 *, 0);
            setup_instance__9TObjEneDDFiiPvi((void *) (arg0), (int) (temp_r30_2), (void *) ((copy_storage_802E8FCC.bytes)), (int) (M2C_FIELD(arg0, s32 *, 0x718)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
                if (is_state_2__15TBoss7LaserPtclFPv(M2C_FIELD(arg0, void **, 0x7A8)) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x728) = 3;
                    return;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x728) = 3;
                return;
            }
            break;
        case 3:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x728) = 4;
                return;
            }
            break;
        }
        break;
    case 6:
        TObjFish__sub_802ECCAC(arg0);
        return;
    case 5:
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x724);
        M2C_FIELD(arg0, s32 *, 0x724) = (s32) (temp_r4_2 + 1);
        release_laser_light__15TBoss7LaserPtclFPv(arg0, (int) (temp_r4_2));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x784) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x784));
            M2C_FIELD(arg0, u32 *, 0x784) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x71C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x71C));
            M2C_FIELD(arg0, u32 *, 0x71C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x720) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x720));
            M2C_FIELD(arg0, u32 *, 0x720) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7A8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x7A8));
            M2C_FIELD(arg0, u32 *, 0x7A8) = 0U;
        }
        break;
    }
}

#pragma push
#pragma fp_contract on
void TObjFish__sub_802E9458(u8 *arg0, u32 arg1) {
    struct { f32 x, y, z; } v;
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) & 0xFFFFFFFB);
        M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x100);
        ((s32 (*)(void *))TObjFish__sub_802ECBDC)((void *) (arg0));
        set_field_b8__14TObjEnePanarmsFPvs((void *) (arg0), (int) (0xC));
        M2C_FIELD(arg0, s32 *, 0x6C0) = 3;
        TObjFish__sub_802ED4AC((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x6C0)));
        M2C_FIELD(arg0, s32 *, 0x728) = 0;
        M2C_FIELD(arg0, s32 *, 0x724) = 0;
        return;
    case 2:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 0xF) {
            TObjFish__sub_802ED62C((void *) (arg0), (int) (0x18));
        }
    default:
        return;
    case 9:
        if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == 0xF) {
            ((s32 (*)(void *))TObjFish__sub_802EC7F0)((void *) (arg0));
            return;
        }
        break;
    case 0:
        advance_animation_playback((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x728) = (s32) (M2C_FIELD(arg0, s32 *, 0x728) + 1);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xC0);
        if ((temp_f1 >= lbl_805DEA50) && (temp_f1 <= lbl_805DEA54) && ((f32) M2C_FIELD(arg0, s32 *, 0x728) >= lbl_805DEA58)) {
            M2C_FIELD(arg0, s32 *, 0x728) = 0;
            VecCopy__FP3VecPC3Vec((int) (&v), (void *) ((u8 *)(arg0) + 0x38));
            v.x = lbl_805DEA5C * calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0)) + v.x;
            v.y = lbl_805DEA60;
            v.z = v.z + lbl_805DEA64;
            spawn_particle_201__8TObjFishFii((s32) (arg0), (s32) (&v));
        }
        if (objInBand__FP7GameObjf((void *) (arg0), lbl_805DEA50) != 0) {
            set_effect_target_position__8TObjFishFPvPvPv((void *) (arg0), (void *) (0x39905), (void *) ((u8 *)(arg0) + 0x50C));
        }
        break;
    }
}
extern int fold_flush_0;
#pragma pop

void TObjFish__sub_802EBE50(void* o, u32 k) {
    switch (k) {
    case 4:
        set_field_b8__14TObjEnePanarmsFPvs(o, 1);
        return;
    case 2:
        TObjFish__sub_802ED62C(o, 1);
        return;
    case 0:
        advance_animation_playback(o);
        return;
    case 1: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void spawn_via_trap__8TObjFishFiii(s32 arg0, s32 arg1, s32 arg2) {
    play_persistent_sound(arg1, arg0, arg2, 0, 0);
}

void set_effect_target_position__8TObjFishFPvPvPv(void* p, void* a1, void* a2) { play_sound_effect(a1, a2, (void*)0, (void*)0); }

void TObjFish__sub_802EC32C(void) {  }

void update_projectile_spawns__8TObjFishFPv(u8 *arg0) {
    u8 *temp_r31;

    project_sound_origin_from_camera((void *) (arg0 + 0x38), (void *) (arg0 + 0x50C), (f32) (lbl_805DEB68));
    project_sound_origin_from_camera((void *) (arg0 + 0x4C4), (void *) (arg0 + 0x518), (f32) (lbl_805DEB68));
    temp_r31 = arg0 + 0x524;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x518));
    vec3_add_to((int) (temp_r31), (void *) (arg0 + 0x518));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * lbl_805DEA14);
    if ((M2C_FIELD(arg0, s32 *, 0x628) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA58)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA30)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6BC) <= 0x10) {
        if (M2C_FIELD(arg0, s32 *, 0x628) & 0x400) {
            spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x39704)), (s32)((void *) (arg0 + 0x524)));
        } else {
            spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x3A303)), (s32)((void *) (arg0 + 0x524)));
        }
        M2C_FIELD(arg0, s32 *, 0x6BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6BC) + 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x628) & 0x200) {
        spawn_via_trap__8TObjFishFiii((s32)((void *) (arg0)), (s32)((int) (0x39F08)), (s32)((void *) (arg0 + 0x50C)));
    }
}

#pragma push
#pragma fp_contract on
void TObjFish__sub_802EC468(s32 arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_802EC468, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802EC468, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802EC468, sp10) == 0x8) ? 1 : -1];
    Stack_802EC468 stack;
    VecCopy__FP3VecPC3Vec((int)((void *) (&stack.sp8)), (void *)((void *) (arg0)));
    stack.sp8 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC) * farg1) - stack.sp8);
    stack.spC -= (M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10) * farg1) - farg0;
    stack.sp10 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14) * farg1) - stack.sp10);
    spawn_particle_effect_with_flags((void *) (&stack.sp8), (int) (0x127), (int) (0x40));
}
extern int fold_flush_1;
#pragma pop

void spawn_particle_201__8TObjFishFii(s32 arg1, s32 arg2) {
    spawn_default_particle__8TObjFishFv(arg2, 0x201);
}

void fn_802EC52C(M2C_UNK arg0, s32 arg1) {
    TObjFish__sub_802F18E8((void *) (arg1));
}

void TObjFish__sub_802EC7F0(u8 *arg0) {
    s32 var_r30;
    s32 var_r4;
    do {
        var_r30 = 0;
        M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) (M2C_FIELD(arg0, s32 *, 0x6B4) + 1);
        var_r4 = M2C_FIELD((M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_802EC7F0_lbl_804E3C2C *)&lbl_804E3C2C).value) + (lbl_805D5550 * 4)), s32 *, 0) + (M2C_FIELD(arg0, s32 *, 0x6B4) * 8)), s32 *, 0);
        switch (var_r4) {
        case 0x1E:
            if (calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0)) > lbl_805DEA10) {
                var_r4 = 8;
            } else {
                var_r4 = 6;
            }
            break;
        case 0x1F:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 5;
            } else {
                var_r4 = 9;
            }
            break;
        case 0x20:
            if (calc_elapsed_scaled__9TObjEneDDFv((void *) (arg0)) > lbl_805DEA10) {
                var_r4 = 0xC;
            } else {
                var_r4 = 0xE;
            }
            break;
        case 0x21:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 3;
            } else {
                var_r4 = 0xB;
            }
            break;
        case 0x23:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 4;
            } else {
                var_r4 = 0xA;
            }
            break;
        case 0x24:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0xF;
            } else {
                var_r4 = 0x10;
            }
            break;
        case 0x25:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x11;
            } else {
                var_r4 = 0x12;
            }
            break;
        case 0x26:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x13;
            } else {
                var_r4 = 0x14;
            }
            break;
        case 0x27:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x6C4) == 0) {
                var_r4 = 0x15;
            } else {
                var_r4 = 0x16;
            }
            break;
        case 0x45:
            var_r30 = 1;
            M2C_FIELD(arg0, s32 *, 0x6B4) = 1;
            break;
        }
    } while (var_r30 != 0);
    TObjFish__sub_802ED62C((void *) (arg0), (int) (var_r4));
}

void TBoss7DeRolLeC__sub_802EC994(void* p) { *(s32*)((char*)p + 0x6b0) = 0; *(s32*)((char*)p + 0x6b4) = 0; }

void fn_802EC9A4(void *arg0, void *arg1) {
    enemy_set_target_id(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void fn_802EC9F0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x6B4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6xAA_barba_ray_boss_actions(void *arg0) {
    void *x;
    read_state__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9A4((void *)(x), (void *)(arg0));
    }
}

void handle_6xA9_barba_ray_boss_actions(void *arg0) {
    void *x;
    byteswap_action_packet__11TBoss7JointFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        fn_802EC9F0((void *)(x), (void *)(arg0));
    }
}

void TObjPlayer__sub_802ECAA4(Ply_802ECAA4 *o) {
    if (o->state == 0x1C || o->state == 0x1D) {
    } else if (o->state == 0x13 || o->state == 0x14) {
        TObjFish__sub_802EC7F0((u8 *)o);
    } else if (o->state == 0x15 || o->state == 0x16) {
        TObjFish__sub_802ED62C(o, 0x1C);
    } else {
        TObjFish__sub_802ED62C(o, 0x1B);
    }
}

u8 TObjPlayer__sub_802ECB10(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x6FC) <= 0) && !(M2C_FIELD(arg0, s32 *, 0x628) & 4)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

void TObjFish__sub_802ECB38(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x88);
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3A312, arg0 + 0x38);
}

void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6FC) - (s32) (lbl_805DEA14 * (f32) arg1));
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3B213, arg0 + 0x38);
}

void TObjFish__sub_802ECBDC(Fish_802ECBDC *self) {
    s32 i;
    ((VObj_802ECBDC *)self)->v94();
    for (i = 0; i < 10; i++) {
        self->kids[i]->v94();
    }
}

void TObjFish__sub_802ECC44(Fish_802ECC44 *self) {
    s32 i;
    ((VObj_802ECC44 *)self)->v93();
    for (i = 0; i < 10; i++) {
        self->kids[i]->v93();
    }
}

void TObjFish__sub_802ECCAC(u8 *self) {
    s32 n;
    u8 *p;
    s32 idx;
    s32 i;
    n = get_game_mode__6TLobbyFv();
    if (n == 0) {
        enemy_clear_target(self);
        return;
    }
    if (n == 1) {
        p = get_player_data__10TObjPlayerFi(0);
        TBoss2DeRolLe__sub_800B98D8(self, p);
        return;
    }
    idx = (s32)get_random_float__21TObjEneMe3ShinowaRealFv((f32)n * calc_boss4_scale__10TObjPlayerFi(self));
    enemy_clear_target(self);
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(idx);
        if (is_alive__9TObjEneDDFPv() != 0) {
            TBoss2DeRolLe__sub_800B98D8(self, p);
            return;
        }
        idx++;
        if (idx >= n) {
            idx = 0;
        }
    }
}

}
