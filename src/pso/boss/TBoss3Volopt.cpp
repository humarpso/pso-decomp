#include "types.h"
#include "pso/system/byteswap.h"
#include "pso/system/vector.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TUnk_804848A0.h"
#include "pso/boss/TUnk_804848B8.h"
#include <stddef.h>
#include "pso/boss/TBoss3Volopt.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/TBoss3VoloptCtrl.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/boss/TBoss3VoloptMonitor.h"
#include "pso/boss/TBoss3VoloptP01.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TFogCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/object/TObjGyaranzoMissile.h"
#include "pso/object/TObjVoloptCage.h"
#include "pso/object/TObjVoloptPillar.h"
#include "pso/player/TObjPlayer.h"

struct Vec_8003D7BC { f32 x, y, z; };

struct Pkt_8003DD4C {
    u16 hdr;
    u16 id;
    s16 cmd;
    u16 arg;
    s16 arg2;
    u16 pad;
};

struct Volopt_8003DD4C {
    u8 pad0[0x1C];
    u16 id;
    u8 pad1E[0x338 - 0x1E];
    u16 f338;
    u8 pad33A[0x3F0 - 0x33A];
    s16 f3f0;
    s16 f3f2;
    u8 pad3F4[0x404 - 0x3F4];
    s32 f404;
};

