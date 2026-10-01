#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase80185B58_80185AFC { char pad[0x18]; };
struct VObj80185B58_80185AFC : VBase80185B58_80185AFC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void TObjCityAreaWarp__vt18(void* p);
void do_warp__16TObjCityAreaWarpFPv(u8 *arg0);
void render__16TObjCityAreaWarpFv(void* p);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
int is_main_phase_15__9TObjEneDDFv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);

void TObjCityAreaWarp__vt18(void* p) { do_warp__16TObjCityAreaWarpFPv((u8 *)(p)); }
void render__16TObjCityAreaWarpFv(void* p) { if (is_main_phase_15__9TObjEneDDFv(p) != 0) { do_warp__16TObjCityAreaWarpFPv((u8 *)(p)); } }

extern u8 *lbl_805D5B28;
extern s32 lbl_805D5B2C;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void do_warp__16TObjCityAreaWarpFPv(u8 *arg0) {
    if (((VObj80185B58_80185AFC *) arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFi(lbl_805D5B2C);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 0x18), M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x34), M2C_FIELD(arg0, f32 *, 0xC4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

}
