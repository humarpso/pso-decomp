#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
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
void alloc_idle_event__12TBoss3VoloptFv(void);
s32 is_photon_blast_active__11TCameraCtrlFv(void);
M2C_UNK TBoss3Volopt__sub_8003E584(void *);
M2C_UNK set_flag_3__7TObjectFv(void *);
M2C_UNK init_fade_color__12TBoss3VoloptFPvPvPv(void *, void *, void *);
M2C_UNK init_fade__12TBoss3VoloptFPvPvPv(void *, void *, void *);
M2C_UNK TCameraCtrl__sub_8006A044(int, f32);
M2C_UNK spawn_particle_effect(void *, int);
s32 TLobby__sub_800C6C10();
void * find_entity_by_id(u16);
M2C_UNK play_persistent_sound(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern u16 lbl_80483770[];
extern u16 lbl_805D271C;
extern s32 lbl_805D4D10;
extern const f32 lbl_805D8658;
extern const f32 lbl_805D8664;
extern const f32 lbl_805D8670;
extern const f32 lbl_805D867C;
extern const f32 lbl_805D8680;
extern const f32 lbl_805D8684;
extern const f32 lbl_805D8688;
extern const f32 lbl_805D868C;
void TBoss3Volopt__sub_8003D7BC(u8 *arg0);
void * find_entity_by_id(u16);
s32 is_photon_ready__11TCameraCtrlFv(void);
u16 find_nearest_visible_player(void *, int, f32);
int TBoss3Volopt__sub_8003F398(void);
s32 TBoss3Volopt__sub_8003F444(void *);
s32 TBoss3Volopt__sub_8003F430(void *);
s32 TBoss3Volopt__sub_8003F41C(void *);
s32 TBoss3Volopt__sub_8003F408(void *);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
u16 fn_8003C8B4(void);
u16 fn_8003C804(void);
void TBoss3Volopt__sub_80044CE4(void);
s32 count_dead_parts__12TBoss3VoloptFPv(void *);
s16 TBoss3Volopt__sub_80045390(void *);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void set_type__12TBoss3VoloptFPv(void* p);
extern u16 lbl_805D2718;
extern const f32 lbl_805D8660;
extern const f32 lbl_805D8668;
extern const f32 lbl_805D8690;
extern const f32 lbl_805D8694;
extern const f32 lbl_805D8698;
extern const f32 lbl_805D869C;
extern const f32 lbl_805D86A0;
void TBoss3Volopt__sub_8003DD4C(void *arg0_);
}

extern "C" {

struct RecoveredGlobal_8003C7EC_lbl_80483578 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003C8B4_lbl_804FEEAC { M2C_UNK value; u8 remaining[0x10]; };

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

struct RecoveredGlobal_8003D648_lbl_8048377C { M2C_UNK value; u8 remaining[0x2C]; };

struct RecoveredGlobal_8003DC34_lbl_80436318 { char value[0xD]; };

typedef char RecoveredGlobal_8003DC34_lbl_80436318_size[sizeof(RecoveredGlobal_8003DC34_lbl_80436318) == 0xD ? 1 : -1];

struct RecoveredGlobal_8003DC34_lbl_804FEE68 { M2C_UNK value; u8 remaining[0x8]; };

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
    virtual M2C_UNK m79(s32);
    virtual M2C_UNK m80();
};

struct RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt { M2C_UNK value; u8 remaining[0x148]; };

struct RecoveredGlobal_8003EFF0_lbl_804FEE68 { M2C_UNK value; u8 remaining[0x8]; };

struct S_8003EF38 { u8 pad0[0x18]; void *vt; };

struct Cam_8003DA78 { s8 a; s8 b; s16 c; f32 d; f32 e; };

