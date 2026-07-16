#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1);
void destroy__15TPlyPhotonChairFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void destroy__11TMainCursorFPvs(void *, int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__15TPlyPhotonChair[];

void *__dt__15TPlyPhotonChairFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TPlyPhotonChair;
        destroy__11TMainCursorFPvs((s8 *)arg0 + 0xD0, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0xB4, -1);
        destroy__15TPlyPhotonChairFPvs((s8 *)arg0 + 0x98, -1);
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
