#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__16TObjVoloptPillar[];

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjVoloptPillar;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8004A4DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cache_target_values__16TObjVoloptPillarFv(void);

extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;

void cache_target_values__16TObjVoloptPillarFv(void) {
    lbl_805D4D38 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x178);
    lbl_805D4D40 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x17C);
    lbl_805D4D3C = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x158);
    lbl_805D4D44 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x15C);
}

}
#endif
#endif
