#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(void *);
M2C_UNK fn_80222B64(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804C8714[];
extern s32 TQuestVmDownLoadServer__data_805D5F18;
extern s32 TQuestVmDownLoadServer__data_805D5F24;

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)lbl_804C8714;
        M2C_FIELD(arg0, void **, 0x1C) = (void *) ((u8 *)lbl_804C8714 + 0x18);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            TAdSinglePlyChrSelectGC__sub_8007EBB4(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x29C));
            M2C_FIELD(arg0, u32 *, 0x29C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x290));
            M2C_FIELD(arg0, u32 *, 0x290) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x28C));
            M2C_FIELD(arg0, u32 *, 0x28C) = 0U;
        }
        close_message__22TQuestVmDownLoadServerFPv(arg0);
        TQuestVmDownLoadServer__data_805D5F24 = 0;
        TQuestVmDownLoadServer__data_805D5F18 = 0;
        fn_80222B64(arg0 + 0x1C, 0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
