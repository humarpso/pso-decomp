#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TObjBoss5FloorGrassFv(void);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
s32 fn_801A85A0();
M2C_UNK fn_803D9B2C();
M2C_UNK fn_803D9B78();
M2C_UNK fn_803DA798(s32);

extern void *lbl_805D4DD8;
extern s32 lbl_805D4DDC;

void render__19TObjBoss5FloorGrassFv(void) {
    if (fn_801A85A0() == 0) {
        fn_803D9B2C();
        fn_803DA798(lbl_805D4DDC);
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(M2C_FIELD(lbl_805D4DD8, void **, 0x42C), s32 *, 0x78));
        fn_803D9B78();
    }
}

}
