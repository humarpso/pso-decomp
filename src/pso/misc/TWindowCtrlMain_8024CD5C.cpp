#include "pso/misc/WindowControlState.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 {
    s32 value;
    u8 remaining[0xA4];
};

struct RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730 {
    M2C_UNK value;
    u8 remaining[0xA4];
};

struct RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730 {
    M2C_UNK value;
    u8 remaining[0xA4];
};

#include "types.h"

extern "C" {
s32 is_split_screen(void);
extern RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 TWindowCtrlMain__data_80518730;
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0);
extern RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 TWindowCtrlMain__data_80518730;
s32 TWindowCtrlMain__sub_8024CE24(void);
extern RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 TWindowCtrlMain__data_80518730;
s32 TWindowCtrlMain__sub_8024CE34(void);
extern s32 TWindowCtrlMain__data_805D6408;
bool TWindowCtrlMain__sub_8024CE58(void);
extern u32 TWindowCtrlMain__data_805D6400;
s32 TWindowCtrlMain__sub_8024CE44(void);
}

extern "C" {

s32 TWindowCtrlMain__sub_8024CD5C(s32 viewport_index);
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1);
s32 TWindowCtrlMain__sub_8024CDB0(void* p);

s32 TWindowCtrlMain__sub_8024CD5C(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field04;
}
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1) {
    get_window_control_state(arg0)->field04 = arg1;
}
s32 TWindowCtrlMain__sub_8024CDB0(void* p) { return TWindowCtrlMain__sub_8024CDD0((s32)(p)); }
typedef char RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730_size[sizeof(RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730) == 0xA8 ? 1 : -1];
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0) {
    if (is_split_screen() != 0) {
        return M2C_FIELD(&TWindowCtrlMain__data_80518730.value, s32 *, (arg0 * 0x1C));
    }
    return TWindowCtrlMain__data_80518730.value;
}
typedef char RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730_size[sizeof(RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730) == 0xA8 ? 1 : -1];
s32 TWindowCtrlMain__sub_8024CE24(void) {
    return M2C_FIELD(&(*(RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__data_80518730).value, s32 *, 0x8C);
}
typedef char RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730_size[sizeof(RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730) == 0xA8 ? 1 : -1];
s32 TWindowCtrlMain__sub_8024CE34(void) {
    return M2C_FIELD(&(*(RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__data_80518730).value, s32 *, 0x70);
}

s32 TWindowCtrlMain__sub_8024CE44(void) {
    if (TWindowCtrlMain__data_805D6400 & 1) return 0;
    return 1;
}

bool TWindowCtrlMain__sub_8024CE58(void) {
    return TWindowCtrlMain__data_805D6408 != 0;
}

}
