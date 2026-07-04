#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F70E4(void *arg0);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 fn_8006EF6C(M2C_UNK);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
s32 fn_80243218(s32, M2C_UNK *, s32, s32);
M2C_UNK fn_8033A8FC(s32);

extern M2C_UNK lbl_8044BEF4[];
extern s32 lbl_805D49B4;

void TQuestVmDownLoadServer__sub_801F70E4(void *arg0) {
    fn_8033A8FC(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (fn_80243218(M2C_FIELD(arg0, s32 *, 0x25C), lbl_8044BEF4, M2C_FIELD(arg0, s32 *, 0x260), M2C_FIELD(arg0, s32 *, 0x26C)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x10;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_80132F2C(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

}