extern "C" {
s32 get_main_phase();
int TBoss3Volopt__sub_8003CB48(void);
s32 is_photon_blast_active__11TCameraCtrlFv(void);
void TBoss3Volopt__sub_8003E584(void *);
typedef struct { u8 cmd; u8 size; u16 id; s16 a; s16 b; s16 c; s16 d; } Pk15_8003E584;
typedef struct { u8 cmd; u8 size; u16 id; u8 data[6]; s16 a; s16 b; u16 pad; } Pk84_8003E584;
typedef struct { u8 cmd; u8 size; u16 id; u8 data[6]; s16 a; } Pk16_8003E584;
typedef struct { s8 b; u8 pad[3]; } Ent_8003E584;
s32 TCameraCtrl__sub_8003D0A8(void *);
s32 TBoss3Volopt__sub_8003F458();
extern Ent_8003E584 volopt_target_slot_used[];
extern s32 volopt_breakup_flag;
extern s32 boss3_volopt_core_active_flag;
extern const f32 lbl_805D86A4;
extern const f32 lbl_805D86A8;

s32 set_flag_3__7TObjectFv(void *);
s32 TCameraCtrl__sub_8006A044(int, f32);
s32 spawn_particle_effect(void *, int);
s32 is_local_client_floor_leader();
void * find_entity_by_id(u16);
s32 play_persistent_sound(s32, void *, s32, s32, s32);
u32 __nw__7TObjectFUl(s32);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u16 volopt_target_entity_ids[];
extern u16 lbl_805D271C;
extern s32 TBoss3Volopt__fade_active_flag;
extern const f32 lbl_805D8658;
extern const f32 lbl_805D8664;
extern const f32 lbl_805D8670;
extern const f32 lbl_805D867C;
extern const f32 lbl_805D8680;
extern const f32 lbl_805D8684;
extern const f32 lbl_805D8688;
extern const f32 lbl_805D868C;
void TBoss3Volopt__sub_8003D7BC(u8 *arg0);
u16 find_nearest_visible_player(void *, int, f32);
int TBoss3Volopt__sub_8003F398(void);
s32 TBoss3Volopt__sub_8003F444(void *);
s32 TBoss3Volopt__sub_8003F430(void *);
s32 TBoss3Volopt__sub_8003F41C(void *);
s32 TBoss3Volopt__sub_8003F408(void *);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 fn_8003C8B4(void);
u16 fn_8003C804(void);
extern u16 lbl_805D2718;
extern const f32 lbl_805D8660;
extern const f32 lbl_805D8668;
extern const f32 lbl_805D8690;
extern const f32 lbl_805D8694;
extern const f32 lbl_805D8698;
extern const f32 lbl_805D869C;
extern const f32 lbl_805D86A0;
void select_and_send_attack__12TBoss3VoloptFPv(void *arg0_);
void fn_8003F468(void *, u16, s32);
void TBoss3VoloptHiraisin__ct(void *, void *, u16, s32);
void init_with_slot__19TBoss3VoloptMonitorFPvPviiii(void *, void *, u16, s32, s32, s32);
void TBoss3VoloptP01__ct(void *, void *, s32, u16, s32);
extern u16 boss3_volopt_monitor_base_actor_id;
extern const f32 lbl_805D866C;
extern const f32 lbl_805D8674;
void request_follow_camera_offsets(void *, void *, int, f32);
extern s32 volopt_camera_seq_handle_a;
extern s32 volopt_camera_seq_handle_b;
extern s32 lbl_805D4C38;
extern s32 boss3_volopt_cage_flag;
struct RecoveredGlobal_8003C7EC_lbl_80483578 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003C8B4_lbl_804FEEAC { s32 value; u8 remaining[0x10]; };

typedef char RecoveredGlobal_8003C7EC_lbl_80483578_size[sizeof(RecoveredGlobal_8003C7EC_lbl_80483578) == 0x18 ? 1 : -1];

struct Obj_8003CA2C { u8 pad[4]; s16 mode; };

struct V3_8003CC18 { f32 x, y, z; };

struct Msg_8003CC18 { u8 hdr[2]; s16 id; V3_8003CC18 pos; s32 arg; };

struct Base_A_8003d558_8003CFEC { char pad[0x18]; };

struct V_A_8003d558_8003CFEC : Base_A_8003d558_8003CFEC {
    virtual void f0();
    virtual void f20(); virtual void g20(); virtual void h20();
    virtual void f21(); virtual void g21(); virtual void h21();
    virtual void f22(); virtual void g22(); virtual void h22();
    virtual void f23(); virtual void g23(); virtual void h23();
    virtual void f24(); virtual void g24(); virtual void h24();
    virtual void f25(); virtual void g25(); virtual void h25();
    virtual void f26(); virtual void g26(); virtual void h26();
    virtual void f27(); virtual void g27(); virtual void h27();
    virtual void f28(); virtual void g28(); virtual void h28();
    virtual void f29(); virtual void g29(); virtual void h29();
    virtual void f30(); virtual void g30(); virtual void h30();
    virtual void f31(); virtual void g31(); virtual void h31();
    virtual void f32(); virtual void g32(); virtual void h32();
    virtual void f33(); virtual void g33(); virtual void h33();
    virtual void f34(); virtual void g34(); virtual void h34();
    virtual void f35(); virtual void g35(); virtual void h35();
    virtual void f36(); virtual void g36(); virtual void h36();
    virtual void f37(); virtual void g37(); virtual void h37();
    virtual void f38(); virtual void g38(); virtual void h38();
    virtual void f39(); virtual void g39(); virtual void h39();
    virtual void f40(); virtual void g40(); virtual void h40();
    virtual void f41(); virtual void g41(); virtual void h41();
    virtual void f42(); virtual void g42(); virtual void h42();
    virtual void f43(); virtual void g43();
    virtual void m72(s32);
};

struct Stack_8003D648 {
    s8 sp8;
    s8 sp9;
    s16 spA;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8003D648_lbl_8048377C { s32 value; u8 remaining[0x2C]; };

struct RecoveredGlobal_8003DC34_lbl_80436318 { char value[0xD]; };

typedef char RecoveredGlobal_8003DC34_lbl_80436318_size[sizeof(RecoveredGlobal_8003DC34_lbl_80436318) == 0xD ? 1 : -1];

struct RecoveredGlobal_8003DC34_lbl_804FEE68 { s32 value; u8 remaining[0x8]; };

typedef char RecoveredGlobal_8003DC34_lbl_804FEE68_size[sizeof(RecoveredGlobal_8003DC34_lbl_804FEE68) == 0xC ? 1 : -1];

struct VBase_18_c99286 { char pad[0x18]; };

struct VObj_18_c99286 : VBase_18_c99286 {
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
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual s32 m79(s32);
    virtual s32 m80();
};

struct RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt { s32 value; u8 remaining[0x148]; };

struct RecoveredGlobal_8003EFF0_lbl_804FEE68 { s32 value; u8 remaining[0x8]; };

struct S_8003EF38 { u8 pad0[0x18]; void *vt; };

struct Cam_8003DA78 { s8 a; s8 b; s16 c; f32 d; f32 e; };

void reset_status_effect_row(u8 *arg0);
int get_player_data__10TObjPlayerFi(int a0);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
s32 obj_setFlags30(void *, s32);
int read_be16_field2__10TObjPlayerFv(void* a0 = 0);
f32 fabs_float(f32);
f32 newton_sqrtf(f32);
void queue_destruction__7TObjectFv(void *arg0);
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
void TLobby__sub_8001FE7C(void*, int);
void * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void fn_8003C7EC(void);
s32 TObjPlayer__sub_8003C964();
void handle_6x85_vol_opt_phase2_boss_actions(Obj_8003CA2C *self);
bool is_volopt_death_active(void);
void handle_6x17_set_entity_position_and_angle(u8 *arg0);
void send_position_message__12TBoss3VoloptFPvPvi(void *obj, V3_8003CC18 *pos, s32 arg);
void handle_6x16_vol_opt_boss_actions(void *arg0);
void fn_8003CFEC(int a0);
int TCameraCtrl__sub_8003CFF4(void);
int TCameraCtrl__sub_8003D1E8(void * _w0);
s32 TCameraCtrl__sub_8003D2C4(void);
void reset_vol_opt_state(void* a0);
int TBoss3Volopt__sub_8003EA2C(void*);
S_8003EF38 * __dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag);
u8 * TBoss3Volopt__ct(u8 *arg0, s32 arg1);
void bswap_position__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F22C(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
s32 get_adjusted_angle__12TBoss3VoloptFl(void *, int);
u16 get_param_offset__12TBoss3VoloptFl(void *, int);
void clear_volopt_cage_flag(void);
s32 check_value_equals__13TQuestColCtrlFPll(void *, s32);
s32 is_photon_blast_active__11TCameraCtrlFPv();
s32 fn_8003F3F8();
void TBoss3VoloptCore__sub_80040788(void);
void cache_volopt_resource_ptrs(void);
s32 init_object__13TUnk_80483B88Fv();
s32 set_player_flag_08000000__12TBoss3VoloptFv();
s32 set_flag_08000000__12TBoss3VoloptFv();
void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
void destroy__20TBoss3VoloptHiraisinFv(void);
s32 TObjPlayer__sub_80042EC0(void *);
void TBoss3VoloptP01__sub_80042F84(u8 *arg0);
s32 set_player_view_flag__11TCameraCtrlFl();
s32 set_flag_08000000__11TCameraCtrlFl();
void set_motion__12TBoss3VoloptFs(void *, u16);
void set_action__12TBoss3VoloptFs(void *, u16);
s32 TBoss3Volopt__sub_800479D0();
void TBoss3Volopt__sub_80047A60(void);
void set_active_camera_pose(u8 *arg0, u8 *arg1);
s32 restore_player_cameras();
s32 activate_camera_mode(s32 arg0);
void reset_cameras_to_actor(void *actor, s32 arg1);
s32 set_scripted_camera_pose(int, int, void *);
u8 * get_scripted_camera_playback();
void * alloc__23TAdSinglePlyChrSelectGCFv(u32);
s32 sub_800C7860__15TObjEnemyCustomFv();
void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
s32 TObjEnemyCustom__ct(void *, int);
int reset_photon_effect__10TObjPlayerFv(void*);
void TObjPlayer__sub_801BA42C(void);
void TLobby__send_and_handle_60(u8 *arg0);
s32 get_story_flag(s32);
void play_area_music(char *name);
void __dl__7TObjectFPv(void *);
int update_if_active__12TBoss3VoloptFl(void*);

extern u16 TBoss3Volopt__cage_entity_id;
extern RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt __vt__12TBoss3Volopt;
extern RecoveredGlobal_8003DC34_lbl_80436318 lbl_80436318;
extern unsigned char lbl_80436328[];
extern RecoveredGlobal_8003C7EC_lbl_80483578 lbl_80483578;
extern u8 bm_boss3_volopt_resource_descriptor[];
extern u8 boss3_volopt_resource_desc[];
extern RecoveredGlobal_8003D648_lbl_8048377C boss3_volopt_intro_camera_poses;
extern RecoveredGlobal_8003C8B4_lbl_804FEEAC lbl_804FEEAC;
extern s32 lbl_805D2714;
extern u16 lbl_805D271A;
extern s32 lbl_805D2720;
extern s32 lbl_805D2ECC;
extern s32 TODoorVoShip__class_name;
extern u32 boss3_volopt_resources;
extern int vol_opt_active_hit_zone;
extern int lbl_805D4C1C;
extern int lbl_805D4C20;
extern int volopt_death_active;
extern int volopt_resources_loaded;
extern int lbl_805D4C40;
extern u32 volopt_active_player_id;
extern s32 lbl_805D4C48;
extern s32 lbl_805D4D14;
extern s32 volopt_shutter_model_a;
extern s32 volopt_shutter_model_b;
extern s32 volopt_shutter_global_param;
extern s32 local_client_id;
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D825C;
extern const f32 lbl_805D865C;
extern const f32 lbl_805D8678;
extern s32 tl_04;

u32 boss3_volopt_spawn_pos[3];
__declspec(section ".data") s32 boss3_volopt_player_target_ids[2];
f32 lbl_804FEE7C[3];
f32 lbl_804FEE88[3];
f32 lbl_804FEE94[3];
f32 lbl_804FEEA0[3];
#define boss3_volopt_spawn_pos (*(RecoveredGlobal_8003DC34_lbl_804FEE68 *)boss3_volopt_spawn_pos)

void fn_8003C7EC(void) {
    *(f32 *)((s8 *)(&lbl_80483578.value) + 4) = (f32) lbl_805D825C;
    *(f32 *)((s8 *)(&lbl_80483578.value) + 0x10) = (f32) lbl_805D825C;
}

u16 fn_8003C8B4(void) {
    u8 *temp_r3;
    if (TObjPlayer__sub_8003C964() == 0) {
        return 0xFFFFU;
    }
    temp_r3 = (u8 *)(*(s32 *)((s8 *)(&lbl_804FEEAC.value) + ((s32) ((f32) lbl_805D4C48 * (lbl_805D8658 * (f32) rand())) * 4)));
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0xFFFFU;
}

void handle_6x85_vol_opt_phase2_boss_actions(Obj_8003CA2C *self) {
    if (((s32 (*)(void))TBoss3Volopt__sub_8003F398)() != 0) {
        ((TBoss3Volopt *)self)->swap_6x85_fields();
        switch (self->mode) {
        case 0:
            ((TBoss3Volopt *)self)->copy_phase2_positions_to_global();
            break;
        }
    }
}

void handle_6x84_vol_opt_boss_actions(void *arg0) {
    ((TBoss3Volopt *)arg0)->bswap_actions();
    ((TLobby *)boss3_volopt_player_target_ids)->move_data((void *)((char *)arg0 + 4), 6);
    volopt_active_player_id = *(s16 *)((s8 *)arg0 + 0xC);
    TCameraCtrl::set_player_targets(*(s16 *)((s8 *)arg0 + 0xA));
}

void TBoss3Volopt::update_phase() {
    TBoss4DarkFalz::dispatch_by_main_phase(0x2A);
    if (get_main_phase() == 0xF) {
        TBoss3VoloptCtrl::dispatch_state(0);
        return;
    }
    if (TRaderMapCore::is_not_split_screen() == 1) {
        TBoss3VoloptCtrl::dispatch_state(5);
        return;
    }
    if (get_story_flag(0x2F) != 0) {
        TBoss3VoloptCtrl::dispatch_state(2);
        return;
    }
    TBoss3VoloptCtrl::dispatch_state(1);
}

int TBoss3Volopt__sub_8003CB48(void) { return update_if_active__12TBoss3VoloptFl((void*)(0)); }

void TBoss3Volopt::alloc_idle_event() { TBoss3Volopt::alloc_event((s16)((void*)160), (s32)((void*)0)); }

bool is_volopt_death_active(void) {
    return (*(s32 *)&volopt_death_active) != 0;
}

void handle_6x17_set_entity_position_and_angle(u8 *arg0) {
    u8 *temp_r3;

    ((s32 (*)(void))bswap_position__12TBoss3VoloptFPv)();
    temp_r3 = ((u8 * (*)(u16))find_entity_by_id)(*(u16 *)((s8 *)arg0 + 2));
    if (temp_r3 != NULL) {
        VecCopy((Vec *)(temp_r3 + 0x38), (const Vec *)(arg0 + 4));
        *(s32 *)((s8 *)temp_r3 + 0x60) = (s32) *(s32 *)((s8 *)arg0 + 0x10);
        ((TUnk_804AF8A0 *)temp_r3)->refresh_collision_body_centers();
        if ((s32) *(u16 *)((s8 *)arg0 + 2) == (s32) local_client_id) {
            reset_cameras_to_actor(temp_r3, 0);
        }
    }
}

void send_position_message__12TBoss3VoloptFPvPvi(void *obj, V3_8003CC18 *pos, s32 arg) {
    Msg_8003CC18 m;
    if (obj != 0) {
        TBoss3Volopt__sub_8003F22C(&m);
        m.id = ((s32 (*)(void *))obj_getField1c)(obj);
        VecCopy((Vec *)&m.pos, (const Vec *)pos);
        m.arg = arg;
        ((TBoss3Volopt *)(&m))->send_state();
    }
}

void handle_6x16_vol_opt_boss_actions(void *arg0) {
    ((TBoss3Volopt *)arg0)->swap_6x16_fields();
    ((TLobby *)boss3_volopt_player_target_ids)->move_data((void *)((char *)arg0 + 4), 6);
    TCameraCtrl::set_player_targets(*(s16 *)((s8 *)arg0 + 0xA));
    volopt_active_player_id = -1;
}

void handle_6x15_vol_opt_boss_actions(u8 *arg0) {
    u8 *p;
    s32 i;

    ((TBoss3Volopt *)arg0)->swap_6x15_fields();
    switch (*(s16 *)((s8 *)arg0 + 4)) {
    case 0:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D271C);
        if (p != NULL) {
            ((TObjPlayer *)p)->set_boss_target_pos(*(s16 *)((s8 *)arg0 + 8), *(s16 *)((s8 *)arg0 + 0xA), 0x258);
        }
        break;
    case 1:
        TObjPlayer::set_grabbed_state(0);
        break;
    case 2:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A);
        if (p != NULL) {
            start_attack__20TBoss3VoloptHiraisinFPv(p);
        }
        for (i = 0; i < 6; i++) {
            p = ((u8 * (*)(u16))find_entity_by_id)(volopt_target_entity_ids[i]);
            if (p != NULL) {
                TBoss3VoloptP01__sub_80042F84(p);
            }
        }
        break;
    case 3:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            ((TBoss3Volopt *)p)->set_action_wait(*(u16 *)((s8 *)arg0 + 6));
        }
        break;
    case 4:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            set_action__12TBoss3VoloptFs(p, *(u16 *)((s8 *)arg0 + 6));
        }
        break;
    case 5:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            ((TBoss3Volopt *)p)->check_and_trigger();
        }
        break;
    case 6:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            set_motion__12TBoss3VoloptFs(p, *(u16 *)((s8 *)arg0 + 6));
        }
        break;
    case 7:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            ((TBoss3Volopt *)p)->apply_hit_reaction(*(s16 *)((s8 *)arg0 + 8));
        }
        break;
    }
}