s32 get_main_phase();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset_status_effect_row(void *);
s32 add_status_effect_timer__10TObjPlayerFPvii(void *, int, int);
u8 * get_player_data__10TObjPlayerFi(s32);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
f32 get_random_float__8TObjFishFv(f32);
f32 newton_sqrtf(f32);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
void TLobby__sub_8001FE7C(void*, int);
void * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void fn_8003C7EC(void);
u16 fn_8003C8B4(void);
s32 TObjPlayer__sub_8003C964();
void handle_6x85_vol_opt_phase2_boss_actions(Obj_8003CA2C *self);
void update_phase__12TBoss3VoloptFv(void);
int TBoss3Volopt__sub_8003CB48(void);
void alloc_idle_event__12TBoss3VoloptFv(void);
bool TBoss3Volopt__sub_8003CB94(void);
void handle_6x17_set_entity_position_and_angle(u8 *arg0);
void TBoss3Volopt__sub_8003CC18(void *obj, V3_8003CC18 *pos, s32 arg);
void handle_6x16_vol_opt_boss_actions(void *arg0);
void fn_8003CFEC(int a0);
int TCameraCtrl__sub_8003CFF4(void);
void TCameraCtrl__sub_8003CFFC(s32 n);
int TCameraCtrl__sub_8003D1E8(void * _w0);
s32 is_photon_blast_active__11TCameraCtrlFv(void);
s32 is_photon_ready__11TCameraCtrlFv(void);
s32 TCameraCtrl__sub_8003D2C4(void);
void update_volopt_seq__11TCameraCtrlFPv(void *arg0);
void TCameraCtrl__sub_8003D648(u8 *arg0);
void TBoss3Volopt__sub_8003DA78(u8 *arg0);
void TBoss3Volopt__sub_8003DC34(u8 *arg0);
void reset_vol_opt_state(void* a0);
int TBoss3Volopt__sub_8003EA2C(void*);
void render__12TBoss3VoloptFv(void);
M2C_UNK TBoss3Volopt__sub_8003EB34(void *);
void run_task__12TBoss3VoloptFv(u8 *arg0);
void * create__12TBoss3VoloptFPv(void *arg0);
void free_parts__12TBoss3VoloptFv(void);
void TBoss3Volopt__sub_8003EE10(void);
S_8003EF38 * __dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag);
u8 * TBoss3Volopt__ct(u8 *arg0, s32 arg1);
int reset_photon_effect__12TBoss3VoloptFPv(void* p);
s32 get_field_3e0__12TBoss3VoloptFPv(void* p);
void swap_6x85_fields__12TBoss3VoloptFPv(void* p);
void bswap_actions__12TBoss3VoloptFPv(void* p);
void bswap_position__12TBoss3VoloptFPv(void* p);
void send_state__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F22C(void* p);
void swap_6x16_fields__12TBoss3VoloptFPv(void* p);
void swap_6x15_fields__12TBoss3VoloptFPv(void* p);
void finalize_and_send_60__12TBoss3VoloptFPv(void* p);
void set_type__12TBoss3VoloptFPv(void* p);
void send_6x16__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F33C(void* p);
void send_update_60__12TBoss3VoloptFPv(void* p);
void TBoss3Volopt__sub_8003F384(void* p);
int TBoss3Volopt__sub_8003F398(void);
s32 get_adjusted_angle__11TCameraCtrlFPvi(void *, int);
u16 get_param_offset__11TCameraCtrlFPvi(void *, int);
M2C_UNK fn_8003F3BC();
s32 check_value_equals__13TQuestColCtrlFPvi(void *, s32);
s32 is_photon_blast_active__11TCameraCtrlFPv();
s32 fn_8003F3F8();
void set_grabbed_state__10TObjPlayerFi(s32);
void set_boss_target_pos__10TObjPlayerFPviii(void *, s32, s32, s32);
M2C_UNK TBoss3VoloptCore__sub_80040788();
void cache_volopt_resource_ptrs(void);
M2C_UNK init_object__16TBoss3VoloptCtrlFPv();
s32 dispatch_state__16TBoss3VoloptCtrlFi(s32);
M2C_UNK set_player_flag_08000000__12TBoss3VoloptFPv();
M2C_UNK set_flag_08000000__12TBoss3VoloptFPv();
void start_attack__20TBoss3VoloptHiraisinFPv(void *);
M2C_UNK destroy__20TBoss3VoloptHiraisinFv();
void init_models__20TBoss3VoloptHiraisinFv(void);
M2C_UNK release__19TBoss3VoloptMonitorFv();
void TBoss3VoloptMonitor__sub_80042408(void);
void set_target_id__10TObjPlayerFPvi(void *, s32);
s32 TObjPlayer__sub_80042EC0(void *);
void TBoss3VoloptP01__sub_80042F84(void *);
M2C_UNK destroy__15TBoss3VoloptP01Fv();
void init_breakup_effect__15TBoss3VoloptP01Fv(void);
s32 set_player_view_flag__11TCameraCtrlFi();
s32 set_flag_08000000__11TCameraCtrlFi();
void apply_hit_reaction__12TBoss3VoloptFPvf(void *, f32);
void TBoss3Volopt__sub_80044CB8(void *);
void set_action_wait__12TBoss3VoloptFPvUs(void *, u16);
void set_motion__12TBoss3VoloptFPvs(void *, u16);
void check_and_trigger__12TBoss3VoloptFPv(void *);
void set_action__12TBoss3VoloptFPvs(void *, u16);
M2C_UNK TBoss3Volopt__sub_800479D0();
void TBoss3Volopt__sub_80047A60(void);
M2C_UNK destroy__14TObjVoloptCageFv();
void init_break_model__14TObjVoloptCageFv(void);
void cache_target_values__16TObjVoloptPillarFv(void);
s32 set_active_camera_pose(void *, void *);
s32 restore_player_cameras();
s32 activate_camera_mode(int);
M2C_UNK reset_cameras_to_actor(void *, M2C_UNK);
s32 set_scripted_camera_pose(int, int, void *);
s32 cache_target_and_forward__11TCameraCtrlFii(void *, int);
u8 * get_scripted_camera_playback();
void * alloc__23TAdSinglePlyChrSelectGCFPv(u32);
s32 check_v2_mode__9TObjEneDDFv();
s32 TLobby__sub_800C6C10();
M2C_UNK TObjEnemyCustom__sub_800C7860();
void __dt__15TObjEnemyCustomFv(void *, s32);
s32 TObjEnemyCustom__ct(void *, int);
M2C_UNK apply_all__8TFogCtrlFii(int, int);
M2C_UNK update_all__8TFogCtrlFi(int);
void scale_velocity__19TObjGyaranzoMissileFPvf(void *, f32);
int reset_photon_effect__10TObjPlayerFPv(void*);
void * find_entity_by_id(u16);
M2C_UNK refresh_collision_body_centers(void *);
s32 TObjPlayer__sub_801BA42C();
s32 TObjPlayer__sub_801BA494();
int bswap_16__FPUs(void* a0 = 0);
int bswap_32__FPUl(void*);
int TLobby__send_and_handle_60(void*);
s32 get_story_flag(s32);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
void send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK play_persistent_sound(M2C_UNK, void *, M2C_UNK, M2C_UNK, M2C_UNK);
int play_area_music(void*);
void __dl__7TObjectFPv(void *);
u32 __nw__7TObjectFUl(M2C_UNK);
int update_if_active__12TBoss3VoloptFv(void*);
int alloc_event__12TBoss3VoloptFsi(void*, void*);
s32 init_all_slots__11TWindowCtrlFv();
s32 init_all_slots2__11TWindowCtrlFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 rand(void);
void move_data__6TLobbyFv(void *, void *, int);

