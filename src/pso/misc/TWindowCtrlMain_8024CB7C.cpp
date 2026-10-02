#include "pso/misc/WindowControlState.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8024CCDC { u8 p0[8]; f32 f8; f32 fC; u8 p10[0xC]; };
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

extern "C" {
s32 is_split_screen(void);
extern s32 TWindowCtrlMain__data_805D6400;
extern s32 TWindowCtrlMain__data_805D6408;
extern WindowControlState TWindowCtrlMain__data_80518730[6];
void TWindowCtrlMain__sub_8024CCDC(void);
s32 TWindowCtrlMain__sub_8024CD5C(s32 viewport_index);
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1);
s32 TWindowCtrlMain__sub_8024CDB0(void* p);
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0);
s32 TWindowCtrlMain__sub_8024CE24(void);
s32 TWindowCtrlMain__sub_8024CE34(void);
s32 TWindowCtrlMain__sub_8024CE44(void);
bool TWindowCtrlMain__sub_8024CE58(void);

void TWindowCtrlMain__sub_8024CB7C() {
    TWindowCtrlMain__data_805D6400 |= 1;
}

void TWindowCtrlMain__sub_8024CB8C() {
    TWindowCtrlMain__data_805D6400 &= ~1;
}

f32 get_field_18__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field18;
}

f32 get_ctrl_field14__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field14;
}

f32 get_field10__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field10;
}

f32 get_position_z__15TWindowCtrlMainFv(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field0C;
}

void set_field18__15TWindowCtrlMainFf(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field18 = value;
}

void set_depth__15TWindowCtrlMainFf(f32 value, s32 viewport_index) {
    get_window_control_state(viewport_index)->field0C = value;
}

WindowControlState* get_window_control_state(s32 viewport_index) {
    if (is_split_screen()) {
        return &TWindowCtrlMain__data_80518730[viewport_index];
    }
    return TWindowCtrlMain__data_80518730;
}
void TWindowCtrlMain__sub_8024CCDC(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Ent_8024CCDC *e = &((Ent_8024CCDC *)&TWindowCtrlMain__data_80518730)[i];
        f32 *q;
        if (e->fC >= 0.1f) {
            e->f8 += 0.09f;
        } else {
            e->f8 -= 0.09f;
        }
        q = &e->f8;
        if (*q > 1.0f) {
            *q = 1.0f;
        }
        if (*q < 0.0f) {
            *q = 0.0f;
        }
    }
}

s32 TWindowCtrlMain__sub_8024CD5C(s32 viewport_index) {
    return get_window_control_state(viewport_index)->field04;
}
void set_value__15TWindowCtrlMainFii(s32 arg0, s32 arg1) {
    get_window_control_state(arg0)->field04 = arg1;
}
s32 TWindowCtrlMain__sub_8024CDB0(void* p) { return TWindowCtrlMain__sub_8024CDD0((s32)(p)); }

#define TWindowCtrlMain__data_80518730 (*(RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730 *)TWindowCtrlMain__data_80518730)
typedef char RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730_size[sizeof(RecoveredGlobal_8024CDD0_TWindowCtrlMain__data_80518730) == 0xA8 ? 1 : -1];
s32 TWindowCtrlMain__sub_8024CDD0(s32 arg0) {
    if (is_split_screen() != 0) {
        return M2C_FIELD(&TWindowCtrlMain__data_80518730.value, s32 *, (arg0 * 0x1C));
    }
    return TWindowCtrlMain__data_80518730.value;
}
s32 TWindowCtrlMain__sub_8024CE24(void) {
    return M2C_FIELD(&(*(RecoveredGlobal_8024CE24_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__data_80518730).value, s32 *, 0x8C);
}
s32 TWindowCtrlMain__sub_8024CE34(void) {
    return M2C_FIELD(&(*(RecoveredGlobal_8024CE34_TWindowCtrlMain__data_80518730 *)&TWindowCtrlMain__data_80518730).value, s32 *, 0x70);
}
#undef TWindowCtrlMain__data_80518730

s32 TWindowCtrlMain__sub_8024CE44(void) {
    if (TWindowCtrlMain__data_805D6400 & 1) return 0;
    return 1;
}

bool TWindowCtrlMain__sub_8024CE58(void) {
    return TWindowCtrlMain__data_805D6408 != 0;
}

}
