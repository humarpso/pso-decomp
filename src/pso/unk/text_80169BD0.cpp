#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x18]; };

struct VObj : Base {
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

extern "C" {
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803E4684(s32);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(void *, void *, f32);
void fn_80169E30(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80169E30(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0xE0) = ((VObj *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xE0) == 1) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) == 1) {
            void *p = M2C_FIELD(arg0, void **, 0xBC);
            if (p != NULL) {
                TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, void **, 0x34), p, M2C_FIELD(arg0, f32 *, 0xB0));
            } else {
                TObjFish__sub_803E46BC(M2C_FIELD(arg0, void **, 0x34));
            }
        } else {
            TObjPlayer__sub_803E4684(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        }
        TObjPlayer__sub_803D9B78();
    }
}
#pragma pop

}
