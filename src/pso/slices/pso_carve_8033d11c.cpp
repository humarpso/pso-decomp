#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TCameraCtrl__sub_80069DA8();
void TObjFish__sub_800E3100(void *);
void request_destroy__11TBoss4Type2FUi(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804EF9EC[];

void *fn_8033D11C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EF9EC;
        TCameraCtrl__sub_80069DA8();
        if (M2C_FIELD(arg0, void **, 0x88) != NULL) { TObjFish__sub_800E3100(M2C_FIELD(arg0, void **, 0x88)); M2C_FIELD(arg0, M2C_UNK *, 0x88) = 0; }
        if (M2C_FIELD(arg0, void **, 0x8C) != NULL) { request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x8C)); M2C_FIELD(arg0, M2C_UNK *, 0x8C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