extern u16 TBoss3Volopt__data_805D2710;
extern RecoveredGlobal_8003EFF0___vt__12TBoss3Volopt __vt__12TBoss3Volopt;
extern RecoveredGlobal_8003DC34_lbl_80436318 lbl_80436318;
extern unsigned char lbl_80436328[];
extern RecoveredGlobal_8003C7EC_lbl_80483578 lbl_80483578;
extern u8 lbl_804836A0[];
extern u8 lbl_80483760[];
extern u16 lbl_80483770[];
extern RecoveredGlobal_8003D648_lbl_8048377C lbl_8048377C;
extern RecoveredGlobal_8003DC34_lbl_804FEE68 lbl_804FEE68;
extern M2C_UNK lbl_804FEE74[];
extern RecoveredGlobal_8003C8B4_lbl_804FEEAC lbl_804FEEAC;
extern s32 lbl_805D2714;
extern u16 lbl_805D2718;
extern u16 lbl_805D271A;
extern u16 lbl_805D271C;
extern s32 lbl_805D2720;
extern s32 lbl_805D2ECC;
extern s32 lbl_805D2F88;
extern u32 lbl_805D4C10;
extern int lbl_805D4C14;
extern int lbl_805D4C1C;
extern int lbl_805D4C20;
extern int lbl_805D4C24;
extern int lbl_805D4C2C;
extern s32 lbl_805D4C30;
extern s32 lbl_805D4C34;
extern s32 lbl_805D4C38;
extern int lbl_805D4C40;
extern u32 lbl_805D4C44;
extern s32 lbl_805D4C48;
extern s32 lbl_805D4D14;
extern s32 lbl_805D4D48;
extern s32 lbl_805D4D4C;
extern s32 lbl_805D4D50;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D825C;
extern const f32 lbl_805D8658;
extern const f32 lbl_805D865C;
extern const f32 lbl_805D8660;
extern const f32 lbl_805D8664;
extern const f32 lbl_805D8678;
extern s32 tl_04;

void fn_8003C7EC(void) {
    M2C_FIELD(&lbl_80483578.value, f32 *, 4) = (f32) lbl_805D825C;
    M2C_FIELD(&lbl_80483578.value, f32 *, 0x10) = (f32) lbl_805D825C;
}

u16 fn_8003C8B4(void) {
    u8 *temp_r3;
    if (TObjPlayer__sub_8003C964() == 0) {
        return 0xFFFFU;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&lbl_804FEEAC.value, M2C_UNK *, ((s32) ((f32) lbl_805D4C48 * (lbl_805D8658 * (f32) rand())) * 4)));
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0xFFFFU;
}

void handle_6x85_vol_opt_phase2_boss_actions(Obj_8003CA2C *self) {
    if (((s32 (*)(void))TBoss3Volopt__sub_8003F398)() != 0) {
        swap_6x85_fields__12TBoss3VoloptFPv(self);
        switch (self->mode) {
        case 0:
            TBoss3Volopt__sub_80044CB8(self);
            break;
        }
    }
}

void handle_6x84_vol_opt_boss_actions(void *arg0) {
    bswap_actions__12TBoss3VoloptFPv(arg0);
    move_data__6TLobbyFv(lbl_804FEE74, (void *)((char *)arg0 + 4), 6);
    lbl_805D4C44 = M2C_FIELD(arg0, s16 *, 0xC);
    ((void (*)(int))TCameraCtrl__sub_8003CFFC)(M2C_FIELD(arg0, s16 *, 0xA));
}

