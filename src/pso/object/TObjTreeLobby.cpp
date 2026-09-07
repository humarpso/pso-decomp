#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80364A1C_lbl_804F2B18 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80364A1C_lbl_804F2B18_size[sizeof(RecoveredGlobal_80364A1C_lbl_804F2B18) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80364A1C_lbl_804F2B18 lbl_804F2B18;
extern u32 TObjTreeLobby__data_805D6FC0;
extern s32 lbl_805D6FC4;
void TObjTreeLobby__sub_80364A1C(void);
}

extern "C" {

void *create__13TObjTreeLobbyFPv(void *arg0);
void destroy_static_instance__13TObjTreeLobbyFv(void);
void render__13TObjTreeLobbyFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *TObjTreeLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

extern const f32 TObjTreeLobby__data_805E0290;

void render__13TObjTreeLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjTreeLobby__data_805E0290), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

extern void *tl_05;

void *create__13TObjTreeLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TObjTreeLobby__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjTreeLobby__data_805D6FC0;

void destroy_static_instance__13TObjTreeLobbyFv(void) {
    if ((u32) TObjTreeLobby__data_805D6FC0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTreeLobby__data_805D6FC0, 1);
        TObjTreeLobby__data_805D6FC0 = 0U;
    }
}
void TObjTreeLobby__sub_80364A1C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F2B18.value, 0, 0, 0));
    }
    (*(s32 *)&TObjTreeLobby__data_805D6FC0) = var_r0;
    lbl_805D6FC4 = get_lobby_type__6TLobbyFv();
}

}
