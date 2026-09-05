#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK TBoss8Dragon__sub_8005F684(void *, void *);
M2C_UNK trigger_effect__12TBoss8DragonFPvi(void *, void *, int);
M2C_UNK copy_spawn_params__12TBoss8DragonFPvPv(void *, void *);
M2C_UNK init_color__12TBoss8DragonFPv(void *);
void TBoss8Dragon__sub_8005F578(u8 *arg0, s32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_8005F578(u8 *arg0, s32 arg1) {
    struct { u8 pad[0x30]; } sp8;
    s32 temp_r5;
    init_color__12TBoss8DragonFPv((void *) (&sp8));
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x778);
    M2C_FIELD(arg0, s32 *, 0x774) = (s32) M2C_FIELD(temp_r5, M2C_UNK *, (arg1 * 4));
    trigger_effect__12TBoss8DragonFPvi((void *) (arg0), (void *) (&sp8), (int) (temp_r5));
    TBoss8Dragon__sub_8005F684((void *) (arg0), (void *) (&sp8));
    copy_spawn_params__12TBoss8DragonFPvPv((void *) (arg0), (void *) (&sp8));
}

}
