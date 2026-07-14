#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__12TObjNpcEnemyFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK draw__16TObjEneRe7BeruraFPv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK draw_model__12TObjNpcEnemyFPv();
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803E4BC4(void *);
M2C_UNK TObjPlayer__sub_803E4BD0();

void update_state__12TObjNpcEnemyFPv(void *arg0) {
    void *sp4;
    u16 temp_r0;

    sp4 = M2C_FIELD(arg0, void **, 0x3B8);
    temp_r0 = M2C_FIELD(sp4, u16 *, 2);
    switch ((s32) temp_r0) {
    case 0:
        TObjPlayer__sub_803E4BC4(arg0);
        TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803E4BD0();
        return;
    case 1:
        draw__16TObjEneRe7BeruraFPv();
        return;
    case 2:
        TObjPlayer__sub_803E4BC4(arg0);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        reset_transform_state__10TObjPlayerFv();
        TObjPlayer__sub_803E4BD0();
        return;
    case 3:
        draw_model__12TObjNpcEnemyFPv();
    case 4:
        return;
    }
}

}
