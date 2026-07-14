#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TBoss2PhotonBulletFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TBoss2PhotonBullet[];

void *__dt__18TBoss2PhotonBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TBoss2PhotonBullet;
        if (M2C_FIELD(arg0, void **, 0xE4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xE4)); M2C_FIELD(arg0, M2C_UNK *, 0xE4) = 0; }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
