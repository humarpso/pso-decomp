#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TItemEffOrgaFlowShot__vt4(void* p);
u8 has_game_join_id(void *arg0);
s32 query_game_join_id__10TObjPlayerFv(s32);
int TObjPlayer__sub_802E456C(void*);

u8 has_game_join_id(void *arg0) {
    return (u8) (query_game_join_id__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0xAC)) != 0);
}
int TItemEffOrgaFlowShot__vt4(void* p) { return TObjPlayer__sub_802E456C(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80115B80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1);

extern const f32 lbl_805DABE8;

void approach_value__20TItemEffOrgaFlowShotFPvff(f32 *arg0, f32 farg0, f32 farg1) {
    *arg0 += farg0;
    if (farg0 > lbl_805DABE8) {
        if (*arg0 > farg1) {
            *arg0 = farg1;
        }
    } else if (*arg0 < farg1) {
        *arg0 = farg1;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80357204
#include "types.h"

extern "C" {

void TItemEffOrgaFlowShot__sub_80357204(void);

    extern int lbl_805D6F20;
void TItemEffOrgaFlowShot__sub_80357204(void) { lbl_805D6F20 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80357210
#include "types.h"

extern "C" {

void TItemEffOrgaFlowShot__sub_80357210(void);

    extern int lbl_805D6F20;
void TItemEffOrgaFlowShot__sub_80357210(void) { lbl_805D6F20 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8035721C
#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int read_be16_field2_forward(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p) { read_be16_field2_forward(p); TLobby__send_and_handle_60(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x803573A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__20TItemEffOrgaFlowShotFv(s32 arg0);
M2C_UNK fn_80141A30();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK reset_player_transform();
M2C_UNK TObjPlayer__sub_803DF5E4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DF768(M2C_UNK);
M2C_UNK set_depth_buffer_settings_1__Fv();

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__20TItemEffOrgaFlowShotFv(s32 arg0) {
    begin_effect_render__13TParticleCtrlFv();
    lbl_805D5660 = some_id_805c6f74;
    set_depth_buffer_settings_1__Fv();
    init_xyz_limits__10TObjPlayerFv();
    TObjPlayer__sub_803DF768(1);
    TObjPlayer__sub_803DF5E4(arg0 + 0xC4, 0xA);
    reset_player_transform();
    reset_transform_state__10TObjPlayerFv();
    fn_80141A30();
    some_id_805c6f74 = lbl_805D5660;
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803574F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);

extern M2C_UNK __vt__20TItemEffOrgaFlowShot[];

void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TItemEffOrgaFlowShot;
        destroy_attack_collision__14TItemAttackColFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803576EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1);
void *TItemEffOrgaFlowShot__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x1A0);
    if (o != NULL) {
        TItemEffOrgaFlowShot__ct(o, arg0, arg1);
    }
}

}
#endif
#endif
