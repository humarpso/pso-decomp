#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void draw__15TObjLazerFence4FPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjBoss2Tunnel__sub_803DB470(void *);
void fn_803D9214(int, void *);
void fn_803D9B2C(void);
void fn_803D9B78(void);
void fn_803DA798(void *);

extern void *lbl_805D5C28;

void draw__15TObjLazerFence4FPv(void *arg0) {
    fn_803DA798(lbl_805D5C28);
    fn_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    fn_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0xC0));
    fn_803D9B78();
}

}
