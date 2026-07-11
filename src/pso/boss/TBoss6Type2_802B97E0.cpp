#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__11TBoss6Type2FPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void fn_80051D5C(void *, void *, void *, void *, void *, void *, void *, void *, f32);
void fn_803D9214(int, void *);
void fn_803D9B2C(void *);
void fn_803D9B78(void);

extern const f32 TBoss6Type2__data_805DE40C;

void draw__11TBoss6Type2FPv(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 65535) {
        fn_803D9B2C(arg0);
        TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 1568));
        fn_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
        fn_80051D5C((void *)((char *)arg0 + 1396), (void *)((char *)arg0 + 1404), (void *)((char *)arg0 + 1412), M2C_FIELD(arg0, void **, 0x58C), M2C_FIELD(arg0, void **, 0x590), M2C_FIELD(arg0, void **, 0x594), M2C_FIELD(arg0, void **, 0x598), M2C_FIELD(arg0, void **, 0x570), TBoss6Type2__data_805DE40C);
        fn_803D9B78();
    }
}

}
