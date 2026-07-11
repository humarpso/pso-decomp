#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_all__9TObjGrassFv(void);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
void fn_8001FE7C(void*, int);

extern u32 TObjGrass__data_805D5144;
extern u32 TObjGrass__data_805D5154;
extern u32 lbl_805D5158;
extern u32 lbl_805D515C;

void destroy_all__9TObjGrassFv(void) {
    if ((u32) TObjGrass__data_805D5144 != 0U) {
        free__11TOBoss4RockFUi((void*)TObjGrass__data_805D5144);
        TObjGrass__data_805D5144 = 0U;
    }
    if ((u32) lbl_805D515C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D515C, 1);
        lbl_805D515C = 0U;
    }
    if ((u32) lbl_805D5158 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5158, 1);
        lbl_805D5158 = 0U;
    }
    if ((u32) TObjGrass__data_805D5154 != 0U) {
        fn_8001FE7C((void*)TObjGrass__data_805D5154, 1);
        TObjGrass__data_805D5154 = 0U;
    }
}

}
