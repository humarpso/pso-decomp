#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035D10C___vt__12TBoss6Thanks { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035D10C___vt__12TBoss6Thanks_size[sizeof(RecoveredGlobal_8035D10C___vt__12TBoss6Thanks) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8035D0A4___vt__12TBoss6Thanks { M2C_UNK value; u8 remaining[0x14]; };

struct O_8035CCAC { u8 pad[0x54]; s32 arr[4]; };

struct E_8035CC50 { void *p; };

struct W_8035CC50 { u8 pad0[0x54]; E_8035CC50 e[4]; };

struct Ent_8035CB88 { s32 id; s32 lo; s32 hi; };

struct Obj_8035CB88 { u8 pad[0x34]; s32 x30; u8 pad38[0x1C]; void *p[4]; };

typedef s32 M2C_UNK;
extern "C" {
s32 get_bml_motion(void *, s32);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
int get_fish_count__8TObjFishFv(void);
extern RecoveredGlobal_8035D10C___vt__12TBoss6Thanks __vt__12TBoss6Thanks;
extern s32 lbl_805D4440;
extern const f32 lbl_805E019C;
extern const f32 lbl_805E01A4;
u8 *TBoss6Thanks__ct(u8 *arg0, u8 *arg1);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
int TBoss6Thanks__sub_8035CB40(void);
extern RecoveredGlobal_8035D10C___vt__12TBoss6Thanks __vt__12TBoss6Thanks;
u8 *__dt__12TBoss6ThanksFv(u8 *arg0, s16 arg1);
void TBoss6Thanks__sub_8035CCAC(s32 arg0);
void request_destroy__11TBoss4Type2FUi(void *);
void destroy_effects__12TBoss6ThanksFPv(W_8035CC50 *arg0);
void request_destroy__11TBoss4Type2FUi(void *);
void *create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, int);
extern u8 TBoss6Thanks__data_80479BA8[];
extern Ent_8035CB88 lbl_80479BD4[];
void update_particle_emitters__12TBoss6ThanksFPv(void *arg0);
u8 *get_player_data__10TObjPlayerFi(s32);
s32 get_game_mode__6TLobbyFv();
s32 is_active__14TBoss6PlotFalzFPv(void *);
f32 xyz_distance(void *, void *);
extern u8 TBoss6Thanks__data_80479BA8[];
extern const f32 lbl_805E0198;
int is_player_near__12TBoss6ThanksFPv(void *arg0);
}

extern "C" {

int TBoss6Thanks__sub_8035CB40(void);
void advance_thanks_state__12TBoss6ThanksFPv(void *arg0);
u8 check_ship_door__12TBoss6ThanksFv(void);
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void);
u8 fn_8035CAE0(void);
void mark_done__12TBoss6ThanksFPv(void* p);
void update_fade_out__12TBoss6ThanksFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_story_flag(s32);
int dispatch_by_main_phase__14TBoss4DarkFalzFUs(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

u8 fn_8035CAE0(void) {
    return (u8) (get_story_flag(0x9A) != 0);
}
u8 check_ship_door__12TBoss6ThanksFv(void) {
    return (u8) (get_story_flag(0x98) != 0);
}
int TBoss6Thanks__sub_8035CB40(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(154)); }
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(152)); }

extern M2C_UNK lbl_80479C08;
extern const f32 lbl_805E01A4;
extern const f32 lbl_805E01A8;
extern const f32 lbl_805E01AC;

void update_particle_emitters__12TBoss6ThanksFPv(void *arg0) {
    Obj_8035CB88 *o = (Obj_8035CB88 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_8035CB88 *e = &lbl_80479BD4[i];
        if (o->x30 >= e->lo && o->x30 <= e->hi) {
            if (o->p[i] == NULL) {
                o->p[i] = create_particle_emitter(TBoss6Thanks__data_80479BA8, e->id);
                if (o->p[i] != NULL) {
                    set_flags__11TBoss4Type2FPvUi(o->p[i], 0x40);
                }
            }
        } else {
            if (o->p[i] != NULL) {
                request_destroy__11TBoss4Type2FUi(o->p[i]);
                o->p[i] = NULL;
            }
        }
    }
}

void destroy_effects__12TBoss6ThanksFPv(W_8035CC50 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (arg0->e[i].p != NULL) {
            request_destroy__11TBoss4Type2FUi(arg0->e[i].p);
            arg0->e[i].p = NULL;
        }
    }
}

void TBoss6Thanks__sub_8035CCAC(s32 arg0) {
    O_8035CCAC *self = (O_8035CCAC *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

int is_player_near__12TBoss6ThanksFPv(void *arg0) {
    s32 i;
    s32 n;
    u8 *p;
    f32 r;
    n = get_game_mode__6TLobbyFv();
    r = lbl_805E0198;
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && is_active__14TBoss6PlotFalzFPv(p) != 0 &&
            xyz_distance(p + 0x38, TBoss6Thanks__data_80479BA8) <= r) {
            return 1;
        }
    }
    return 0;
}

void update_fade_out__12TBoss6ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x34) == 0) {
            play_sound_effect(0x40033231, 0, 0, 0);
        }
        update_particle_emitters__12TBoss6ThanksFPv((void *)(arg0));
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (lbl_805E01A4 * (lbl_805E01A8 - ((f32) M2C_FIELD(arg0, s32 *, 0x34) / lbl_805E01AC)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x34);
        if (temp_r3 == 0x78) {
            play_sound_effect(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) (temp_r3 + 1);
    }
}

void advance_thanks_state__12TBoss6ThanksFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

void mark_done__12TBoss6ThanksFPv(void* p) { if (is_player_near__12TBoss6ThanksFPv((void *)(p)) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

u8 *__dt__12TBoss6ThanksFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035D0A4___vt__12TBoss6Thanks *)&__vt__12TBoss6Thanks).value;
        TBoss6Thanks__sub_8035CB40();
        destroy_effects__12TBoss6ThanksFPv((W_8035CC50 *)((s32) arg0));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TBoss6Thanks__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TBoss6Thanks.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4440;
    temp_r3 = (u8 *)(get_fish_count__8TObjFishFv());
    M2C_FIELD(arg0, s32 *, 0x38) = get_bml_model(temp_r3, 7);
    M2C_FIELD(arg0, s32 *, 0x40) = TObjFish__sub_8001EDB0(temp_r3, 7);
    M2C_FIELD(arg0, s32 *, 0x48) = get_bml_motion(temp_r3, 9);
    M2C_FIELD(arg0, s32 *, 0x4C) = get_bml_motion(temp_r3, 0xB);
    M2C_FIELD(arg0, s32 *, 0x3C) = get_bml_model(temp_r3, 9);
    M2C_FIELD(arg0, s32 *, 0x44) = TObjFish__sub_8001EDB0(temp_r3, 9);
    M2C_FIELD(arg0, s32 *, 0x50) = get_bml_motion(temp_r3, 0xA);
    TBoss6Thanks__sub_8035CCAC((s32)((s32) arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805E019C;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805E019C;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805E01A4;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    return arg0;
}

}
