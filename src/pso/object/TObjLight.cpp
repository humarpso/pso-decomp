#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_split_screen(void);
u8 * TObjLight__ct(void *, M2C_UNK, void *);
u8 *__nw__7TObjectFUl(M2C_UNK);
extern s32 tl_05;
u8 *TObjLight__create(u8 *arg0);
}

extern "C" {

void *__dt__9TObjLightFv(void *arg0, s16 arg1);
void render__9TObjLightFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void fn_8020C430(void *, int);

void render__9TObjLightFv(void) {  }

extern M2C_UNK __vt__9TObjLight[];

void *__dt__9TObjLightFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TObjLight;
        fn_8020C430(arg0, -3);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjLight__create(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (is_split_screen() != 0) {
        return NULL;
    }
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x100));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TObjLight__ct(temp_r3, tl_05, arg0));
    }
    return var_r0;
}

}