void TBoss3Volopt__sub_8003CE38(s32 arg0) {
    f32 base;
    s32 i;
    u8 *p;

    base = (f32)((arg0 != 0) ? -5000 : 0);
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (p == NULL) continue;
        if (*(u8 **)((s8 *)p + 0xA4) == NULL) continue;
        if (check_value_equals__13TQuestColCtrlFPll(p, lbl_805D2ECC) != 0) continue;
        if (check_value_equals__13TQuestColCtrlFPll(p, TODoorVoShip__class_name) != 0) continue;
        if (!(*(u32 *)((s8 *)(*(u8 **)((s8 *)p + 0xA4)) + 0x18) & 0x20000)) continue;
        if (fabs_float(*(f32 *)((s8 *)p + 0x40) - base) > lbl_805D865C) {
            V3_8003CC18 pos = *(V3_8003CC18 *)(p + 0x38);
            pos.z += (f32)((arg0 != 0) ? -5000 : 5000);
            if (arg0 == 1) {
                V3_8003CC18 d;
                d.x = pos.x;
                d.y = lbl_805D8660;
                d.z = pos.z - base;
                if (newton_sqrtf(d.x * d.x + d.z * d.z) < lbl_805D8664) {
                    ((TObjGyaranzoMissile *)(&d))->scale_velocity(lbl_805D8664);
                    pos.x = d.x;
                    pos.z = d.z + base;
                }
            }
            send_position_message__12TBoss3VoloptFPvPvi(p, &pos, *(s32 *)((s8 *)p + 0x60));
        }
    }
}

void fn_8003CFEC(int a0) { lbl_805D4C20 = a0; }

int TCameraCtrl__sub_8003CFF4(void) {  return lbl_805D4C20; }

