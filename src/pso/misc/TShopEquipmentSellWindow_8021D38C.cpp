#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1);
void TWindowSubComCard__sub_80244A14(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x38C)); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x390)); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        if (M2C_FIELD(arg0, void **, 0x394) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x394)); M2C_FIELD(arg0, M2C_UNK *, 0x394) = 0; }
        if (M2C_FIELD(arg0, void **, 0x39C) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x39C)); M2C_FIELD(arg0, M2C_UNK *, 0x39C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x398) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x398)); M2C_FIELD(arg0, M2C_UNK *, 0x398) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3A0) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x3A0)); M2C_FIELD(arg0, M2C_UNK *, 0x3A0) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
