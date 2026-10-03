#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_8001DC24();
M2C_UNK *TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 TWindowSubStatusDisp__sub_80228D80();
s32 TWindowChallengeResult__sub_80228DB4(void *, int);
s32 text_builder_append(void *);
s32 text_builder_reset();
s32 set_entry_display_value__20TWindowSubStatusDispFPvi(void *, int);
extern s32 lbl_805D63E8;
extern M2C_UNK lbl_805DCAB8;
void TWindowSubStatusDisp__sub_80244494(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1);
void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1);
void TWindowAddition__ct(void *, void *);
void TWindowDD__sub_802466E0(void *);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK lbl_804CDFE8[];

void *destroy_window__15TWindowAdditionFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CDFE8;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804CDFE8[];

void *construct_with_parent__15TWindowAdditionFPvPv(void *arg0, void *arg1) {
    TWindowDD__sub_802466E0(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CDFE8;
    TWindowAddition__ct(arg0, arg1);
    return arg0;
}
void TWindowSubStatusDisp__sub_80244494(s32 arg0, s32 arg1, s32 arg2) {
    text_builder_reset();
    text_builder_append((void *) (TQuestVmDownLoadServer__sub_8006EF6C(0x67)));
    TWindowSubStatusDisp__sub_80228D80();
    TWindowChallengeResult__sub_80228DB4((void *) (arg1), (int) (2U));
    text_builder_append((void *) (&lbl_805DCAB8));
    TWindowChallengeResult__sub_80228DB4((void *) (arg2), (int) (2U));
    set_entry_display_value__20TWindowSubStatusDispFPvi((void *) (arg0), (int) (TLobby__sub_8001DC24()));
    lbl_805D63E8 = arg1;
}

}
