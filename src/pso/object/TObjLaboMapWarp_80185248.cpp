#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80185248 { u8 pad[0x18]; };
struct VObj_80185248 : Base_80185248 {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

int TObjLaboMapWarp__sub_80185400(void);
int is_field88_zero__15TObjLaboMapWarpFPv(void* p);
void render__15TObjLaboMapWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470();
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();

extern s32 TObjLaboMapWarp__data_805D5B58;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void render__15TObjLaboMapWarpFv(u8 *arg0) {
    s32 temp_r31;

    if (((VObj_80185248 *)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        TObjFish__sub_8001EDB0(TObjLaboMapWarp__data_805D5B58, 1);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjLaboMapWarpFPv((void*)(arg0)) != 0) {
            TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 1);
            TObjBoss2Tunnel__sub_803DB470();
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
            TObjDoor__sub_803DC894(TObjFish__sub_8001EDC4(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        }
        TObjPlayer__sub_803D9B78();
    }
}

int is_field88_zero__15TObjLaboMapWarpFPv(void* p) { return *(u32*)((char*)p + 0x88) == 0; }

int TObjLaboMapWarp__sub_80185400(void) { return 0; }

}
