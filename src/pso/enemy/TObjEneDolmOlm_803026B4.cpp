#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_shared_resources__14TObjEneDolmOlmFv(void);
void __dt__11TBoss4Type3FPvs(void*, int);
void free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);

extern u32 lbl_805D6A00;
extern u32 lbl_805D6A04;
extern u32 lbl_805D6A08;
extern u32 TObjEneDolmOlm__data_805D6A0C;
extern u32 TObjEneDolmOlm__data_805D6A10;
extern u32 TObjEneDolmOlm__data_805D6A14;
extern u32 TObjEneDolmOlm__data_805D6A18;

void free_shared_resources__14TObjEneDolmOlmFv(void) {
    if ((u32) lbl_805D6A00 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A00);
        lbl_805D6A00 = 0U;
    }
    if ((u32) lbl_805D6A04 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A04);
        lbl_805D6A04 = 0U;
    }
    if ((u32) lbl_805D6A08 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6A08);
        lbl_805D6A08 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A0C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneDolmOlm__data_805D6A0C);
        TObjEneDolmOlm__data_805D6A0C = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A18 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A18, 1);
        TObjEneDolmOlm__data_805D6A18 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A14 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)TObjEneDolmOlm__data_805D6A14, 1);
        TObjEneDolmOlm__data_805D6A14 = 0U;
    }
    if ((u32) TObjEneDolmOlm__data_805D6A10 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneDolmOlm__data_805D6A10, 1);
        TObjEneDolmOlm__data_805D6A10 = 0U;
    }
}

}
