#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1);
void TBoss7PhotonBullet__sub_802ED5A0(void *, int);
void emit_effect__9TObjEneDDFPvii(void *, void *, void *);

extern M2C_UNK lbl_80472D7C[];

void emit_hit_effect__18TBoss7PhotonBulletFPvPv(void *arg0, void *arg1) {
    TBoss7PhotonBullet__sub_802ED5A0(arg0, 2);
    emit_effect__9TObjEneDDFPvii(arg0, arg1, lbl_80472D7C);
    ((void (*)(void *, void *))TBoss7PhotonBullet__sub_802ED5A0)(arg0, M2C_FIELD(arg0, void **, 0x62C));
}

}
