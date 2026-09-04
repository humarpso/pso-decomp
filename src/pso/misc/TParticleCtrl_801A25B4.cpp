#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_particle__13TParticleCtrlFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK fn_8020C430(void *, M2C_UNK);

extern M2C_UNK lbl_804B9870[];

void *destroy_particle__13TParticleCtrlFPvs(void *arg0, s16 arg1) {
    void *obj = arg0;
    u16 temp_r0;

    if (obj != NULL) {
        M2C_FIELD(obj, M2C_UNK **, 0x18) = lbl_804B9870;
        if ((u32) M2C_FIELD(obj, u32 *, 0x80) != 0U) {
            temp_r0 = M2C_FIELD(obj, u16 *, 0x1C);
            if ((temp_r0 >= 0x4000U) && (temp_r0 < 0xFFFFU)) {
                fn_8020C430(obj, -3);
                M2C_FIELD(obj, u32 *, 0x80) = 0U;
            }
        }
        __dt__7TObjectFv(obj, 0);
        if ((s16) arg1 > 0) {
            __dl__7TObjectFPv(obj);
        }
    }
    return obj;
}

}
