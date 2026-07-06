#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TQuestListVMFv(void *arg0, s16 arg1);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__15TShopWindowBaseFv(void *, M2C_UNK);
M2C_UNK fn_8001EDF4(M2C_UNK *);
M2C_UNK fn_8007EBB4(void *);

extern M2C_UNK lbl_8044BF20[];
extern M2C_UNK __vt__12TQuestListVM[];
extern s32 lbl_805D6210;

void *__dt__12TQuestListVMFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **) ((s8 *) arg0 + 0x18) = __vt__12TQuestListVM;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x237C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x237C));
            M2C_FIELD(arg0, u32 *, 0x237C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2378) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2378));
            M2C_FIELD(arg0, u32 *, 0x2378) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2374));
            M2C_FIELD(arg0, u32 *, 0x2374) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2388) != 0U) {
            fn_8007EBB4(M2C_FIELD(arg0, void **, 0x2388));
            M2C_FIELD(arg0, u32 *, 0x2388) = 0U;
        }
        lbl_805D6210 = 0;
        fn_8001EDF4(lbl_8044BF20);
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
