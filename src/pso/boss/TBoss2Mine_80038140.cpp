#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_80038140(void *arg0);
void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss2MineFv(void *, int);

extern f32 lbl_805D84FC;

void TBoss2Mine__sub_80038140(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805D84FC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

extern M2C_UNK lbl_80482EC0[];

void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