void update_phase__12TBoss3VoloptFv(void) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x2A);
    if (get_main_phase() == 0xF) {
        dispatch_state__16TBoss3VoloptCtrlFi(0);
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        dispatch_state__16TBoss3VoloptCtrlFi(5);
        return;
    }
    if (get_story_flag(0x2F) != 0) {
        dispatch_state__16TBoss3VoloptCtrlFi(2);
        return;
    }
    dispatch_state__16TBoss3VoloptCtrlFi(1);
}

int TBoss3Volopt__sub_8003CB48(void) { return update_if_active__12TBoss3VoloptFv((void*)(0)); }

void alloc_idle_event__12TBoss3VoloptFv(void) { alloc_event__12TBoss3VoloptFsi((void*)160, (void*)0); }

bool TBoss3Volopt__sub_8003CB94(void) {
    return (*(s32 *)&lbl_805D4C24) != 0;
}

void handle_6x17_set_entity_position_and_angle(u8 *arg0) {
    u8 *temp_r3;

    ((M2C_UNK (*)(void))bswap_position__12TBoss3VoloptFPv)();
    temp_r3 = ((u8 * (*)(u16))find_entity_by_id)(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec(temp_r3 + 0x38, arg0 + 4);
        M2C_FIELD(temp_r3, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
        refresh_collision_body_centers(temp_r3);
        if ((s32) M2C_FIELD(arg0, u16 *, 2) == (s32) lbl_805D53A0) {
            reset_cameras_to_actor(temp_r3, 0);
        }
    }
}

void TBoss3Volopt__sub_8003CC18(void *obj, V3_8003CC18 *pos, s32 arg) {
    Msg_8003CC18 m;
    if (obj != 0) {
        TBoss3Volopt__sub_8003F22C(&m);
        m.id = ((s32 (*)(void *))obj_getField1c)(obj);
        VecCopy__FP3VecPC3Vec(&m.pos, pos);
        m.arg = arg;
        send_state__12TBoss3VoloptFPv(&m);
    }
}

void handle_6x16_vol_opt_boss_actions(void *arg0) {
    swap_6x16_fields__12TBoss3VoloptFPv(arg0);
    move_data__6TLobbyFv(lbl_804FEE74, (void *)((char *)arg0 + 4), 6);
    ((void (*)(int))TCameraCtrl__sub_8003CFFC)(M2C_FIELD(arg0, s16 *, 0xA));
    lbl_805D4C44 = -1;
}

void handle_6x15_vol_opt_boss_actions(u8 *arg0) {
    u8 *p;
    s32 i;

    swap_6x15_fields__12TBoss3VoloptFPv(arg0);
    switch (M2C_FIELD(arg0, s16 *, 4)) {
    case 0:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D271C);
        if (p != NULL) {
            set_boss_target_pos__10TObjPlayerFPviii(p, M2C_FIELD(arg0, s16 *, 8), M2C_FIELD(arg0, s16 *, 0xA), 0x258);
        }
        break;
    case 1:
        set_grabbed_state__10TObjPlayerFi(0);
        break;
    case 2:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A);
        if (p != NULL) {
            start_attack__20TBoss3VoloptHiraisinFPv(p);
        }
        for (i = 0; i < 6; i++) {
            p = ((u8 * (*)(u16))find_entity_by_id)(lbl_80483770[i]);
            if (p != NULL) {
                TBoss3VoloptP01__sub_80042F84(p);
            }
        }
        break;
    case 3:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            set_action_wait__12TBoss3VoloptFPvUs(p, M2C_FIELD(arg0, u16 *, 6));
        }
        break;
    case 4:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            set_action__12TBoss3VoloptFPvs(p, M2C_FIELD(arg0, u16 *, 6));
        }
        break;
    case 5:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            check_and_trigger__12TBoss3VoloptFPv(p);
        }
        break;
    case 6:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            set_motion__12TBoss3VoloptFPvs(p, M2C_FIELD(arg0, u16 *, 6));
        }
        break;
    case 7:
        p = ((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718);
        if (p != NULL) {
            apply_hit_reaction__12TBoss3VoloptFPvf(p, M2C_FIELD(arg0, s16 *, 8));
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
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) continue;
        if (M2C_FIELD(p, u8 **, 0xA4) == NULL) continue;
        if (check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D2ECC) != 0) continue;
        if (check_value_equals__13TQuestColCtrlFPvi(p, lbl_805D2F88) != 0) continue;
        if (!(M2C_FIELD(M2C_FIELD(p, u8 **, 0xA4), u32 *, 0x18) & 0x20000)) continue;
        if (get_random_float__8TObjFishFv(M2C_FIELD(p, f32 *, 0x40) - base) > lbl_805D865C) {
            V3_8003CC18 pos = *(V3_8003CC18 *)(p + 0x38);
            pos.z += (f32)((arg0 != 0) ? -5000 : 5000);
            if (arg0 == 1) {
                V3_8003CC18 d;
                d.x = pos.x;
                d.y = lbl_805D8660;
                d.z = pos.z - base;
                if (newton_sqrtf(d.x * d.x + d.z * d.z) < lbl_805D8664) {
                    scale_velocity__19TObjGyaranzoMissileFPvf(&d, lbl_805D8664);
                    pos.x = d.x;
                    pos.z = d.z + base;
                }
            }
            TBoss3Volopt__sub_8003CC18(p, &pos, M2C_FIELD(p, s32 *, 0x60));
        }
    }
}

