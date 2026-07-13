#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1);
void* init_sub_objects__10TObjPlayerFPv(void* p);
int init_sub_object__10TObjPlayerFi(void*);
M2C_UNK __dl__FPv(s32);
int fn_801D6A18(void*);
M2C_UNK destroy_particle__13TParticleCtrlFPv();
int reset_particle_ctrl__10TObjPlayerFPv(void*);

s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy_particle__13TParticleCtrlFPv();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void* init_sub_objects__10TObjPlayerFPv(void* p) { init_sub_object__10TObjPlayerFi((char*)p + 0x8); init_sub_object__10TObjPlayerFi((char*)p + 0x18); init_sub_object__10TObjPlayerFi((char*)p + 0x28); init_sub_object__10TObjPlayerFi((char*)p + 0x38); init_sub_object__10TObjPlayerFi((char*)p + 0x48); fn_801D6A18((char*)p + 0x58); *(int*)((char*)p + 0x4) = 0; reset_particle_ctrl__10TObjPlayerFPv(p); return p; }

}
