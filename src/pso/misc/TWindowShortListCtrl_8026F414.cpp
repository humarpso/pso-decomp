#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
s32 TWindowCtrl__sub_8024A1A8();
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8026F6C0();

extern void *__vt__20TWindowShortListCtrl[];

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__20TWindowShortListCtrl;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
        if ((temp_r3 != 0) && (TWindowCtrl__sub_8024AF74(M2C_FIELD(arg0, s32 *, 0x24)) == 0) && (TWindowCtrl__sub_8024A1A8() == 0)) {
            init_parts__10TObjPlayerFPv(temp_r3);
        }
        TWindowChat__sub_8024AD30(M2C_FIELD(arg0, s32 *, 0x24));
        TWindowCtrl__sub_8026F6C0();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