void fn_8003CFEC(int a0) { lbl_805D4C20 = a0; }

int TCameraCtrl__sub_8003CFF4(void) {  return lbl_805D4C20; }

void TCameraCtrl__sub_8003CFFC(s32 n) {
  s32 i;
  void *p;
  if (n == 0)
  {
    return;
  }
  p = find_entity_by_id(((volatile unsigned short *)&lbl_80483770)[((s8 *)&lbl_804FEE74)[0]]);
  if (p != 0)
  {
    set_target_id__10TObjPlayerFPvi(p, 1);
  }
  for (i = 1; i < n; i++)
  {
    p = find_entity_by_id(((volatile unsigned short *)&lbl_80483770)[((s8 *)&lbl_804FEE74)[i]]);
    if (p != 0)
    {
      set_target_id__10TObjPlayerFPvi(p, 0);
    }
  }
}

int TCameraCtrl__sub_8003D1E8(void * _w0) {  return lbl_805D4C24; }

s32 is_photon_blast_active__11TCameraCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    void *temp_r3;
    temp_r3 = find_entity_by_id(lbl_805D271C);
    if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
        return 1;
    }
    for (var_r29 = 0; var_r29 < 6; var_r29 += 1) {
        if ((find_entity_by_id(lbl_80483770[var_r29]) != NULL) && (is_photon_blast_active__11TCameraCtrlFPv() == 0)) {
            return 0;
        }
    }
    return 1;
}

s32 is_photon_ready__11TCameraCtrlFv(void) {
    if ((((u32)find_entity_by_id(lbl_805D2718)) != 0U) && (fn_8003F3F8() != 0)) {
        return 1;
    }
    return 0;
}

s32 TCameraCtrl__sub_8003D2C4(void) {
    s32 i;
    void *p;
    for (i = 0; i < 6; i++) {
        p = find_entity_by_id(lbl_80483770[i]);
        if (p != 0 && is_photon_blast_active__11TCameraCtrlFPv() == 0 && TObjPlayer__sub_80042EC0(p) == 0) {
            return 0;
        }
    }
    return 1;
}

void update_volopt_seq__11TCameraCtrlFPv(void *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (TLobby__sub_800C6C10() != 0) {
                TBoss3Volopt__sub_8003DD4C((void *)(arg0));
            }
        } else {
            TBoss3Volopt__sub_8003DD4C((void *)(arg0));
        }
        if (((s32)TCameraCtrl__sub_8003D1E8((void *)(arg0))) != 0) {
            ((M2C_UNK (*)(void))update_phase__12TBoss3VoloptFv)();
            obj_setFlags30(arg0, 0x800);
            ((V_A_8003d558_8003CFEC *)arg0)->m72(0);
            M2C_FIELD(arg0, s32 *, 0x374) = 5;
            if (__nw__7TObjectFUl(0x1C) != 0U) {
                init_object__16TBoss3VoloptCtrlFPv();
            }
        }
        play_persistent_sound(0x4003C601, arg0, 0, 0, 0);
        break;
    case -1:
        break;
    case 2:
        break;
    }
}

