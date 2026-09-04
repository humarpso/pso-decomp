#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_801C64C0(void *arg0, s16 arg1);
void new_child_object__10TObjPlayerFi(s32 arg0);
void __dl__7TObjectFPv(void *);
void* __nw__7TObjectFUl(M2C_UNK);
void dt__13TParticleCtrlFPvs(void *, int);
void* init_attack_ctrl__10TObjPlayerFPvUsUs(void*, s32, s32);

extern s32 tl_07;

void new_child_object__10TObjPlayerFi(s32 arg0) {
    void *obj = __nw__7TObjectFUl(0x24);
    if (obj != 0) {
        init_attack_ctrl__10TObjPlayerFPvUsUs(obj, tl_07, arg0);
    }
}

extern M2C_UNK lbl_804C3FD8[];

void *TObjPlayer__sub_801C64C0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C3FD8;
        dt__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
