#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80148DCC { char pad[0x18]; };
struct VObj_80148DCC : Base_80148DCC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual s32  m17(s32);
};
struct Base1_80148e54 { char pad[0x18]; };
struct VObj1_80148e54 : Base1_80148e54 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjPlayer__sub_80148DCC(void *arg0);
void draw_model__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjPlayer__sub_80011080(void *, M2C_UNK, M2C_UNK);
u16 TObjPlayer__sub_800115C4(void *, M2C_UNK, f32 *, f32);
M2C_UNK TObjPlayer__sub_803D8C7C(M2C_UNK, void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D97F0(M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4BC4();
M2C_UNK TObjPlayer__sub_803E4BD0();
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);

void TObjPlayer__sub_80148DCC(void *arg0) {
    f32 *temp_r5;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 3) {
        if (((VObj_80148DCC *)arg0)->m17(30) != 0) {
            temp_r5 = M2C_FIELD(arg0, f32 **, 0x350);
            M2C_FIELD(arg0, u16 *, 0x338) = TObjPlayer__sub_800115C4(arg0, 0, temp_r5, *temp_r5);
            {
                u32 tmp338 = (u32) M2C_FIELD(arg0, u16 *, 0x338);
                if (tmp338 != 0xFFFF) {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(tmp338);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
                }
            }
        }
    }
}

extern s32 some_id_805c6f74;

void draw_model__10TObjPlayerFPv(u8 *arg0) {
    VObj1_80148e54 *self = (VObj1_80148e54 *)arg0;
    if ((self->m8(M2C_FIELD(arg0, f32 *, 0x398), M2C_FIELD(arg0, f32 *, 0x39C)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x390) == 1)) {
        TObjLight__sub_80134194(arg0);
        some_id_805c6f74 |= 1;
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D97F0(0);
        TObjPlayer__sub_803D8C7C(0, arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjPlayer__sub_803E4BC4();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x394) != 0) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803E4BD0();
        TObjPlayer__sub_803D9B78();
        some_id_805c6f74 &= 0xFFFFFFFE;
        TObjLight__sub_80134098();
        TObjPlayer__sub_80011080(arg0, 0, 0);
    }
}

}
