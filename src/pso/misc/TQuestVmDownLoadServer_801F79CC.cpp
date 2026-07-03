#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TQuestVmDownLoadServer__sub_801F79CC(void *arg0);
M2C_UNK TAdMcSelectGC__sub_80329DA4();
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80073DB8(u32);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
s32 fn_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK fn_801F8FD4(void *);

void TQuestVmDownLoadServer__sub_801F79CC(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
        if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x290));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2A0) = 7;
                return;
            }
            if (temp_r3 == 1) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                    fn_801F8FD4(M2C_FIELD(arg0, void **, 0x28C));
                }
                TAdMcSelectGC__sub_80329DA4();
                TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_80132F2C(0x29, 1), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
                return;
            }
            goto block_12;
        }
block_12:
        if (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                M2C_FIELD(arg0, u32 *, 0x290) = 0U;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                fn_801F8FD4(M2C_FIELD(arg0, void **, 0x28C));
            }
            TAdMcSelectGC__sub_80329DA4();
            TQuestVmDownLoadServer__sub_801F6E08(arg0, fn_80132F2C(0x29, 1), 1);
            M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
        }
    }
}

}
