#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *lbl_805D5C28;
void TObjFish__sub_803DA798(void *);
void TObjPlayer__sub_803D9B2C(void);
void TOHangerMachine01__sub_803D9C00(void *);
void TObjPlayer__sub_803D9214(int, void *);
void TObjBoss2Tunnel__sub_803DB470(void *);
void TObjPlayer__sub_803D9B78(void);

void draw_model__18TObjLazerFenceNormFPv(void *arg0) {
    TObjFish__sub_803DA798(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, void **, 0x60));
    TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, void **, 0xBC));
    TObjPlayer__sub_803D9B78();
}

}
