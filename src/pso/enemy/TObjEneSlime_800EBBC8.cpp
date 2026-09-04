#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1);
void free_instance__12TObjEneSlimeFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneSlime__sub_800EB910(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__12TObjEneSlime[];

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneSlime;
        TObjEneSlime__sub_800EB910(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D52B0;

void free_instance__12TObjEneSlimeFv(void) {
    if ((u32) lbl_805D52B0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52B0, 1);
        lbl_805D52B0 = 0U;
    }
}

}
