#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

extern "C" {
extern s8 TCameraCtrl__data_804FF628[];
u8 TCameraCtrl__sub_8006A5DC(void);
}

extern "C" {

void reset__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_80068354();

extern s8 TCameraCtrl__data_804FF628[];
extern s16 TCameraCtrl__data_805D4E0A;

void reset__11TCameraCtrlFv(void) {
    TCameraCtrl__data_805D4E0A = 0;
    TCameraCtrl__sub_80068354();
    M2C_FIELD(TCameraCtrl__data_804FF628, s8 *, 0) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s16 *, 2) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 4) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) = 0;
}
typedef char RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
u8 TCameraCtrl__sub_8006A5DC(void) {
    return (*(RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value;
}

}
