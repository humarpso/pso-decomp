#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot { M2C_UNK value; u8 remaining[0x1C]; };
typedef char RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot_size[sizeof(RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot) == 0x20 ? 1 : -1];

extern "C" {
u8 * fn_802E4A4C(void *, M2C_UNK, void *);
int TItemEffOrgaFlowShot__sub_80357284(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 TNpcPlayer__sub_803D97B4(void *);
extern M2C_UNK __vt__20TItemEffOrgaFlowShot[];
extern s32 lbl_805D43B0;
extern const f32 lbl_805E0038;
extern const f32 lbl_805E003C;
extern const f32 lbl_805E0040;
extern const f32 lbl_805E0044;
u8 *TItemEffOrgaFlowShot__ct(u8 *arg0, s32 arg1, u8 *arg2);
extern const f32 lbl_805E0028;
extern const f32 lbl_805E002C;
void TItemEffOrgaFlowShot__sub_80357358(u8 *arg0);
}

extern "C" {

void TBoss6Type2__sub_803570C8(s8 *arg0);
void TItemEffOrgaFlowShot__sub_80357204(void);
void TItemEffOrgaFlowShot__sub_80357210(void);
void *__dt__20TItemEffOrgaFlowShotFv(void *arg0, s16 arg1);
void bswap_6xAD_subordinate_action__20TItemEffOrgaFlowShotFPv(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1);
int read_be16_field2_forward(void* p);
void render__20TItemEffOrgaFlowShotFv(s32 arg0);
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
int TItemEffOrgaFlowShot__sub_80357284(void * _w0) { return 0; }

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

#pragma push
#pragma fp_contract on
void TItemEffOrgaFlowShot__sub_80357358(u8 *arg0) {
    f32 temp_f2;
    temp_f2 = lbl_805E0028 * M2C_FIELD(arg0, f32 *, 0x190);
    M2C_FIELD(arg0, f32 *, 0x40) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (lbl_805E002C + M2C_FIELD(arg0, f32 *, 0x194));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x17C) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x114));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg0, f32 *, 0x118);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x184) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x11C));
}
#pragma pop

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

u8 *TItemEffOrgaFlowShot__ct(u8 *arg0, s32 arg1, u8 *arg2) {
    fn_802E4A4C(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80357548___vt__20TItemEffOrgaFlowShot *)&__vt__20TItemEffOrgaFlowShot).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D43B0;
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 1;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805E0038;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x188) = (s32) M2C_FIELD(arg2, s32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x190) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, f32 *, 0x18C) = (f32) lbl_805E0040;
    M2C_FIELD(arg0, f32 *, 0x194) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, s32 *, 0x19C) = 0x14;
    M2C_FIELD(arg0, f32 *, 0x17C) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x188));
    M2C_FIELD(arg0, f32 *, 0x180) = (f32) lbl_805E003C;
    M2C_FIELD(arg0, f32 *, 0x184) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x188));
    M2C_FIELD(arg0, f32 *, 0x164) = (f32) (M2C_FIELD(arg2, f32 *, 0x2C) - M2C_FIELD(arg2, f32 *, 0x38));
    M2C_FIELD(arg0, f32 *, 0x168) = (f32) (M2C_FIELD(arg2, f32 *, 0x30) - M2C_FIELD(arg2, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x16C) = (f32) (M2C_FIELD(arg2, f32 *, 0x34) - M2C_FIELD(arg2, f32 *, 0x40));
    M2C_FIELD(arg0, f32 *, 0x198) = (f32) (lbl_805E0044 * TNpcPlayer__sub_803D97B4(arg0 + 0x164));
    M2C_FIELD(arg0, f32 *, 0x170) = (f32) (M2C_FIELD(arg2, f32 *, 0x5C) - M2C_FIELD(arg2, f32 *, 0x50));
    M2C_FIELD(arg0, f32 *, 0x174) = (f32) (M2C_FIELD(arg2, f32 *, 0x60) - M2C_FIELD(arg2, f32 *, 0x54));
    M2C_FIELD(arg0, f32 *, 0x178) = (f32) (M2C_FIELD(arg2, f32 *, 0x64) - M2C_FIELD(arg2, f32 *, 0x58));
    TNpcPlayer__sub_803D97B4(arg0 + 0x170);
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) M2C_FIELD(arg2, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0xF8) = (f32) M2C_FIELD(arg2, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg2, f32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x100) = 0x6040FF40;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) M2C_FIELD(arg2, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x118) = (f32) M2C_FIELD(arg2, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x11C) = (f32) M2C_FIELD(arg2, f32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x120) = 0x408840;
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) M2C_FIELD(arg2, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) M2C_FIELD(arg2, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) M2C_FIELD(arg2, f32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0x140) = 0x6040FF40;
    M2C_FIELD(arg0, s32 *, 0xE0) = 0x408840;
    M2C_FIELD(arg0, s32 *, 0x160) = 0x408840;
    TItemEffOrgaFlowShot__sub_80357284((void *)(arg0));
    TItemEffOrgaFlowShot__sub_80357358((u8 *)(arg0));
    return arg0;
}

void create__20TItemEffOrgaFlowShotFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x1A0);
    if (o != NULL) {
        TItemEffOrgaFlowShot__ct((u8 *)(o), (s32)(arg0), (u8 *)(arg1));
    }
}

}
