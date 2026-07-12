#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss8Dragon__sub_800BB780();
M2C_UNK TBoss8Dragon__sub_800BB7D0(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, s32);
s32 TObjEneMe3ShinowaReal__sub_8002ADD8();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);

extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D04;

struct Base_800b2e8c { char pad[0x18]; };
struct VObj_800b2e8c : Base_800b2e8c {
    virtual void m00(); virtual void m01(); virtual void m02(); virtual void m03();
    virtual void m04(); virtual void m05(); virtual void m06(); virtual void m07();
    virtual void m08(); virtual void m09(); virtual void m0a(); virtual void m0b();
    virtual void m0c(); virtual void m0d(); virtual void m0e(); virtual void m0f();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13();
    virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m1a(); virtual void m1b();
    virtual void m1c(); virtual void m1d(); virtual void m1e(); virtual void m1f();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m2a(); virtual void m2b();
    virtual void m2c(); virtual void m2d(); virtual void m2e(); virtual void m2f();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33();
    virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37();
    virtual void m38(); virtual void m39(); virtual void m3a(); virtual void m3b();
    virtual void m3c(); virtual void m3d(); virtual void m3e(); virtual void m3f();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m4a(); virtual void m4b();
    virtual void m4c(); virtual void m4d(); virtual void m4e(); virtual void m4f();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53();
    virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57();
    virtual void m58(); virtual void m59(); virtual void m5a(); virtual void m5b();
    virtual void m5c(); virtual void m5d();
    virtual void m180();
    virtual void pad1(); virtual void pad2(); virtual void pad3(); virtual void pad4(); virtual void pad5();
    virtual void m198();
};

void handle_motion_event__17TObjEneBm3FlyNestFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800b2e8c*)arg0)->m180();
        TBoss8Dragon__sub_800BB7D0(arg0);
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF1);
        TBoss3Volopt__sub_8022675C((void *)(s32)copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003A829), arg0 + 0x38, 0, 0);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            M2C_FIELD(arg0, s16 *, 0xB8) = 6;
            M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9CF8;
            return;
        }
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9D04;
        return;
    case 3:
        if (TObjEneMe3ShinowaReal__sub_8002ADD8() != 0) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
                TObjEneDD__sub_800BBA18(arg0, 5);
                return;
            }
            if ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 2)) {
                TObjEneDD__sub_800BBA18(arg0, 4);
                return;
            }
            TObjEneDD__sub_800BBA18(arg0, M2C_FIELD(arg0, s32 *, 0x378));
            return;
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        ((VObj_800b2e8c*)arg0)->m198();
        return;
    case 5:
        TBoss8Dragon__sub_800BB780();
        break;
    }
}

}