void TCameraCtrl__sub_8003D648(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8003D648, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8003D648, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8003D648, spA) == 0x2) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8003D648, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8003D648, sp10) == 0x8) ? 1 : -1];
    Stack_8003D648 stack;
    s32 temp_r0;
    s32 temp_r0_2;
    u8 *temp_r3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        ((s32 (*)(void *))TBoss3Volopt__sub_8003DC34)((void *) (arg0));
        activate_camera_mode((int) (9));
        set_active_camera_pose((void *) (&lbl_8048377C.value), (void *) ((u8 *)&lbl_8048377C.value + 0xC));
        TObjPlayer__sub_801BA494();
        init_all_slots__11TWindowCtrlFv();
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_flag_08000000__11TCameraCtrlFi();
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        return;
    case 1:
        if ((s32) lbl_805D4D14 == 1) {
            M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        return;
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x384) - 1;
        M2C_FIELD(arg0, s32 *, 0x384) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            restore_player_cameras();
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
            return;
        }
        break;
    case 3:
        stack.sp9 = 0;
        stack.sp8 = 2;
        stack.spA = 0;
        stack.spC = lbl_805D8660;
        stack.sp10 = lbl_805D8678;
        activate_camera_mode((int) (5));
        cache_target_and_forward__11TCameraCtrlFii((void *) (&stack.sp8), (int) (0x160A));
        temp_r3 = (u8 *)(arg0 + 0x38);
        set_scripted_camera_pose((int) (temp_r3), (int) (temp_r3), (void *) (arg0 + 0x5C));
        M2C_FIELD(arg0, s32 *, 0x37C) = 4;
        return;
    case 4:
        if (M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) {
            restore_player_cameras();
            M2C_FIELD(arg0, s32 *, 0x374) = 4;
            return;
        }
        break;
    case -1:
        if (((u32)find_entity_by_id((u16)((void *) (lbl_805D2718)))) != 0U) {
            set_player_view_flag__11TCameraCtrlFi();
        }
        init_all_slots2__11TWindowCtrlFv();
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
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        if (get_main_phase() == 0xF) {
            if (TLobby__sub_800C6C10() != 0) {
                TBoss3Volopt__sub_8003E584(arg0);
            }
        } else {
            TBoss3Volopt__sub_8003E584(arg0);
        }
        if (((s32 (*)(void *))is_photon_blast_active__11TCameraCtrlFv)(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x384) = 0x96;
        TCameraCtrl__sub_8006A044(0xB4, lbl_805D867C);
        for (i = 0; i < 6; i++) {
            p = (u8 *)find_entity_by_id(lbl_80483770[i]);
            if (p != NULL) {
                set_flag_3__7TObjectFv(p);
            }
        }
        p = (u8 *)find_entity_by_id(lbl_805D271C);
        if (p != NULL) {
            M2C_FIELD(p, s32 *, 0x30) |= 0x800;
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        alloc_idle_event__12TBoss3VoloptFv();
    case 3:
        if (--M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x37C) = 4;
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
            init_fade__12TBoss3VoloptFPvPvPv((void *)o, arg0, 0);
        }
        TBoss3Volopt__sub_8003CB48();
        M2C_FIELD(arg0, s32 *, 0x37C) = 5;
        break;
    case 5:
        if (lbl_805D4D10 == 1) {
            M2C_FIELD(arg0, s32 *, 0x374) = 3;
        }
        break;
    case -1:
        o = __nw__7TObjectFUl(0x28);
        if (o != 0U) {
            init_fade_color__12TBoss3VoloptFPvPvPv((void *)o, arg0, 0);
        }
        break;
    }
}
#pragma pop

void TBoss3Volopt__sub_8003DA78(u8 *arg0) {
    Cam_8003DA78 c1;
    Cam_8003DA78 c2;
    switch (M2C_FIELD(arg0, s32 *, 0x37C)) {
    case 0:
        reset_vol_opt_state((void*)(arg0));
        TObjPlayer__sub_801BA494();
        init_all_slots__11TWindowCtrlFv();
        if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A) != NULL) {
            set_flag_08000000__12TBoss3VoloptFPv();
        }
        M2C_FIELD(arg0, s32 *, 0x384) = 0xD2;
        apply_all__8TFogCtrlFii(0xA, 0);
        c1.b = 0;
        c1.a = 1;
        c1.c = 0;
        c1.d = lbl_805D8660;
        c1.e = lbl_805D8660;
        activate_camera_mode(5);
        cache_target_and_forward__11TCameraCtrlFii(&c1, 0x271C);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        ((M2C_UNK (*)(int, void *, int, int, int))play_persistent_sound)(0x4003B202, arg0, 0, 0, 0);
        if (--M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x384) = 0x3C;
            M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            update_all__8TFogCtrlFi(0);
            c2.b = 0;
            c2.a = 1;
            c2.c = 0;
            c2.d = lbl_805D8660;
            c2.e = lbl_805D8678;
            activate_camera_mode(5);
            cache_target_and_forward__11TCameraCtrlFii(&c2, 0x271C);
        }
        break;
    case 2:
        if (M2C_FIELD(get_scripted_camera_playback(), u16 *, 2) & 1) {
            if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271C) != NULL) {
                TObjEnemyCustom__sub_800C7860();
            }
            M2C_FIELD(arg0, s32 *, 0x384) = 0x5A;
            M2C_FIELD(arg0, s32 *, 0x37C) = 3;
        }
        break;
    case 3:
        if (--M2C_FIELD(arg0, s32 *, 0x384) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x374) = 2;
        }
        break;
    case -1:
        if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D271A) != NULL) {
            set_player_flag_08000000__12TBoss3VoloptFPv();
        }
        init_all_slots2__11TWindowCtrlFv();
        restore_player_cameras();
        TObjPlayer__sub_801BA42C();
        break;
    }
}

