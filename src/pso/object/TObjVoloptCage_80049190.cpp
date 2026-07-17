#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__14TObjVoloptCageFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern s32 lbl_805D4D24;
extern s32 TObjVoloptCage__data_805D4D28;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D887C;
extern const f32 lbl_805D8880;

struct TObjVoloptCageBase { char pad[0x18]; };
struct TObjVoloptCageVObj : TObjVoloptCageBase {
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

void render__14TObjVoloptCageFv(u8 *arg0) {
    if (((TObjVoloptCageVObj *)arg0)->m8(lbl_805D887C, lbl_805D8880) != 0) {
        set_global_param__8TObjFishFi(TObjVoloptCage__data_805D4D28);
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TObjFish__sub_803E46BC(lbl_805D4D24);
        TObjPlayer__sub_803D9B78();
    }
}

}
