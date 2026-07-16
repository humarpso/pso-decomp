#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, int, int);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
s32 TObjNpcEnemy__sub_802D7444(void *);
M2C_UNK update_state__12TObjNpcEnemyFPv(void *);
M2C_UNK TObjPlayer__sub_803D8C7C(int, void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D97F0(int);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(int);
extern s32 some_id_805c6f74;
extern const f32 lbl_805DE7D8;

struct NpcBase { char pad[0x18]; };
struct NpcV : NpcBase {
    virtual M2C_UNK m0(); virtual M2C_UNK m1(); virtual M2C_UNK m2();
    virtual M2C_UNK m3(); virtual M2C_UNK m4(); virtual M2C_UNK m5();
    virtual M2C_UNK m6(); virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32 a, f32 b);
};

void render__12TObjNpcEnemyFv(u8 *arg0) {
    u8 *temp_r4;

    if (((void *) M2C_FIELD(arg0, void **, 0x3B8) != NULL) && (((NpcV *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        TObjLight__sub_80134194((void *) (arg0));
        if (TObjNpcEnemy__sub_802D7444((void *) (arg0)) != 0) {
            some_id_805c6f74 |= 1;
        }
        TObjFish__sub_803DA798((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D97F0((int) (0));
        TObjPlayer__sub_803D8C7C((int) (0), (void *) (arg0 + 0x38));
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3B8));
        TObjPlayer__sub_803D9624((int) (0), (int) (temp_r4), (f32) (lbl_805DE7D8), (f32) (M2C_FIELD(temp_r4, f32 *, 4)), (f32) (lbl_805DE7D8));
        TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        update_state__12TObjNpcEnemyFPv((void *) (arg0));
        TObjPlayer__sub_803D9B78();
        if (TObjNpcEnemy__sub_802D7444((void *) (arg0)) != 0) {
            some_id_805c6f74 &= 0xFFFFFFFE;
        }
        TObjLight__sub_80134098();
        render_with_position_override__10TObjPlayerFPvPvi((void *) (arg0), (int) (0), (int) (0));
    }
}

}
