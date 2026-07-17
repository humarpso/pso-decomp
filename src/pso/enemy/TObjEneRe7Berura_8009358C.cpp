#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();

extern "C" {

M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 is_patrol_active__21TObjEneRe7BeruraPunchFPv(void *);
M2C_UNK TBoss1Dragon__sub_80143504();

extern const f32 lbl_805D973C;
}

#define PAD5 PADV \
PADV \
PADV \
PADV \
PADV
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void CAT(g,__LINE__)();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m87();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m94();
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100(s32);
};

extern "C" void state_patrol__16TObjEneRe7BeruraFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((V_A *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        set_field_378__9TObjEneDDFPvi(arg0, 9);
        M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x4C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x3800);
        break;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x60) >= (s32) M2C_FIELD(arg0, s32 *, 0x4C8)) {
            TObjEneDD__sub_800BBA18(arg0, 5);
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        if (is_patrol_active__21TObjEneRe7BeruraPunchFPv(arg0) == 0) {
            M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D973C;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r4 + 0x280);
        ((V_A *) arg0)->m100(temp_r4);
        ((V_A *) arg0)->m87();
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFB);
        break;
    }

}
