#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(void *);
M2C_UNK TWindowSubItem__sub_801F8FD4(void *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8033A8EC();

extern s32 lbl_805D49B4;

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        TAdSinglePlyChrSelectGC__sub_8033A8EC();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            TAdSinglePlyChrSelectGC__sub_8007EBB4(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            TWindowSubItem__sub_801F8FD4(M2C_FIELD(arg0, void **, 0x28C));
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xE;
        lbl_805D49B4 = 0;
    }
}

}
