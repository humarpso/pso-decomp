#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void grow_field200_if_small__10TObjPlayerFPv(u8 *arg0);
void TObjPlayer__sub_80129A14(u8 *arg0);
void* init_dead_state__10TObjPlayerFPv(void* a0);
M2C_UNK TObjPlayer__sub_80115BC0(void *, M2C_UNK, M2C_UNK);
int TObjPlayer__sub_8012106C(void*, void*);
int TObjPlayer__sub_8012A884(void);

void grow_field200_if_small__10TObjPlayerFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x200) < 0x2000) {
        TObjPlayer__sub_80115BC0(arg0 + 0x200, 0x2D8, 0x2000);
    }
}

void TObjPlayer__sub_80129A14(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x200) > 0) {
        TObjPlayer__sub_80115BC0(arg0 + 0x200, -0x2000, 0);
    }
}

    extern unsigned char fn_8011B620[];
    extern unsigned char lbl_804A444C[];
    extern const float lbl_805DAE40;
void* init_dead_state__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A444C; *(int*)((char*)a0 + 0x200) = 8192; TObjPlayer__sub_8012106C(a0, (void*)2); *(int*)((char*)a0 + 0x1f0) = (int)fn_8011B620; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE40; return a0; }

}
