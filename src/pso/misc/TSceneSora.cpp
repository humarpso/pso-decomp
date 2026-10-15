#include "types.h"

struct RecoveredGlobal_802072E0___vt__10TSceneSora {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802075F8_lbl_80515BA0 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80207340___vt__10TSceneSora {
    s32 value;
    u8 remaining[0x34];
};

struct SkyMotion_80207238 { u32 rows; u32 frame_count; };

struct TSceneSora_80207238 {
    u8 pad[0x60];
    s32 yaw;
    u8 pad64[0x94 - 0x64];
    SkyMotion_80207238 *motion;
    void *textures;
    f32 rate;
    f32 frame;
};

struct Ref_80207478 { s32 id; s32 idx; s32 pad; };

struct Ent_80207478 { s32 f0; char *name; };

struct Res_80207478 { void *buf; s32 n; };

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern s32 TSceneSora__sky_active_flag;
extern s32 TSceneSora__instance;
extern u32 TSceneSora__sky_bml_resource;
void TSceneSora__sub_80207430(void);
u8 * destroy_particle__13TParticleCtrlFPvs(void *, s16);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_802072E0___vt__10TSceneSora __vt__10TSceneSora;
extern s32 TSceneSora__instance;
u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1);
void TLobby__sub_80141038(void *, s32, s32);
s32 get_floor_map_terrain(s32);
void randomize_adventure_maps(void);
extern RecoveredGlobal_802075F8_lbl_80515BA0 lbl_80515BA0;
extern s32 pending_adventure_map_floor;
void prepare_adventure_maps(void);
s32 get_bml_motion(int, int);
s32 TObjFish__sub_8001EDB0(int, int);
s32 get_bml_model(int, int);
s32 construct_world_actor_base(void *);
extern RecoveredGlobal_802072E0___vt__10TSceneSora __vt__10TSceneSora;
extern s32 lbl_805D3624;
extern u32 TSceneSora__sky_bml_resource;
extern s32 TSceneSora__has_sky_motion;
extern const f32 lbl_805DC608;
extern const f32 lbl_805DC60C;
u8 *TSceneSora__ct(u8 *arg0, s32 _w1);
s32 draw_ginja_object(int);
s32 draw_ginja_model_with_motion(int, int, f32);
s32 TObjFish__sub_8001EDB0(int, int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi();
extern s32 TSceneSora__sky_active_flag;
extern u32 TSceneSora__sky_bml_resource;
void render__10TSceneSoraFv(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
extern const f32 lbl_805DC608;
void run_task__10TSceneSoraFv(TSceneSora_80207238 *sky);
void *get_current_floor();
u32 TLobby__sub_8002058C(void *, int, Res_80207478 *, Res_80207478 *, int, int, int);
void *alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 update_lobby_scene__6TSceneFPv(void *);
s32 replace_file_extension__6TLobbyFPvPvPv(char *, char *, char *);
s32 lookup_scene_object__6TLobbyFPv(void *, Ref_80207478 *);
Ent_80207478 *get_floor_scene_table(s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 close_adxf_handle__6TLobbyFPv(void *);
void *adxf_open__6TLobbyFUii(char *, int);
extern char lbl_8044A9D0[];
extern char lbl_8044A9D8[];
extern char lbl_8044A9E0[];
extern s32 TSceneSora__sky_active_flag;
extern s32 TSceneSora__instance;
extern u32 TSceneSora__sky_bml_resource;
extern s32 TSceneSora__has_sky_motion;
void load_sky_resources__10TSceneSoraFv(void);
}

extern "C" {

void TLobby__sub_802075F4(void);
void create_instance__10TSceneSoraFv(void);
s32 __nw__7TObjectFUl(s32);

extern s32 TSceneSora__instance;
extern u32 TSceneSora__sky_bml_resource;
extern s32 tl_05;

typedef char RecoveredGlobal_802072E0___vt__10TSceneSora_size[sizeof(RecoveredGlobal_802072E0___vt__10TSceneSora) == 0x38 ? 1 : -1];

void render__10TSceneSoraFv(u8 *arg0) {
    if ((s32) TSceneSora__sky_active_flag != 0) {
        begin_effect_render__13TParticleCtrlFv();
        TObjFish__sub_8001EDB0((int) ((*(s32 *)&TSceneSora__sky_bml_resource)), (int) (0));
        set_global_param__8TObjFishFi();
        push_matrix();
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
            draw_ginja_model_with_motion((int) (*(s32 *)((s8 *)arg0 + 0x90)), (int) (*(s32 *)((s8 *)arg0 + 0x94)), (f32) (*(f32 *)((s8 *)arg0 + 0xA0)));
        } else {
            draw_ginja_object((int) (*(s32 *)((s8 *)arg0 + 0x90)));
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__10TSceneSoraFv(TSceneSora_80207238 *sky) {
    if (sky->motion != NULL) {
        sky->frame += sky->rate;
        if (sky->frame > (f32)(sky->motion->frame_count - 1)) {
            sky->frame = lbl_805DC608;
        }
    } else {
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 1:
        case 2:
            sky->yaw++;
            break;
        }
    }
}

u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__10TSceneSora.value;
        TSceneSora__instance = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80207340___vt__10TSceneSora_size[sizeof(RecoveredGlobal_80207340___vt__10TSceneSora) == 0x38 ? 1 : -1];
u8 *TSceneSora__ct(u8 *arg0, s32 _w1) {
    construct_world_actor_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80207340___vt__10TSceneSora *)&__vt__10TSceneSora).value;
    *(s32 *)((s8 *)arg0 + 0) = lbl_805D3624;
    *(s32 *)((s8 *)arg0 + 0x90) = get_bml_model((int) ((*(s32 *)&TSceneSora__sky_bml_resource)), (int) (0));
    if (TSceneSora__has_sky_motion != 0) {
        *(s32 *)((s8 *)arg0 + 0x94) = get_bml_motion((int) ((*(s32 *)&TSceneSora__sky_bml_resource)), (int) (0));
    } else {
        *(s32 *)((s8 *)arg0 + 0x94) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x98) = TObjFish__sub_8001EDB0((int) ((*(s32 *)&TSceneSora__sky_bml_resource)), (int) (0));
    *(f32 *)((s8 *)arg0 + 0x9C) = lbl_805DC60C;
    *(f32 *)((s8 *)arg0 + 0xA0) = lbl_805DC608;
    return arg0;
}

void create_instance__10TSceneSoraFv(void) {
    s32 var_r3;

    if ((u32) TSceneSora__sky_bml_resource != 0U) {
        var_r3 = __nw__7TObjectFUl(0xA4);
        if (var_r3 != 0) {
            var_r3 = ((s32)TSceneSora__ct((u8 *)(var_r3), (s32)(tl_05)));
        }
        TSceneSora__instance = var_r3;
        return;
    }
    TSceneSora__instance = 0;
}

void TSceneSora__sub_80207430(void) {
    TSceneSora__sky_active_flag = 1;
    if ((void *) (*(u8 * *)&TSceneSora__sky_bml_resource) != NULL) {
        TLobby__sub_8001FE7C((*(u8 * *)&TSceneSora__sky_bml_resource), 1);
        (*(u8 * *)&TSceneSora__sky_bml_resource) = NULL;
    }
    TSceneSora__instance = 0;
}

void load_sky_resources__10TSceneSoraFv(void) {
    char name2[0x20];
    char name1[0x20];
    Ref_80207478 ref;
    Res_80207478 b;
    Res_80207478 a;
    Ent_80207478 *tbl;
    s32 ok;
    void *p;
    u32 o;
    TSceneSora__instance = 0;
    TSceneSora__sky_bml_resource = 0;
    TSceneSora__has_sky_motion = 0;
    if (lookup_scene_object__6TLobbyFPv(get_current_floor(), &ref) != 0) {
        ok = 0;
        tbl = get_floor_scene_table(ref.id);
        replace_file_extension__6TLobbyFPvPvPv(name1, tbl[ref.idx].name, lbl_8044A9D0);
        if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
            replace_file_extension__6TLobbyFPvPvPv(name2, tbl[ref.idx].name, lbl_8044A9D8);
            ok = update_lobby_scene__6TSceneFPv(name2);
        }
        if (ok <= 0) {
            replace_file_extension__6TLobbyFPvPvPv(name2, tbl[ref.idx].name, lbl_8044A9E0);
        }
        p = adxf_open__6TLobbyFUii(name2, 0);
        if (p != NULL) {
            b.buf = name2;
            close_adxf_handle__6TLobbyFPv(p);
        } else {
            return;
        }
        p = adxf_open__6TLobbyFUii(name1, 0);
        if (p != NULL) {
            a.buf = name1;
            TSceneSora__has_sky_motion = 1;
            close_adxf_handle__6TLobbyFPv(p);
        } else {
            a.buf = NULL;
        }
        b.n = 0;
        a.n = 0;
        o = (u32)alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (o != 0) {
            o = TLobby__sub_8002058C((void *)o, 1, &b, &a, 0, 0, 0);
        }
        TSceneSora__sky_bml_resource = o;
        TSceneSora__sky_active_flag = 1;
    }
}

void TLobby__sub_802075F4(void) {  }
typedef char RecoveredGlobal_802075F8_lbl_80515BA0_size[sizeof(RecoveredGlobal_802075F8_lbl_80515BA0) == 0x28 ? 1 : -1];
void prepare_adventure_maps(void) {
    randomize_adventure_maps();
    if ((s32) pending_adventure_map_floor != -1) {
        TLobby__sub_80141038(&lbl_80515BA0.value, pending_adventure_map_floor, get_floor_map_terrain(pending_adventure_map_floor));
        pending_adventure_map_floor = -1;
    }
}

}
