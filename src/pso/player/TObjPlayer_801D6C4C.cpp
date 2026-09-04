#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801D6D28(void *arg0);
s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1);
void* init_sub_objects__10TObjPlayerFPv(void* p);
void reset_particle_ctrl__10TObjPlayerFPv(s32 *arg0);
void set_level__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
M2C_UNK __dl__FPv(s32);
M2C_UNK destroy_particle__13TParticleCtrlFPv();
int fn_801D6A18(void*);
int init_sub_object__10TObjPlayerFi(void*);

void reset_particle_ctrl__10TObjPlayerFPv(s32 *arg0) {
    *arg0 = 0;
    destroy_particle__13TParticleCtrlFPv();
}

s32 destroy__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        destroy_particle__13TParticleCtrlFPv();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void* init_sub_objects__10TObjPlayerFPv(void* p) { init_sub_object__10TObjPlayerFi((char*)p + 0x8); init_sub_object__10TObjPlayerFi((char*)p + 0x18); init_sub_object__10TObjPlayerFi((char*)p + 0x28); init_sub_object__10TObjPlayerFi((char*)p + 0x38); init_sub_object__10TObjPlayerFi((char*)p + 0x48); fn_801D6A18((char*)p + 0x58); *(int*)((char*)p + 0x4) = 0; reset_particle_ctrl__10TObjPlayerFPv((s32 *)(p)); return p; }

s8 TObjPlayer__sub_801D6D28(void *arg0) {
    s32 temp_r3 = M2C_FIELD(arg0, s8 *, 0x13);
    if ((temp_r3 < 0) || (temp_r3 > 0x63)) {
        return 0;
    }
    return temp_r3;
}

void set_level__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x63)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x13) = var_r4;
}

}
