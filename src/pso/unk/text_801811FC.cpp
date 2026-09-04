#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

f32 fn_801811FC(void* p);
f32 fn_80181204(void* p);
void *fn_8018120C(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

f32 fn_801811FC(void* p) { return *(f32*)((char*)p + 0x94); }
f32 fn_80181204(void* p) { return *(f32*)((char*)p + 0x90); }

extern M2C_UNK lbl_804B5908[];

void *fn_8018120C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5908;
        if (M2C_FIELD(arg0, void **, 0xA8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xA8)); }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
