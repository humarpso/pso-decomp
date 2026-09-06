#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen(void);
u8 * TObjFish__ct(void *, M2C_UNK, void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjFish__create(u8 *arg0);
}

extern "C" {

void *__dt__8TObjFishFv(void *arg0, s16 arg1);
void free_resource__8TObjFishFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);

extern M2C_UNK __vt__8TObjFish[];

void *__dt__8TObjFishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjFish;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0xA0)); M2C_FIELD(arg0, M2C_UNK *, 0xA0) = 0; }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TObjFish__data_805D65E8;

u8 *TObjFish__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0xA4));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjFish__ct(temp_r3, tl_05, arg0));
    }
    return var_r0;
}

void free_resource__8TObjFishFv(void) {
    if ((u32) TObjFish__data_805D65E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjFish__data_805D65E8, 1);
        TObjFish__data_805D65E8 = 0U;
    }
}

}