void TCameraCtrl::set_player_targets(s32 n) {
  s32 i;
  void *p;
  if (n == 0)
  {
    return;
  }
  p = find_entity_by_id(((volatile unsigned short *)&volopt_target_entity_ids)[((s8 *)&boss3_volopt_player_target_ids)[0]]);
  if (p != 0)
  {
    ((TObjPlayer *)p)->set_target_id(1);
  }
  for (i = 1; i < n; i++)
  {
    p = find_entity_by_id(((volatile unsigned short *)&volopt_target_entity_ids)[((s8 *)&boss3_volopt_player_target_ids)[i]]);
    if (p != 0)
    {
      ((TObjPlayer *)p)->set_target_id(0);
    }
  }
}

#pragma push
#pragma opt_lifetimes off
s32 TCameraCtrl__sub_8003D0A8(void *arg0) {
    s32 count;
    s32 i;
    s32 a;
    s32 b;
    s32 t;
#define EE74 ((s8 *)boss3_volopt_player_target_ids)

    count = 0;
    for (i = 0; i < 6; i++) {
        if (find_entity_by_id(volopt_target_entity_ids[i]) != NULL && is_photon_blast_active__11TCameraCtrlFPv() == 0) {
            EE74[count] = i;
            count++;
        }
    }
    if (count <= 1) {
        return count;
    }
    for (i = 0; i < count * 5; i++) {
        a = (s32)((f32)count * calc_boss4_scale__10TObjPlayerFi(arg0));
        b = (s32)((f32)count * calc_boss4_scale__10TObjPlayerFi(arg0));
        if (a != b) {
            t = EE74[a];
            EE74[a] = EE74[b];
            EE74[b] = t;
        }
    }
    return count;
#undef EE74
}
#pragma pop

int TCameraCtrl__sub_8003D1E8(void * _w0) {  return volopt_death_active; }

s32 is_photon_blast_active__11TCameraCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    void *temp_r3;
    temp_r3 = find_entity_by_id(lbl_805D271C);
    if ((temp_r3 != NULL) && (*(s32 *)((s8 *)temp_r3 + 0x30) & 0x800)) {
        return 1;
    }
    for (var_r29 = 0; var_r29 < 6; var_r29 += 1) {
        if ((find_entity_by_id(volopt_target_entity_ids[var_r29]) != NULL) && (is_photon_blast_active__11TCameraCtrlFPv() == 0)) {
            return 0;
        }
    }
    return 1;
}

s32 TCameraCtrl::is_photon_ready() {
    if ((((u32)find_entity_by_id(lbl_805D2718)) != 0U) && (fn_8003F3F8() != 0)) {
        return 1;
    }
    return 0;
}

s32 TCameraCtrl__sub_8003D2C4(void) {
    s32 i;
    void *p;
    for (i = 0; i < 6; i++) {
        p = find_entity_by_id(volopt_target_entity_ids[i]);
        if (p != 0 && is_photon_blast_active__11TCameraCtrlFPv() == 0 && TObjPlayer__sub_80042EC0(p) == 0) {
            return 0;
        }
    }
    return 1;
}

#pragma push
#pragma opt_lifetimes off
#pragma fp_contract on
#define GPO ((u16 (*)(void *, s32))get_param_offset__12TBoss3VoloptFl)
#define GAA ((s32 (*)(void *, s32))get_adjusted_angle__12TBoss3VoloptFl)
void TBoss3Volopt::sub_8003D340() {
    s32 r;
    void *o;
    s32 i;
    s32 j;

    switch (*(s32 *)&this->state) {
    case 0:
        for (i = 0; i < 6; i++) {
            volopt_target_entity_ids[i] = GPO(((u8 *)this), i + 1);
            o = (void *)__nw__7TObjectFUl(0x418);
            if (o != NULL) {
                TBoss3VoloptP01__ct(o, ((u8 *)this), i, volopt_target_entity_ids[i], GAA(((u8 *)this), i + 1));
            }
        }
        boss3_volopt_monitor_base_actor_id = GPO(((u8 *)this), 7);
        for (j = 0; j < 0x18; j++) {
            r = (s32)(lbl_805D8670 * (lbl_805D8674 * (lbl_805D8658 * (f32)rand())) + lbl_805D866C);
            o = (void *)__nw__7TObjectFUl(0x394);
            if (o != NULL) {
                init_with_slot__19TBoss3VoloptMonitorFPvPviiii(o, ((u8 *)this), boss3_volopt_monitor_base_actor_id + j, GAA(((u8 *)this), j + 7), j, r);
            }
        }
        lbl_805D271C = GPO(((u8 *)this), 0x22);
        fn_8003F468(((u8 *)this), lbl_805D271C, GAA(((u8 *)this), 0x22));
        lbl_805D271A = GPO(((u8 *)this), 0x21);
        if (TBoss3Volopt__sub_8003F398() == 0) {
            o = (void *)__nw__7TObjectFUl(0x390);
            if (o != NULL) {
                TBoss3VoloptHiraisin__ct(o, ((u8 *)this), lbl_805D271A, GAA(((u8 *)this), 0x21));
            }
        }
        *(s32 *)&this->next_action = 1;
        break;
    }
}
#undef GPO
#undef GAA
#pragma pop

void TCameraCtrl::update_volopt_seq() {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)this + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)this + 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (is_local_client_floor_leader() != 0) {
                select_and_send_attack__12TBoss3VoloptFPv((void *)(this));
            }
        } else {
            select_and_send_attack__12TBoss3VoloptFPv((void *)(this));
        }
        if (((s32)TCameraCtrl__sub_8003D1E8((void *)(this))) != 0) {
            TBoss3Volopt::update_phase();
            obj_setFlags30(this, 0x800);
            ((V_A_8003d558_8003CFEC *)this)->m72(0);
            *(s32 *)((s8 *)this + 0x374) = 5;
            if (__nw__7TObjectFUl(0x1C) != 0U) {
                init_object__13TUnk_80483B88Fv();
            }
        }
        play_persistent_sound(0x4003C601, this, 0, 0, 0);
        break;
    case -1:
        break;
    case 2:
        break;
    }
}

