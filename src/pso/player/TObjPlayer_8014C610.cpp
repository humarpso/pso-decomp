#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_if_visible__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK render_with_position_override__10TObjPlayerFPvPvi(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D8C7C(M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D97F0(M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);

extern s32 some_id_805c6f74;

struct Base_8014C610 { char pad[0x18]; };
struct VObj_8014C610 : Base_8014C610 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

void draw_if_visible__10TObjPlayerFPv(u8 *arg0) {
    if ((((VObj_8014C610 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        some_id_805c6f74 |= 1;
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D97F0(0);
        TObjPlayer__sub_803D8C7C(0, arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw__16TObjEneRe7BeruraFPv(arg0);
        TObjPlayer__sub_803D9B78();
        some_id_805c6f74 &= 0xFFFFFFFE;
        render_with_position_override__10TObjPlayerFPvPvi(arg0, 0, 0);
    }
}

}
