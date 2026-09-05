#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
s32 TWindowCtrl__sub_8024A314(void);
void TObjPlayer__sub_801255EC(s32 arg0, s32 arg1);
u32 TLobby__sub_80101AB0(void);
s32 TObjPlayer__sub_80125678(u32 a0 = 0, s32 a1 = 0);
void TObjPlayer__sub_801255EC(s32 arg0, s32 arg1);
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
s32 TWindowCtrl__sub_8024A314(void);
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
extern void *TWindowCtrl__data_805D63F8;
void TObjPlayer__sub_801255EC(s32 arg0, s32 arg1);
}

extern "C" {

void TObjPlayer__sub_801255EC(s32 arg0, s32 arg1) {
    u32 temp_r3 = TLobby__sub_80101AB0();
    if (temp_r3 != 0U) {
        TObjPlayer__sub_80125678(temp_r3, arg1);
    }
}

}