void TCameraCtrl::run_intro_camera_sequence() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_8003D648, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8003D648, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8003D648, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8003D648, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8003D648, sp10) == 0x8) ? 1 : -1];
    Stack_8003D648 stack;
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        ((TBoss3Volopt *)arg0)->start_phase2();
        activate_camera_mode((9));
        set_active_camera_pose((u8 *)(&boss3_volopt_intro_camera_poses.value), ((u8 *)&boss3_volopt_intro_camera_poses.value + 0xC));
        TObjPlayer::freeze_all_players();
        TWindowCtrl::init_all_slots();
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_flag_08000000__11TCameraCtrlFl();
        }
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
        return;
    case 1:
        if ((s32) lbl_805D4D14 == 1) {
            *(s32 *)((s8 *)arg0 + 0x384) = 0x96;
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        }
        return;
    case 2:
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x384) - 1;
        *(s32 *)((s8 *)arg0 + 0x384) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            restore_player_cameras();
            *(s32 *)((s8 *)arg0 + 0x37C) = 3;
            return;
        }
        break;
    case 3:
        stack.sp9 = 0;
        stack.sp8 = 2;
        stack.spA = 0;
        stack.spC = lbl_805D8660;
        stack.sp10 = lbl_805D8678;
        activate_camera_mode((5));
        ((TCameraCtrl *)(&stack.sp8))->cache_target_and_forward((int) (0x160A));
        temp_r3 = (u8 *)(arg0 + 0x38);
        set_scripted_camera_pose((int) (temp_r3), (int) (temp_r3), (void *) (arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x37C) = 4;
        return;
    case 4:
        if (*(u16 *)((s8 *)(get_scripted_camera_playback()) + 2) & 1) {
            restore_player_cameras();
            *(s32 *)((s8 *)arg0 + 0x374) = 4;
            return;
        }
        break;
    case -1:
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_player_view_flag__11TCameraCtrlFl();
        }
        TWindowCtrl::init_all_slots2();
        TObjPlayer__sub_801BA42C();
        break;
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_8003D7BC(u8 *arg0) {
    Vec_8003D7BC v;
    s32 i;
    f32 r;
    s32 ang;
    u8 *p;
    u32 o;
    play_persistent_sound(0x4003C600, arg0, 0, 0, 0);
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (is_local_client_floor_leader() != 0) {
                TBoss3Volopt__sub_8003E584(arg0);
            }
        } else {
            TBoss3Volopt__sub_8003E584(arg0);
        }
        if (((s32 (*)(void *))is_photon_blast_active__11TCameraCtrlFv)(arg0) != 0) {
            *(s32 *)((s8 *)arg0 + 0x37C) = 2;
        }
        break;
    case 2:
        *(s32 *)((s8 *)arg0 + 0x384) = 0x96;
        TCameraCtrl__sub_8006A044(0xB4, lbl_805D867C);
        for (i = 0; i < 6; i++) {
            p = (u8 *)find_entity_by_id(volopt_target_entity_ids[i]);
            if (p != NULL) {
                set_flag_3__7TObjectFv(p);
            }
        }
        p = (u8 *)find_entity_by_id(lbl_805D271C);
        if (p != NULL) {
            *(s32 *)((s8 *)p + 0x30) |= 0x800;
        }
        *(s32 *)((s8 *)arg0 + 0x37C) = 3;
        TBoss3Volopt::alloc_idle_event();
    case 3:
        if (--*(s32 *)((s8 *)arg0 + 0x384) <= 0) {
            *(s32 *)((s8 *)arg0 + 0x37C) = 4;
        }
        ang = (s32)(lbl_805D8680 * (lbl_805D8684 * (lbl_805D8658 * (f32)rand())));
        r = lbl_805D8670 * (lbl_805D8658 * (f32)rand()) + lbl_805D8688;
        v.x = r * cos_table_lookup(ang);
        v.y = lbl_805D8664 * (lbl_805D8658 * (f32)rand()) + lbl_805D868C;
        v.z = r * sin_table_lookup(ang);
        spawn_particle_effect(&v, 0xFB);
        play_persistent_sound(0x4003AD21, arg0, 0, 0, 0);
        break;
    case 4:
        o = __nw__7TObjectFUl(0x28);
        if (o != 0U) {
            ((TUnk_804848B8 *)o)->init_fade(arg0, 0);
        }
        TBoss3Volopt__sub_8003CB48();
        *(s32 *)((s8 *)arg0 + 0x37C) = 5;
        break;
    case 5:
        if (TBoss3Volopt__fade_active_flag == 1) {
            *(s32 *)((s8 *)arg0 + 0x374) = 3;
        }
        break;
    case -1:
        o = __nw__7TObjectFUl(0x28);
        if (o != 0U) {
            ((TUnk_804848A0 *)o)->init_fade_color(arg0, 0);
        }
        break;
    }
}
#pragma pop

void TBoss3Volopt::update_intro_cutscene() {
    u8 *arg0 = (u8 *)this;
    Cam_8003DA78 c1;
    Cam_8003DA78 c2;
    switch (*(s32 *)&this->state) {
    case 0:
        reset_vol_opt_state((void*)(arg0));
        TObjPlayer::freeze_all_players();
        TWindowCtrl::init_all_slots();
        if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A) != NULL) {
            set_flag_08000000__12TBoss3VoloptFv();
        }
        *(s32 *)&this->m_384 = 0xD2;
        TFogCtrl::apply_all(0xA, 0);
        c1.b = 0;
        c1.a = 1;
        c1.c = 0;
        c1.d = lbl_805D8660;
        c1.e = lbl_805D8660;
        activate_camera_mode(5);
        ((TCameraCtrl *)(&c1))->cache_target_and_forward(0x271C);
        *(s32 *)&this->state = 1;
    case 1:
        ((s32 (*)(int, void *, int, int, int))play_persistent_sound)(0x4003B202, arg0, 0, 0, 0);
        if (--*(s32 *)&this->m_384 <= 0) {
            *(s32 *)&this->m_384 = 0x3C;
            *(s32 *)&this->state = 2;
            TFogCtrl::update_all(0);
            c2.b = 0;
            c2.a = 1;
            c2.c = 0;
            c2.d = lbl_805D8660;
            c2.e = lbl_805D8678;
            activate_camera_mode(5);
            ((TCameraCtrl *)(&c2))->cache_target_and_forward(0x271C);
        }
        break;
    case 2:
        if (*(u16 *)((s8 *)(get_scripted_camera_playback()) + 2) & 1) {
            if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271C) != NULL) {
                sub_800C7860__15TObjEnemyCustomFv();
            }
            *(s32 *)&this->m_384 = 0x5A;
            *(s32 *)&this->state = 3;
        }
        break;
    case 3:
        if (--*(s32 *)&this->m_384 <= 0) {
            *(s32 *)&this->next_action = 2;
        }
        break;
    case -1:
        if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A) != NULL) {
            set_player_flag_08000000__12TBoss3VoloptFv();
        }
        TWindowCtrl::init_all_slots2();
        restore_player_cameras();
        TObjPlayer__sub_801BA42C();
        break;
    }
}

void TBoss3Volopt::start_phase2() {
    u8 *arg0 = (u8 *)this;
    this->m_3a8 = 1;
    if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718) != NULL) {
        sub_800C7860__15TObjEnemyCustomFv();
    }
    TBoss3Volopt__sub_8003EA2C((void*)((int) (1)));
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)((const Vec *)&boss3_volopt_spawn_pos.value))));
    this->m_3f0 = 0;
    *(s16 *)((s8 *)arg0 + 0x3F2) = 0;
    clear_volopt_cage_flag();
    play_area_music((char *)((void *) (&lbl_80436318.value)));
    this->m_404 = 0;
}

void reset_vol_opt_state(void* a0) {
    *(int*)((char*)a0 + 0x3a8) = 0;
    vol_opt_active_hit_zone = -1;
    TBoss3Volopt__sub_8003EA2C((void*)0);
    *(int*)((char*)a0 + 0x3a4) = 4;
    *(short*)((char*)a0 + 0x3f0) = 0;
    *(short*)((char*)a0 + 0x3f2) = 0;
    *(short*)((char*)a0 + 0x3f4) = 0;
    *(short*)((char*)a0 + 0x3f8) = 0;
    *(short*)((char*)a0 + 0x3fa) = 0;
    lbl_805D4C1C = 0;
    *(int*)((char*)a0 + 0x400) = 1;
    *(short*)((char*)a0 + 0x3fc) = 2;
    volopt_death_active = 0;
    play_area_music((char *)lbl_80436328);
    volopt_resources_loaded = 1;
}

