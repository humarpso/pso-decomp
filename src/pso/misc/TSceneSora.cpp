#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802072E0___vt__10TSceneSora {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802075F8_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
u8 * TLobby__sub_8001FE7C(void *, s16);
extern s32 TSceneSora__data_805D3620;
extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
void TSceneSora__sub_80207430(void);
u8 * destroy_particle__13TParticleCtrlFPvs(void *, s16);
M2C_UNK __dl__7TObjectFPv(void *);
extern RecoveredGlobal_802072E0___vt__10TSceneSora __vt__10TSceneSora;
extern s32 TSceneSora__data_805D6050;
u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1);
void TLobby__sub_80141038(void *, s32, s32);
s32 TLobby__sub_80207770(s32);
void TOBoss4Rock__sub_802078A4(void);
extern RecoveredGlobal_802075F8_lbl_80515BA0 lbl_80515BA0;
extern s32 lbl_805D2CD8;
void TLobby__sub_802075F8(void);
}

extern "C" {

void TLobby__sub_802075F4(void);
void create_instance__10TSceneSoraFv(void);
s32 TSceneSora__ct(s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

extern s32 TSceneSora__data_805D6050;
extern u32 TSceneSora__data_805D6054;
extern s32 tl_05;

typedef char RecoveredGlobal_802072E0___vt__10TSceneSora_size[sizeof(RecoveredGlobal_802072E0___vt__10TSceneSora) == 0x38 ? 1 : -1];
u8 *__dt__10TSceneSoraFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TSceneSora.value;
        TSceneSora__data_805D6050 = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

void create_instance__10TSceneSoraFv(void) {
    s32 var_r3;

    if ((u32) TSceneSora__data_805D6054 != 0U) {
        var_r3 = __nw__7TObjectFUl(0xA4);
        if (var_r3 != 0) {
            var_r3 = TSceneSora__ct(var_r3, tl_05);
        }
        TSceneSora__data_805D6050 = var_r3;
        return;
    }
    TSceneSora__data_805D6050 = 0;
}

void TSceneSora__sub_80207430(void) {
    TSceneSora__data_805D3620 = 1;
    if ((void *) (*(u8 * *)&TSceneSora__data_805D6054) != NULL) {
        TLobby__sub_8001FE7C((*(u8 * *)&TSceneSora__data_805D6054), 1);
        (*(u8 * *)&TSceneSora__data_805D6054) = NULL;
    }
    TSceneSora__data_805D6050 = 0;
}

void TLobby__sub_802075F4(void) {  }
typedef char RecoveredGlobal_802075F8_lbl_80515BA0_size[sizeof(RecoveredGlobal_802075F8_lbl_80515BA0) == 0x28 ? 1 : -1];
void TLobby__sub_802075F8(void) {
    TOBoss4Rock__sub_802078A4();
    if ((s32) lbl_805D2CD8 != -1) {
        TLobby__sub_80141038(&lbl_80515BA0.value, lbl_805D2CD8, TLobby__sub_80207770(lbl_805D2CD8));
        lbl_805D2CD8 = -1;
    }
}

}
