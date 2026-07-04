#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOTrapChainSawEdge__vt23(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void fn_803D9214(int, void *);
void fn_803D9B2C(void);
void fn_803D9B78(void);
void fn_803DA798(void *);
void fn_803DC894(void *, void *, f32);

void TOTrapChainSawEdge__vt23(void *arg0) {
    fn_803DA798(M2C_FIELD(arg0, void **, 0x24));
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    fn_803D9B2C();
    fn_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    fn_803D9214(0, M2C_FIELD(arg0, void **, 0xD4));
    fn_803DC894(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    fn_803D9B78();
    fn_803D9B78();
}

}
