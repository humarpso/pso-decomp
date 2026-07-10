#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__13TQuestColCtrlFv(void);
M2C_UNK TQuestColCtrl__ct(M2C_UNK, s32);
u32 __ct__7TObjectFP7TObject(M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);

extern u32 lbl_805D5C50;
extern s32 tl_05;

void init__13TQuestColCtrlFv(void) {
    u32 var_r3;

    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        var_r3 = __ct__7TObjectFP7TObject(var_r3, 0);
    }
    lbl_805D5C50 = var_r3;
    var_r3 = __nw__7TObjectFUl(0x1C);
    if (var_r3 != 0U) {
        TQuestColCtrl__ct(var_r3, tl_05);
    }
}

}