void TBoss3Volopt__sub_8003DC34(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3A8) = 1;
    if (((u8 * (*)(u16))find_entity_by_id)(lbl_805D2718) != NULL) {
        TObjEnemyCustom__sub_800C7860();
    }
    TBoss3Volopt__sub_8003EA2C((void*)((int) (1)));
    ((M2C_UNK * (*)(void *, M2C_UNK *))VecCopy__FP3VecPC3Vec)(arg0 + 0x38, ((M2C_UNK * (*)(void *, M2C_UNK *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, &lbl_804FEE68.value));
    M2C_FIELD(arg0, s16 *, 0x3F0) = 0;
    M2C_FIELD(arg0, s16 *, 0x3F2) = 0;
    fn_8003F3BC();
    play_area_music((void*)((void *) (&lbl_80436318.value)));
    M2C_FIELD(arg0, s32 *, 0x404) = 0;
}

void reset_vol_opt_state(void* a0) {
    *(int*)((char*)a0 + 0x3a8) = 0;
    lbl_805D4C14 = -1;
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
    lbl_805D4C24 = 0;
    play_area_music(lbl_80436328);
    lbl_805D4C2C = 1;
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_8003DD4C(void *arg0_) {
    void *e;
    s32 n;
    Volopt_8003DD4C *o = (Volopt_8003DD4C *)arg0_;
    if (is_photon_ready__11TCameraCtrlFv() == 0) {
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
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 3;
                p.arg = sel;
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0++;
            return;
        case 1:
            if (TBoss3Volopt__sub_8003F430(e) != 0 && o->f338 != 0xFFFF) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 4;
                if (TBoss3Volopt__sub_8003F398() != 0) {
                    TBoss3Volopt__sub_80044CE4();
                }
                p.arg = sel;
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0++;
            return;
        case 2:
            if (TBoss3Volopt__sub_8003F41C(e) != 0) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 5;
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0++;
            return;
        case 3:
            if (TBoss3Volopt__sub_8003F408(e) != 0 && sel != 0xFFFF) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 6;
                p.arg = sel;
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0 = 0;
            return;
        case 4:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 7;
                p.arg2 = lbl_805D86A0 * calc_boss4_scale__10TObjPlayerFi(o);
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            return;
        }
    } else {
        switch (o->f3f0) {
        case 0:
            if (TBoss3Volopt__sub_8003F444(e) != 0) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 3;
                p.arg = TBoss3Volopt__sub_80045390(e);
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0++;
            return;
        case 1:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                u16 t = find_nearest_visible_player(o, 0, lbl_805D8668);
                if (t != 0xFFFF) {
                    Pkt_8003DD4C p;
                    set_type__12TBoss3VoloptFPv((void*)(&p));
                    p.id = o->id;
                    p.cmd = 4;
                    if (TBoss3Volopt__sub_8003F398() != 0) {
                        TBoss3Volopt__sub_80044CE4();
                    }
                    p.arg = t;
                    finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                    o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
                }
            }
            o->f3f0++;
            return;
        case 2:
            if (TBoss3Volopt__sub_8003F41C(e) != 0) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 5;
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            o->f3f0++;
            return;
        case 3:
            if (TBoss3Volopt__sub_8003F408(e) != 0) {
                u16 t = find_nearest_visible_player(o, 0, lbl_805D8668);
                if (t != 0xFFFF) {
                    Pkt_8003DD4C p;
                    set_type__12TBoss3VoloptFPv((void*)(&p));
                    p.id = o->id;
                    p.cmd = 6;
                    p.arg = t;
                    finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                    o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
                }
            }
            o->f3f0 = 0;
            return;
        case 4:
            if (TBoss3Volopt__sub_8003F430(e) != 0) {
                Pkt_8003DD4C p;
                set_type__12TBoss3VoloptFPv((void*)(&p));
                p.id = o->id;
                p.cmd = 7;
                p.arg2 = lbl_805D86A0 * calc_boss4_scale__10TObjPlayerFi(o);
                finalize_and_send_60__12TBoss3VoloptFPv((void*)(&p));
                o->f3f2 = 30.0f * (f32)count_dead_parts__12TBoss3VoloptFPv(e) + 30.0f;
            }
            return;
        }
    }
}
#pragma pop

void render__12TBoss3VoloptFv(void) {  }

void run_task__12TBoss3VoloptFv(u8 *arg0) {
    if (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (add_status_effect_timer__10TObjPlayerFPvii((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            reset_status_effect_row((void *) (arg0 + 0x284));
            obj_clearFlags30((void *) (arg0), (int) (0x4000));
        }
    } else {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x374) != (s16) M2C_FIELD(arg0, s16 *, 0x326)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                TBoss3Volopt__sub_8003EB34((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        TBoss3Volopt__sub_8003EB34((void *) (arg0));
    }
}

void *create__12TBoss3VoloptFPv(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x408);
    if (o != NULL) {
        o = TBoss3Volopt__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

void free_parts__12TBoss3VoloptFv(void) {
    destroy__14TObjVoloptCageFv();
    if ((u32) lbl_805D4C10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4C10, 1);
        lbl_805D4C10 = 0U;
    }
    destroy__15TBoss3VoloptP01Fv();
    TBoss3VoloptCore__sub_80040788();
    TBoss3Volopt__sub_800479D0();
    destroy__20TBoss3VoloptHiraisinFv();
    release__19TBoss3VoloptMonitorFv();
}

void TBoss3Volopt__sub_8003EE10(void) {
    s32 v2;
    void *p;
    v2 = check_v2_mode__9TObjEneDDFv();
    if (v2 != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, lbl_80483760, 0, 0, 0);
        }
        lbl_805D4C10 = (u32)p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 5, lbl_804836A0, 0, 0, 0);
        }
        lbl_805D4C10 = (u32)p;
    }
    lbl_805D4C40 = v2;
    init_breakup_effect__15TBoss3VoloptP01Fv();
    cache_volopt_resource_ptrs();
    TBoss3Volopt__sub_80047A60();
    init_models__20TBoss3VoloptHiraisinFv();
    TBoss3VoloptMonitor__sub_80042408();
    lbl_805D4D4C = *(s32 *)(*(u8 **)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xD8) + 4);
    lbl_805D4D48 = *(s32 *)(*(u8 **)(*(u8 **)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xD8) + 0x2C) + 4);
    lbl_805D4D50 = *(s32 *)(*(u8 **)(lbl_805D4C10 + 0x42C) + 0xDC);
    cache_target_values__16TObjVoloptPillarFv();
    init_break_model__14TObjVoloptCageFv();
    lbl_805D2718 = 0xFFFF;
    lbl_805D4C2C = 0;
    lbl_805D4C30 = dispatch_shared_handler_a__6TLobbyFPv(0x27);
    lbl_805D4C34 = dispatch_shared_handler_a__6TLobbyFPv(0x28);
    lbl_805D4C38 = dispatch_shared_handler_a__6TLobbyFPv(0x29);
}