#pragma push
#pragma fp_contract on
void select_and_send_attack__12TBoss3VoloptFPv(void *arg0_) {
    void *e;
    s32 n;
    Volopt_8003DD4C *o = (Volopt_8003DD4C *)arg0_;
    if (TCameraCtrl::is_photon_ready() == 0) {
        return;
    }
    if (find_nearest_visible_player(o, 0, lbl_805D8668) == 0xFFFF) {
        return;
    }
    if (o->f3f2 > 0) {
        o->f3f2--;
        return;
    }
    e = find_entity_by_id(lbl_805D2718);
    if (e == NULL) {
        return;
    }
    if (TBoss3Volopt__sub_8003F398() != 0) {
        s32 kind[5];
        f32 thresh[5];
        f32 total = lbl_805D8660;
        u16 sel;
        n = 0;
        if (TBoss3Volopt__sub_8003F444(e) != 0) {
            total += lbl_805D8690;
            thresh[0] = lbl_805D8690;
            kind[n++] = 0;
        }
        if (TBoss3Volopt__sub_8003F430(e) != 0) {
            thresh[n] = lbl_805D8694 + total;
            total += lbl_805D8694;
            kind[n++] = 1;
            thresh[n] = 0.2f + total;
            total += 0.2f;
            kind[n++] = 4;
        }
        if (TBoss3Volopt__sub_8003F41C(e) != 0) {
            thresh[n] = lbl_805D869C + total;
            total += lbl_805D869C;
            kind[n++] = 2;
        }
        if (TBoss3Volopt__sub_8003F408(e) != 0) {
            thresh[n] = lbl_805D8698 + total;
            total += lbl_805D8698;
            kind[n++] = 3;
        }
        if (n == 0) {
            return;
        }
        {
            f32 s = total * calc_boss4_scale__10TObjPlayerFi(o);
            s32 i;
            o->f3f0 = -1;
            for (i = 0; i < n; i++) {
                if (thresh[i] >= s) {
                    o->f3f0 = kind[i];
                    break;
                }
            }
        }
        o->f404++;
        if (o->f404 >= 3) {
            o->f404 = 0;
            sel = fn_8003C8B4();
        } else {
            sel = fn_8003C804();
        }
        o->f338 = sel;
        switch (o->f3f0) {
        case 0:
            if (TBoss3Volopt__sub_8003F444(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 3;
                p.arg = sel;
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0++;
            return;
        case 1:
            if (TBoss3Volopt__sub_8003F430(e) != 0 && o->f338 != 0xFFFF) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 4;
                if (TBoss3Volopt__sub_8003F398() != 0) {
                    TBoss3Volopt::send_random_params();
                }
                p.arg = sel;
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0++;
            return;
        case 2:
            if (TBoss3Volopt__sub_8003F41C(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 5;
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0++;
            return;
        case 3:
            if (TBoss3Volopt__sub_8003F408(e) != 0 && sel != 0xFFFF) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 6;
                p.arg = sel;
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0 = 0;
            return;
        case 4:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 7;
                p.arg2 = lbl_805D86A0 * calc_boss4_scale__10TObjPlayerFi(o);
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            return;
        }
    } else {
        switch (o->f3f0) {
        case 0:
            if (TBoss3Volopt__sub_8003F444(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 3;
                p.arg = ((TBoss3Volopt *)e)->find_facing_player();
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0++;
            return;
        case 1:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                u16 t = find_nearest_visible_player(o, 0, lbl_805D8668);
                if (t != 0xFFFF) {
                    Pkt_8003DD4C p;
                    ((TBoss3Volopt *)(&p))->set_type();
                    p.id = o->id;
                    p.cmd = 4;
                    if (TBoss3Volopt__sub_8003F398() != 0) {
                        TBoss3Volopt::send_random_params();
                    }
                    p.arg = t;
                    ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                    o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
                }
            }
            o->f3f0++;
            return;
        case 2:
            if (TBoss3Volopt__sub_8003F41C(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 5;
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            o->f3f0++;
            return;
        case 3:
            if (TBoss3Volopt__sub_8003F408(e) != 0) {
                u16 t = find_nearest_visible_player(o, 0, lbl_805D8668);
                if (t != 0xFFFF) {
                    Pkt_8003DD4C p;
                    ((TBoss3Volopt *)(&p))->set_type();
                    p.id = o->id;
                    p.cmd = 6;
                    p.arg = t;
                    ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                    o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
                }
            }
            o->f3f0 = 0;
            return;
        case 4:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                Pkt_8003DD4C p;
                ((TBoss3Volopt *)(&p))->set_type();
                p.id = o->id;
                p.cmd = 7;
                p.arg2 = lbl_805D86A0 * calc_boss4_scale__10TObjPlayerFi(o);
                ((TBoss3Volopt *)(&p))->finalize_and_send_60();
                o->f3f2 = 30.0f * (f32)((TBoss3Volopt *)e)->count_dead_parts() + 30.0f;
            }
            return;
        }
    }
}
#pragma pop

void TBoss3Volopt::render() {  }

void TBoss3Volopt::update_camera_seq() {
    u8 *arg0 = (u8 *)this;
    u8 *p;
    switch (*(s16 *)(arg0 + 0x326)) {
    case 0:
        ((TBoss3Volopt *)arg0)->sub_8003D340();
        break;
    case 1:
        update_intro_cutscene();
        play_persistent_sound(0x4003C600, arg0, 0, 0, 0);
        break;
    case 2:
        TBoss3Volopt__sub_8003D7BC(arg0);
        p = (*(u8 * *)&volopt_camera_seq_handle_a);
        if (*(s32 *)(p + 0x18) != 0) {
            lbl_804FEE7C[0] = lbl_805D8660;
            lbl_804FEE7C[1] = *(f32 *)(p + 0xC);
            lbl_804FEE7C[2] = *(f32 *)(p + 8);
            lbl_804FEE88[0] = lbl_805D8660;
            lbl_804FEE88[1] = *(f32 *)(p + 4);
            lbl_804FEE88[2] = *(f32 *)(p + 0);
            request_follow_camera_offsets(lbl_804FEE7C, lbl_804FEE88, 0xFFFF, lbl_805D8660);
        }
        break;
    case 3:
        ((TCameraCtrl *)arg0)->run_intro_camera_sequence();
        play_persistent_sound(0x4003C601, arg0, 0, 0, 0);
        break;
    case 4:
        ((TCameraCtrl *)arg0)->update_volopt_seq();
        if (boss3_volopt_cage_flag != 0) {
            p = (*(u8 * *)&lbl_805D4C38);
        } else {
            p = (*(u8 * *)&volopt_camera_seq_handle_b);
        }
        if (*(s32 *)(p + 0x18) != 0) {
            lbl_804FEE94[0] = lbl_805D8660;
            lbl_804FEE94[1] = *(f32 *)(p + 0xC);
            lbl_804FEE94[2] = *(f32 *)(p + 8);
            lbl_804FEEA0[0] = lbl_805D8660;
            lbl_804FEEA0[1] = *(f32 *)(p + 4);
            lbl_804FEEA0[2] = *(f32 *)(p + 0);
            request_follow_camera_offsets(lbl_804FEE94, lbl_804FEEA0, 0xFFFF, lbl_805D8660);
        }
        break;
    case 5:
        break;
    }
}

void TBoss3Volopt::run_task() {
    u8 *arg0 = (u8 *)this;
    if (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0) {
        queue_destruction__7TObjectFv((arg0));
        return;
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (((TObjPlayer *)arg0)->add_status_effect_timer((int) (4), (int) (-1)) <= 0) {
            reset_status_effect_row(((u8 *)&this->unk_284));
            ((TUnk_804B9870 *)arg0)->obj_clearFlags30((int) (0x4000));
        }
    } else {
        if ((s32) *(s32 *)&this->next_action != (s16) this->mode) {
            if ((s32) *(s32 *)&this->state != -1) {
                *(s32 *)&this->state = -1;
                update_camera_seq();
            }
            this->mode = (s16) *(s32 *)&this->next_action;
            *(s32 *)&this->state = 0;
        }
        update_camera_seq();
    }
}

void *TBoss3Volopt::create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x408);
    if (o != NULL) {
        o = TBoss3Volopt__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void TBoss3Volopt::free_parts() {
    TObjVoloptCage::destroy();
    if ((u32) boss3_volopt_resources != 0U) {
        TLobby__sub_8001FE7C((void*)boss3_volopt_resources, 1);
        boss3_volopt_resources = 0U;
    }
    TBoss3VoloptP01::destroy();
    TBoss3VoloptCore__sub_80040788();
    TBoss3Volopt__sub_800479D0();
    destroy__20TBoss3VoloptHiraisinFv();
    TBoss3VoloptMonitor::release();
}

#define F(t, o) (*(t *)((s8 *)(arg0) + (o)))

void TBoss3Volopt__sub_8003E584(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    Pk15_8003E584 a1;
    Pk15_8003E584 b1;
    Pk84_8003E584 c1;
    Pk15_8003E584 a2;
    Pk15_8003E584 b2;
    Pk16_8003E584 c2;
    s32 i;
    s32 found;
    s32 n;
    s32 lim;
    s32 lim2;
    s32 v;

    if (TCameraCtrl__sub_8003D2C4() != 0 && find_nearest_visible_player(arg0, 0, lbl_805D8668) != 0xFFFF) {
    if (F(s16, 0x3F2) > 0) {
        F(s16, 0x3F2)--;
    } else if (TBoss3Volopt__sub_8003F398() != 0) {
        switch (F(s16, 0x3F0)) {
        case 0:
            found = 0;
            for (i = 0; i < 6; i++) {
                if (volopt_target_slot_used[i].b == 0) {
                    found = 1;
                }
            }
            if (found != 0) {
                if (find_entity_by_id(lbl_805D271C) != NULL && TBoss3Volopt__sub_8003F458() != 0) {
                    n = (s32)(lbl_805D86A4 * calc_boss4_scale__10TObjPlayerFi(arg0)) + 2;
                    ((TBoss3Volopt *)(&a1))->set_type();
                    a1.id = F(u16, 0x1C);
                    a1.a = 0;
                    a1.c = F(s32, 0x3A4);
                    a1.d = n;
                    ((TBoss3Volopt *)(&a1))->finalize_and_send_60();
                    F(s32, 0x3A4) -= n;
                    if (F(s32, 0x3A4) < 0) {
                        F(s32, 0x3A4) += 6;
                    }
                    F(s16, 0x3F2) = 0x1E;
                    F(s16, 0x3F0) = 1;
                }
            } else {
                F(s16, 0x3F0) = 2;
            }
            break;
        case 1:
            if (boss3_volopt_core_active_flag != 0) {
                F(s16, 0x3F0) = 2;
            }
            break;
        case 2:
            F(s16, 0x3F8) = 0;
            volopt_breakup_flag = 0;
            F(s16, 0x3F0) = 3;
            break;
        case 3:
            if (volopt_breakup_flag == 1 || F(s16, 0x3F8) >= 2) {
                volopt_breakup_flag = 1;
                ((TBoss3Volopt *)(&b1))->set_type();
                b1.id = F(u16, 0x1C);
                b1.a = 1;
                ((TBoss3Volopt *)(&b1))->finalize_and_send_60();
                F(s16, 0x3F0) = 0;
                F(s16, 0x3F2) = 0x1E;
            } else {
                F(s16, 0x3F8)++;
                lim = TCameraCtrl__sub_8003D0A8(arg0);
                TBoss3Volopt__sub_8003F384(&c1);
                c1.id = F(u16, 0x1C);
                c1.a = F(s16, 0x3FC) < lim ? F(s16, 0x3FC) : lim;
                c1.b = lbl_805D86A8 * calc_boss4_scale__10TObjPlayerFi(arg0);
                ((TLobby *)(c1.data))->move_data(boss3_volopt_player_target_ids, 6);
                ((TBoss3Volopt *)(&c1))->send_update_60();
                if (F(s16, 0x3FC) < 5) {
                    F(s16, 0x3FC)++;
                }
                F(s16, 0x3F2) = 0x1E;
            }
            break;
        }
    } else {
        switch (F(s16, 0x3F0)) {
        case 0:
            found = 0;
            for (i = 0; i < 6; i++) {
                if (volopt_target_slot_used[i].b == 0) {
                    found = 1;
                }
            }
            if (found != 0) {
                if (find_entity_by_id(lbl_805D271C) != NULL && TBoss3Volopt__sub_8003F458() != 0) {
                    n = (s32)(lbl_805D86A4 * calc_boss4_scale__10TObjPlayerFi(arg0)) + 2;
                    ((TBoss3Volopt *)(&a2))->set_type();
                    a2.id = F(u16, 0x1C);
                    a2.a = 0;
                    a2.c = F(s32, 0x3A4);
                    a2.d = n;
                    ((TBoss3Volopt *)(&a2))->finalize_and_send_60();
                    F(s32, 0x3A4) -= n;
                    if (F(s32, 0x3A4) < 0) {
                        F(s32, 0x3A4) += 6;
                    }
                    F(s16, 0x3F2) = 0x1E;
                    F(s16, 0x3F0) = 1;
                }
            } else {
                F(s16, 0x3F0) = 2;
            }
            break;
        case 1:
            if (boss3_volopt_core_active_flag != 0) {
                F(s16, 0x3F0) = 2;
            }
            break;
        case 2:
            F(s16, 0x3F8) = 0;
            volopt_breakup_flag = 0;
            F(s16, 0x3F0) = 3;
            break;
        case 3:
            if (volopt_breakup_flag == 1 || F(s16, 0x3F8) >= 2) {
                volopt_breakup_flag = 1;
                ((TBoss3Volopt *)(&b2))->set_type();
                b2.id = F(u16, 0x1C);
                b2.a = 1;
                ((TBoss3Volopt *)(&b2))->finalize_and_send_60();
                F(s16, 0x3F0) = 0;
                F(s16, 0x3F2) = 0x1E;
            } else {
                F(s16, 0x3F8)++;
                lim2 = TCameraCtrl__sub_8003D0A8(arg0);
                TBoss3Volopt__sub_8003F33C(&c2);
                c2.id = F(u16, 0x1C);
                c2.a = F(s16, 0x3FC) < lim2 ? F(s16, 0x3FC) : lim2;
                ((TLobby *)(c2.data))->move_data(boss3_volopt_player_target_ids, 6);
                ((TBoss3Volopt *)(&c2))->send_6x16();
                if (F(s16, 0x3FC) < 5) {
                    F(s16, 0x3FC)++;
                }
                F(s16, 0x3F2) = 0x1E;
            }
            break;
        }
    }
}
}
#undef F

void TBoss3Volopt::load_resources() {
    s32 v2;
    void *p;
    v2 = TObjEneDD::check_v2_mode();
    if (v2 != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, boss3_volopt_resource_desc, 0, 0, 0);
        }
        boss3_volopt_resources = (u32)p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, bm_boss3_volopt_resource_descriptor, 0, 0, 0);
        }
        boss3_volopt_resources = (u32)p;
    }
    lbl_805D4C40 = v2;
    TBoss3VoloptP01::init_breakup_effect();
    cache_volopt_resource_ptrs();
    TBoss3Volopt__sub_80047A60();
    TBoss3VoloptHiraisin::init_models();
    TBoss3VoloptMonitor::load_resources();
    volopt_shutter_model_b = *(s32 *)(*(u8 **)(*(u8 **)(boss3_volopt_resources + 0x42C) + 0xD8) + 4);
    volopt_shutter_model_a = *(s32 *)(*(u8 **)(*(u8 **)(*(u8 **)(boss3_volopt_resources + 0x42C) + 0xD8) + 0x2C) + 4);
    volopt_shutter_global_param = *(s32 *)(*(u8 **)(boss3_volopt_resources + 0x42C) + 0xDC);
    TObjVoloptPillar::cache_target_values();
    TObjVoloptCage::init_break_model();
    lbl_805D2718 = 0xFFFF;
    volopt_resources_loaded = 0;
    volopt_camera_seq_handle_a = dispatch_shared_handler_a__6TLobbyFl(0x27);
    volopt_camera_seq_handle_b = dispatch_shared_handler_a__6TLobbyFl(0x28);
    lbl_805D4C38 = dispatch_shared_handler_a__6TLobbyFl(0x29);
}

S_8003EF38 *__dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = ((u8 *)&__vt__12TBoss3Volopt);
        if (((s32 (*)(void))is_volopt_death_active)() != 0) {
            ((TObjEnemy *)o)->send_entity_set_flags();
        }
        (*(s32 *)&vol_opt_active_hit_zone) = 0xFFFF;
        TBoss3Volopt__cage_entity_id = 0xFFFF;
        lbl_805D2714 = 0xFFFF;
        lbl_805D2718 = 0xFFFF;
        lbl_805D271A = 0xFFFF;
        for (i = 0; i < 6; i++) {
            volopt_target_entity_ids[i] = 0xFFFF;
        }
        lbl_805D271C = 0xFFFF;
        __dt__15TObjEnemyCustomFv(o, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(o);
        }
    }
    return o;
}

