#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_803570C8(s8 *arg0);
void TItemEffOrgaFlowShot__sub_80357204(void);
void TItemEffOrgaFlowShot__sub_80357210(void);
int TItemEffOrgaFlowShot__sub_80357284(void);
void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1);
void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1);
int read_be16_field2_forward(void* p);
void render__20TItemEffOrgaFlowShotFv(s32 arg0);
void *TItemEffOrgaFlowShot__ct(void *, void *, void *);
int TLobby__send_and_handle_60(void*);
M2C_UNK TObjPlayer__sub_803DF5E4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DF768(M2C_UNK);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_attack_collision__14TItemAttackColFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK reset_player_transform();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_depth_buffer_settings_1__Fv();

void TBoss6Type2__sub_803570C8(s8 *arg0) {
    s32 var_ctr;

    for (var_ctr = 0x40; var_ctr != 0; var_ctr -= 1) {
        *arg0 = -1;
        arg0 += 1;
    }
}

    extern int lbl_805D6F20;
void TItemEffOrgaFlowShot__sub_80357204(void) { lbl_805D6F20 = 0; }

    extern int lbl_805D6F20;
void TItemEffOrgaFlowShot__sub_80357210(void) { lbl_805D6F20 = 1; }

void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p) { read_be16_field2_forward((void*)(p)); TLobby__send_and_handle_60(p); }

int read_be16_field2_forward(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void build_6xAD_olga_flow_subordinate_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 173; *(u8*)((char*)p + 0x1) = 17; }
int TItemEffOrgaFlowShot__sub_80357284(void) { return 0; }

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

void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x1A0);
    if (o != NULL) {
        TItemEffOrgaFlowShot__ct(o, arg0, arg1);
    }
}

}
