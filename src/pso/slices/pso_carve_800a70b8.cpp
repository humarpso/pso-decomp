#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
extern u32 lbl_805D5044;
extern u32 lbl_805D5050;
extern u32 lbl_805D5064;
extern u32 lbl_805D5068;
extern u32 lbl_805D506C;

void fn_800A70B8(void) {
    if ((u32) lbl_805D5044 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5044);
        lbl_805D5044 = 0U;
    }
    if ((u32) lbl_805D5064 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5064, 1);
        lbl_805D5064 = 0U;
    }
    if ((u32) lbl_805D5068 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5068, 1);
        lbl_805D5068 = 0U;
    }
    if ((u32) lbl_805D506C != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D506C, 1);
        lbl_805D506C = 0U;
    }
    if ((u32) lbl_805D5050 != 0U) {
        fn_8001FE7C((void*)lbl_805D5050, 1);
        lbl_805D5050 = 0U;
    }
}

}