u8 *TBoss3Volopt__ct(u8 *arg0, s32 arg1) {
    TObjEnemyCustom__ct((void *) (arg0), (int) (tl_04));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__12TBoss3Volopt.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2720;
    ((VObj_18_c99286 *)(arg0))->m79(arg1);
    ((TBoss3Volopt *)arg0)->reset_photon_effect();
    TBoss3Volopt__sub_8003EA2C((void*)((int) (0)));
    VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)(&(*(RecoveredGlobal_8003EFF0_lbl_804FEE68 *)&boss3_volopt_spawn_pos).value))));
    *(s32 *)&((TBoss3Volopt *)arg0)->actorFlags = (s32) (*(s32 *)&((TBoss3Volopt *)arg0)->actorFlags| 0x06040000);
    TBoss3Volopt__cage_entity_id = get_param_offset__12TBoss3VoloptFl((void *) (arg0), (int) (0x20));
    lbl_805D2714 = get_adjusted_angle__12TBoss3VoloptFl((void *) (arg0), (int) (0x20));
    *(s32 *)&((TBoss3Volopt *)arg0)->next_action = 0;
    ((TBoss3Volopt *)arg0)->mode = 0;
    *(s32 *)&((TBoss3Volopt *)arg0)->m_3bc = 0;
    TBoss4DarkFalz::dispatch_by_main_phase((int) (0x29U));
    (*(s32 *)&lbl_805D4C20) = 0;
    (*(s32 *)&volopt_active_player_id) = -1;
    ((TBoss3Volopt *)(arg0))->clear_lobby_object_state();
    return arg0;
}

