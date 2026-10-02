#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035C83C___vt__12TBoss4Thanks { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8035C83C___vt__12TBoss4Thanks_size[sizeof(RecoveredGlobal_8035C83C___vt__12TBoss4Thanks) == 0x18 ? 1 : -1];

struct RecoveredGlobal_8035C7D4___vt__12TBoss4Thanks { M2C_UNK value; u8 remaining[0x14]; };

struct O_8035C480 { u8 pad[0x44]; s32 arr[4]; };

struct E_8035C424 { void *p; };

struct W_8035C424 { u8 pad0[0x44]; E_8035C424 e[4]; };

struct Ent_8035C35C { s32 id; s32 lo; s32 hi; };

struct Obj_8035C35C { u8 pad[0x30]; s32 x30; u8 pad34[0x10]; void *p[4]; };

extern "C" {
s32 TObjFish__sub_8001ED9C(void *, s32);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
int get_instance_count__9TBoss4UroFv(void);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_8035C83C___vt__12TBoss4Thanks __vt__12TBoss4Thanks;
extern s32 lbl_805D4438;
extern const f32 lbl_805E0184;
extern const f32 lbl_805E0188;
u8 *TBoss4Thanks__ct(u8 *arg0, u8 *arg1);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
int dispatch_main_phase_153__12TBoss4ThanksFv(void);
extern RecoveredGlobal_8035C83C___vt__12TBoss4Thanks __vt__12TBoss4Thanks;
u8 *__dt__12TBoss4ThanksFv(u8 *arg0, s16 arg1);
void TBoss4Thanks__sub_8035C480(s32 arg0);
void request_destroy__11TBoss4Type2FUi(void *);
void TBoss4Thanks__sub_8035C424(W_8035C424 *arg0);
void request_destroy__11TBoss4Type2FUi(void *);
void *create_particle_emitter(void *, int);
void set_flags__11TBoss4Type2FPvUi(void *, int);
extern u8 TBoss4Thanks__data_80479B40[];
extern Ent_8035C35C lbl_80479B58[];
void TBoss4Thanks__sub_8035C35C(void *arg0);
void *get_player_data__10TObjPlayerFi(s32);
s32 obj_getField1c(void *);
s32 get_game_mode__6TLobbyFv(void);
s32 TBoss4Type3__sub_8005254C(s32);
f32 xyz_distance(void *, void *);
extern u8 TBoss4Thanks__data_80479B40[];
extern const f32 lbl_805E0180;
int TBoss4Thanks__sub_8035C4A4(void *arg0);
}

extern "C" {

void advance_thanks_state__12TBoss4ThanksFPv(void *arg0);
int dispatch_main_phase_153__12TBoss4ThanksFv(void);
int dispatch_main_phase__12TBoss4ThanksFv(void);
u8 fn_8035C2B4(void);
u8 is_door_0x97_open__12TBoss4ThanksFv(void);
void mark_done__12TBoss4ThanksFPv(void* p);
void update_fade_out__12TBoss4ThanksFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TODoorVoShip__sub_801F44BC(s32);
int dispatch_by_main_phase__14TBoss4DarkFalzFUs(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

u8 fn_8035C2B4(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x99) != 0);
}
u8 is_door_0x97_open__12TBoss4ThanksFv(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x97) != 0);
}
int dispatch_main_phase_153__12TBoss4ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(153)); }
int dispatch_main_phase__12TBoss4ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(151)); }

extern M2C_UNK lbl_80479B88;
extern const f32 lbl_805E0188;
extern const f32 lbl_805E018C;
extern const f32 lbl_805E0190;

void TBoss4Thanks__sub_8035C35C(void *arg0) {
    Obj_8035C35C *o = (Obj_8035C35C *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_8035C35C *e = &lbl_80479B58[i];
        if (o->x30 >= e->lo && o->x30 <= e->hi) {
            if (o->p[i] == NULL) {
                o->p[i] = create_particle_emitter(TBoss4Thanks__data_80479B40, e->id);
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

void TBoss4Thanks__sub_8035C424(W_8035C424 *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (arg0->e[i].p != NULL) {
            request_destroy__11TBoss4Type2FUi(arg0->e[i].p);
            arg0->e[i].p = NULL;
        }
    }
}

void TBoss4Thanks__sub_8035C480(s32 arg0) {
    O_8035C480 *self = (O_8035C480 *)arg0;
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

int TBoss4Thanks__sub_8035C4A4(void *arg0) {
    s32 n;
    s32 i;
    f32 lim;
    u8 *p;
    n = get_game_mode__6TLobbyFv();
    lim = lbl_805E0180;
    for (i = 0; i < n; i++) {
        p = (u8 *)get_player_data__10TObjPlayerFi(i);
        if (p != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(p)) != 0 &&
            xyz_distance(p + 0x38, TBoss4Thanks__data_80479B40) <= lim) {
            return 1;
        }
    }
    return 0;
}

void update_fade_out__12TBoss4ThanksFPv(void *arg0) {
    s32 temp_r3;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != 1) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0) {
            play_sound_effect(0x40033231, 0, 0, 0);
        }
        TBoss4Thanks__sub_8035C35C((void *)(arg0));
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (lbl_805E0188 * (lbl_805E018C - ((f32) M2C_FIELD(arg0, s32 *, 0x30) / lbl_805E0190)));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30);
        if (temp_r3 == 0x78) {
            play_sound_effect(0x40033232, 0, 0, 0);
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (temp_r3 + 1);
    }
}

void advance_thanks_state__12TBoss4ThanksFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

void mark_done__12TBoss4ThanksFPv(void* p) { if (TBoss4Thanks__sub_8035C4A4((void *)(p)) != 0) { *(int*)((char*)p + 0x24) = 1; *(int*)((char*)p + 0x1c) = 1; } }

u8 *__dt__12TBoss4ThanksFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035C7D4___vt__12TBoss4Thanks *)&__vt__12TBoss4Thanks).value;
        dispatch_main_phase_153__12TBoss4ThanksFv();
        TBoss4Thanks__sub_8035C424((W_8035C424 *)((s32) arg0));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TBoss4Thanks__ct(u8 *arg0, u8 *arg1) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TBoss4Thanks.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4438;
    temp_r3 = (u8 *)(get_instance_count__9TBoss4UroFv());
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model(temp_r3, 1);
    M2C_FIELD(arg0, s32 *, 0x38) = TObjFish__sub_8001EDB0(temp_r3, 1);
    M2C_FIELD(arg0, s32 *, 0x3C) = TObjFish__sub_8001ED9C(temp_r3, 0x46);
    M2C_FIELD(arg0, s32 *, 0x40) = TObjFish__sub_8001ED9C(temp_r3, 0x47);
    TBoss4Thanks__sub_8035C480((s32)((s32) arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) lbl_805E0184;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805E0188;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}

}
