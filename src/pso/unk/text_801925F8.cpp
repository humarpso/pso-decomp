#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFenceExtraBase_801925F8 { char pad[0x18]; };
struct LazerFenceExtraVObj_801925F8 : LazerFenceExtraBase_801925F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void render__19TObjLazerFenceExtraFv(void *arg0);
void render_lazer_fence_model(void *arg0);
void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void TObjPlayer__sub_803D9B78(void);
M2C_UNK fn_80192554(void *);
void set_global_param__8TObjFishFi(void *);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

extern void *lbl_805D5C28;

void render_lazer_fence_model(void *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0xBC));
    TObjPlayer__sub_803D9B78();
}

extern const f32 lbl_805DBE5C;
extern const f32 lbl_805DBE60;

void render__19TObjLazerFenceExtraFv(void *arg0) {
    s32 temp_r0;

    if ((((LazerFenceExtraVObj_801925F8*)arg0)->m8(lbl_805DBE5C, lbl_805DBE60) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0xD8) != 0)) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xB4);
        switch (temp_r0) {
        case 0:
            fn_80192554(arg0);
            return;
        case 1:
            render_lazer_fence_model((void *)(arg0));
            break;
        }
    }
}

void reset_by_door__19TObjLazerFenceExtraFPv(void *arg0) {
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s16 *, 0xB0)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
}

}
