#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TTecSlicerFv(void *arg0, s16 arg1);
void dt__10TTecSlicerFis(void *, int);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__10TTecSlicer[];

void *__dt__10TTecSlicerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecSlicer;
        if (M2C_FIELD(arg0, void **, 0x124) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x124)); }
        dt__10TTecSlicerFis((s8 *)arg0 + 0xE8, -1);
        dt__10TTecSlicerFis((s8 *)arg0 + 0xC8, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
