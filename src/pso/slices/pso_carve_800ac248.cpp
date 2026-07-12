#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TLobby__sub_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
extern u32 lbl_805D50A8;
extern u32 lbl_805D50AC;
extern u32 lbl_805D50B0;
extern u32 lbl_805D50B4;
extern u32 lbl_805D50B8;
extern u32 lbl_805D50BC;
extern u32 lbl_805D50C0;

void fn_800AC248(void) {
    if ((u32) lbl_805D50A8 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50A8);
        lbl_805D50A8 = 0U;
    }
    if ((u32) lbl_805D50AC != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50AC);
        lbl_805D50AC = 0U;
    }
    if ((u32) lbl_805D50B0 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B0);
        lbl_805D50B0 = 0U;
    }
    if ((u32) lbl_805D50B4 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D50B4);
        lbl_805D50B4 = 0U;
    }
    if ((u32) lbl_805D50C0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50C0, 1);
        lbl_805D50C0 = 0U;
    }
    if ((u32) lbl_805D50BC != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D50BC, 1);
        lbl_805D50BC = 0U;
    }
    if ((u32) lbl_805D50B8 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D50B8, 1);
        lbl_805D50B8 = 0U;
    }
}

}
