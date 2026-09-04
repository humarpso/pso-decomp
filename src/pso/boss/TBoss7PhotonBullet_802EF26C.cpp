#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1);
void render__18TBoss7PhotonBulletFv(u8 *arg0);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, int, void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__18TBoss7PhotonBulletFv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE8) & 1) {
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xCC, 0, arg0 + 0xD8);
    }
}

extern M2C_UNK __vt__18TBoss7PhotonBullet[];

void *__dt__18TBoss7PhotonBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TBoss7PhotonBullet;
        if (M2C_FIELD(arg0, void **, 0xF0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0)); }
        if (M2C_FIELD(arg0, void **, 0xF4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF4)); }
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
