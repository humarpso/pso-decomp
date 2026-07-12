#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK TQuestThread__sub_801F64BC(s32);
M2C_UNK TAdChrSelASlotGC__sub_800740FC(s32);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_80265CFC(s32, f32);
s32 TAdChrSelASlotGC__sub_80266508(void *, M2C_UNK, s32);

extern u8 lbl_804783B8[];
extern f32 lbl_805DFAD8;

s32 create__12TAdMcCheckGCFPvi(void *arg0, s32 arg1) {
    s32 temp_r31;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x28) * 8;
    temp_r31 = TAdChrSelASlotGC__sub_80266508(lbl_804783B8 + temp_r5, 1, temp_r5);
    TObjCityMainWarp__sub_80266354(temp_r31, TAdSinglePlyChrSelectGC__sub_80132F2C(0x16, arg1), 0x20, 0);
    TAdChrSelASlotGC__sub_800740FC(temp_r31);
    TQuestThread__sub_801F64BC(temp_r31);
    TWindowSubComCard__sub_80265CFC(temp_r31, lbl_805DFAD8);
    return temp_r31;
}

}
