#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase8018B8BC { char pad[0x18]; };
struct VObj8018B8BC : VBase8018B8BC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__19TContainerAncient01Fv(u8 *arg0);
M2C_UNK TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 TObjPlayer__sub_80080750();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK fn_803DC894(s32, s32, f32);

extern const f32 TContainerAncient01__data_805DBD3C;
extern const f32 lbl_805DBD4C;

void render__19TContainerAncient01Fv(u8 *arg0) {
    if (((VObj8018B8BC *) arg0)->m8(TContainerAncient01__data_805DBD3C, lbl_805DBD4C) != 0) {
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x35C) != 0) {
            TBoss7Tentacle__sub_803D9BA0(arg0 + 0x360);
        }
        if (TObjPlayer__sub_80080750() == 1) {
            TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            fn_803DC894(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        TObjPlayer__sub_803D9B78();
    }
}

}
