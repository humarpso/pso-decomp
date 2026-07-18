#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_boss_objects__15TObjEneDimedianFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D5070;
extern u32 lbl_805D5074;
extern u32 lbl_805D5078;
extern u32 lbl_805D507C;
extern u32 lbl_805D5080;
extern u32 lbl_805D5084;
extern u32 lbl_805D5088;

void free_boss_objects__15TObjEneDimedianFv(void) {
    if ((u32) lbl_805D5070 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5070);
        lbl_805D5070 = 0U;
    }
    if ((u32) lbl_805D5074 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5074);
        lbl_805D5074 = 0U;
    }
    if ((u32) lbl_805D5078 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5078);
        lbl_805D5078 = 0U;
    }
    if ((u32) lbl_805D507C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D507C);
        lbl_805D507C = 0U;
    }
    if ((u32) lbl_805D5088 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5088, 1);
        lbl_805D5088 = 0U;
    }
    if ((u32) lbl_805D5084 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D5084, 1);
        lbl_805D5084 = 0U;
    }
    if ((u32) lbl_805D5080 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5080, 1);
        lbl_805D5080 = 0U;
    }
}

}
