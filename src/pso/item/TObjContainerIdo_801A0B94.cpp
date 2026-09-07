#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
int TObjPlayer__sub_801569F4(void);
extern M2C_UNK lbl_804B97C0[];
    extern const float lbl_805DC078;
    extern const float lbl_805DC07C;
void* init_positions__16TObjContainerIdoFPv(void* a0);
}

extern "C" {

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804B97C0[];

void *dt__16TObjContainerIdoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B97C0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init_positions__16TObjContainerIdoFPv(void* a0) { TObjPlayer__sub_801569F4(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_804B97C0); *(float*)((char*)a0 + 0xac) = lbl_805DC078; *(float*)((char*)a0 + 0xb0) = lbl_805DC07C; return a0; }

}
