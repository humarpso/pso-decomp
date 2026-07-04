#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss4Type3__sub_8005A7AC(void *arg0);
void TBoss4Type3__sub_8005A438(void *);
void TOHangerMachine01__sub_803D9C00(void *);
void fn_80051E9C(int, f32);
void fn_800D8A2C(void *);
void fn_801E2F20(void);
void fn_803D9214(int, void *);
void fn_803D9B2C(void);
void fn_803D9B78(void);

void TBoss4Type3__sub_8005A7AC(void *arg0) {
    fn_800D8A2C(arg0);
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    fn_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TBoss4Type3__sub_8005A438(arg0);
    fn_803D9B78();
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1152));
    fn_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    fn_80051E9C(M2C_FIELD(arg0, u16 *, 0x3BA), M2C_FIELD(arg0, f32 *, 0x3C8));
    fn_803D9B78();
    fn_801E2F20();
}

}
