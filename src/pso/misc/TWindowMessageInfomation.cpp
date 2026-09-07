#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026A100___vt__24TWindowMessageInfomation {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
u8 * TWindowMessage__ct(void *, s32, u32, s16);
extern M2C_UNK __vt__24TWindowMessageInfomation[];
extern s32 lbl_805D3988;
u8 *TWindowMessageInfomation__ct(u8 *arg0, s32 arg1, s16 arg2);
}

extern "C" {

void *__dt__24TWindowMessageInfomationFv(void *arg0, s16 arg1);
void render__24TWindowMessageInfomationFv(s32 arg0);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void __dl__7TObjectFPv(void *);
void __dt__14TWindowMessageFv(void *, int);

void render__24TWindowMessageInfomationFv(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubStatusDisp__sub_80244364();
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, (s32)tmp);
}

extern M2C_UNK __vt__24TWindowMessageInfomation[];

void *__dt__24TWindowMessageInfomationFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TWindowMessageInfomation;
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8026A100___vt__24TWindowMessageInfomation_size[sizeof(RecoveredGlobal_8026A100___vt__24TWindowMessageInfomation) == 0x18 ? 1 : -1];
u8 *TWindowMessageInfomation__ct(u8 *arg0, s32 arg1, s16 arg2) {
    TWindowMessage__ct(arg0, arg1, 0x10U, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026A100___vt__24TWindowMessageInfomation *)&__vt__24TWindowMessageInfomation).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3988;
    return arg0;
}

}