S_8003EF38 *__dt__12TBoss3VoloptFv(S_8003EF38 *o, s16 flag) {
    s32 i;
    if (o != 0) {
        o->vt = ((u8 *)&__vt__12TBoss3Volopt);
        if (((s32 (*)(void))TBoss3Volopt__sub_8003CB94)() != 0) {
            send_entity_set_flags__6TLobbyFPv(o);
        }
        (*(s32 *)&lbl_805D4C14) = 0xFFFF;
        TBoss3Volopt__data_805D2710 = 0xFFFF;
        lbl_805D2714 = 0xFFFF;
        lbl_805D2718 = 0xFFFF;
        lbl_805D271A = 0xFFFF;
        for (i = 0; i < 6; i++) {
            lbl_80483770[i] = 0xFFFF;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TBoss3Volopt.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2720;
    ((VObj_18_c99286 *)(arg0))->m79(arg1);
    reset_photon_effect__12TBoss3VoloptFPv((void*)((void *) (arg0)));
    TBoss3Volopt__sub_8003EA2C((void*)((int) (0)));
    ((M2C_UNK * (*)(void *, M2C_UNK *))VecCopy__FP3VecPC3Vec)(arg0 + 0x38, ((M2C_UNK * (*)(void *, M2C_UNK *))VecCopy__FP3VecPC3Vec)(arg0 + 0x2FC, &(*(RecoveredGlobal_8003EFF0_lbl_804FEE68 *)&lbl_804FEE68).value));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x06040000);
    TBoss3Volopt__data_805D2710 = get_param_offset__11TCameraCtrlFPvi((void *) (arg0), (int) (0x20));
    lbl_805D2714 = get_adjusted_angle__11TCameraCtrlFPvi((void *) (arg0), (int) (0x20));
    M2C_FIELD(arg0, s32 *, 0x374) = 0;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    ((s32 (*)(int))dispatch_by_main_phase__14TBoss4DarkFalzFUs)((int) (0x29U));
    (*(s32 *)&lbl_805D4C20) = 0;
    (*(s32 *)&lbl_805D4C44) = -1;
    ((VObj_18_c99286 *)(arg0))->m80();
    return arg0;
}

int reset_photon_effect__12TBoss3VoloptFPv(void* p) { return reset_photon_effect__10TObjPlayerFPv(p); }

s32 get_field_3e0__12TBoss3VoloptFPv(void* p) { return *(s32*)((char*)p + 0x3e0); }

void swap_6x85_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); { int i; for (i = 0; i < 7; i++) { bswap_16__FPUs((char*)p + 0x6 + i * 2); } } }

void bswap_actions__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xa); bswap_16__FPUs((char*)p + 0xe); }

void bswap_position__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void send_state__12TBoss3VoloptFPv(void* p) { bswap_position__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TBoss3Volopt__sub_8003F22C(void* p) { *(u8*)((char*)p + 0x0) = 23; *(u8*)((char*)p + 0x1) = 5; }

void swap_6x16_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0xa); }

void swap_6x15_fields__12TBoss3VoloptFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }

void finalize_and_send_60__12TBoss3VoloptFPv(void* p) { swap_6x15_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void set_type__12TBoss3VoloptFPv(void* p) { *(u8*)((char*)p + 0x0) = 21; *(u8*)((char*)p + 0x1) = 3; }

void send_6x16__12TBoss3VoloptFPv(void* p) { swap_6x16_fields__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TBoss3Volopt__sub_8003F33C(void* p) { *(u8*)((char*)p + 0x0) = 22; *(u8*)((char*)p + 0x1) = 3; }

void send_update_60__12TBoss3VoloptFPv(void* p) { bswap_actions__12TBoss3VoloptFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TBoss3Volopt__sub_8003F384(void* p) { *(u8*)((char*)p + 0x0) = 132; *(u8*)((char*)p + 0x1) = 4; }

int TBoss3Volopt__sub_8003F398(void) {  return lbl_805D4C40; }

}