int TBoss3Volopt::reset_photon_effect() { return reset_photon_effect__10TObjPlayerFv(this); }

s32 TBoss3Volopt::get_field_3e0() { return this->m_3e0; }

void TBoss3Volopt::swap_6x85_fields() { read_be16_field2__10TObjPlayerFv(this); bswap_16((u16 *)((char*)this + 0x4)); { int i; for (i = 0; i < 7; i++) { bswap_16((u16 *)((char*)this + 0x6 + i * 2)); } } }

void TBoss3Volopt::bswap_actions() { read_be16_field2__10TObjPlayerFv(this); bswap_16((u16 *)((char*)this + 0xc)); bswap_16((u16 *)((char*)this + 0xa)); bswap_16((u16 *)((char*)this + 0xe)); }

void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFv(p); bswap_32((u32 *)((char*)p + 0x10)); bswap_32((u32 *)((char*)p + 0x4)); bswap_32((u32 *)((char*)p + 0x8)); bswap_32((u32 *)((char*)p + 0xc)); }

void TBoss3Volopt::send_state() { bswap_position__12TBoss3VoloptFPv((void*)(this)); TLobby__send_and_handle_60((u8 *)this); }

void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }

void TBoss3Volopt::swap_6x16_fields() { read_be16_field2__10TObjPlayerFv(this); bswap_16((u16 *)((char*)this + 0xa)); }

void TBoss3Volopt::swap_6x15_fields() { read_be16_field2__10TObjPlayerFv(this); bswap_16((u16 *)((char*)this + 0x4)); bswap_16((u16 *)((char*)this + 0x6)); bswap_16((u16 *)((char*)this + 0x8)); bswap_16((u16 *)((char*)this + 0xa)); }

void TBoss3Volopt::finalize_and_send_60() { swap_6x15_fields(); TLobby__send_and_handle_60((u8 *)this); }

void TBoss3Volopt::set_type() { *(u8 *)&this->m_name = 21; *(u8*)((char*)this + 0x1) = 3; }

void TBoss3Volopt::send_6x16() { swap_6x16_fields(); TLobby__send_and_handle_60((u8 *)this); }

void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }

void TBoss3Volopt::send_update_60() { bswap_actions(); TLobby__send_and_handle_60((u8 *)this); }

void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
