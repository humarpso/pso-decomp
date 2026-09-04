#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct WarpLobbyBase_801A07F8 { char pad[0x18]; };
struct WarpLobbyVObj_801A07F8 : WarpLobbyBase_801A07F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1);
void render__13TObjWarpLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjDoor__sub_803DC894(s32, s32, f32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *TObjWarpLobby__data_805D5CC8;
extern s32 lbl_805D5CCC;
extern const f32 lbl_805DC060;
extern const f32 lbl_805DC064;

void render__13TObjWarpLobbyFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) && (((WarpLobbyVObj_801A07F8*)arg0)->m8(lbl_805DC060, lbl_805DC064) != 0)) {
        set_global_param__8TObjFishFi(lbl_805D5CCC);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        TObjDoor__sub_803DC894(M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x430), s32 *, 4), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B78();
    }
}

extern M2C_UNK __vt__13TObjWarpLobby[];

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjWarpLobby;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
