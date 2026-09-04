#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1);
void flee_if_disturbed__8TObjFishFPv(u8 *arg0);
f32 get_target_pos_y__18TBoss7PhotonBulletFv(void);
void TBoss7PhotonBullet__sub_802ED5A0(void *, int);
M2C_UNK TRaderMapCore__sub_801F99EC(void *, int, int, int, f32);
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);

f32 get_target_pos_y__18TBoss7PhotonBulletFv(void) {
    return M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0xF), f32 *, 4);
}

extern M2C_UNK lbl_80472D7C[];

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1) {
    TBoss7PhotonBullet__sub_802ED5A0(arg0, 2);
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_80472D7C);
    ((void (*)(void *, void *))TBoss7PhotonBullet__sub_802ED5A0)(arg0, M2C_FIELD(arg0, void **, 0x62C));
}

extern const f32 lbl_805DEA44;

void flee_if_disturbed__8TObjFishFPv(u8 *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
        TRaderMapCore__sub_801F99EC((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEA44));
    }
}

}
