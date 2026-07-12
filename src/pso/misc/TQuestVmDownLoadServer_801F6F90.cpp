#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK update_state__13TAdMcSelectGCFv();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubItem__sub_801F8FD4(void *);

extern s32 TQuestVmDownLoadServer__data_805D5F18;

void close__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
        M2C_FIELD(arg0, u32 *, 0x260) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
        TWindowSubItem__sub_801F8FD4(M2C_FIELD(arg0, void **, 0x28C));
    }
    update_state__13TAdMcSelectGCFv();
    TQuestVmDownLoadServer__sub_801F6E08(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x29, 1), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__data_805D5F18 = 0;
}

}
