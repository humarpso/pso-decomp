#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK TAdMcSelectGC__sub_80329DA4();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK fn_8007EBB4(void *);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_801F8FD4(void *);

extern s32 lbl_805D5F18;

void close__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
        fn_8007EBB4(M2C_FIELD(arg0, void **, 0x260));
        M2C_FIELD(arg0, u32 *, 0x260) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
        fn_801F8FD4(M2C_FIELD(arg0, void **, 0x28C));
    }
    TAdMcSelectGC__sub_80329DA4();
    TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_80132F2C(0x29, 1), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    lbl_805D5F18 = 0;
}

}
