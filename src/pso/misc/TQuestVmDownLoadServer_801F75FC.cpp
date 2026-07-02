#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F75FC(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK fn_8007EBB4(void *);
M2C_UNK fn_8033A8EC();

extern s32 lbl_805D49B4;

void TQuestVmDownLoadServer__sub_801F75FC(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        fn_8033A8EC();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            fn_8007EBB4(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xB;
        lbl_805D49B4 = 0;
    }
}

}
