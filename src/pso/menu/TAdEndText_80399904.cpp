#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8039994C_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399904_lbl_804F5A00 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_80399928_lbl_804F5900 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
extern RecoveredGlobal_8039994C_lbl_804F5800 lbl_804F5800;
s32 TAdEndText__sub_8039994C(u8 arg0);
extern RecoveredGlobal_80399904_lbl_804F5A00 lbl_804F5A00;
u32 TAdEndText__sub_80399904(s32 arg0);
extern RecoveredGlobal_80399928_lbl_804F5900 lbl_804F5900;
u32 TAdEndText__sub_80399928(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8039994C_lbl_804F5800_size[sizeof(RecoveredGlobal_8039994C_lbl_804F5800) == 0x100 ? 1 : -1];

typedef char RecoveredGlobal_80399904_lbl_804F5A00_size[sizeof(RecoveredGlobal_80399904_lbl_804F5A00) == 0x100 ? 1 : -1];
u32 TAdEndText__sub_80399904(s32 arg0) {
    if (arg0 == -1) {
        return -1U;
    }
    return M2C_FIELD(((u8 *)(&lbl_804F5A00.value) + (u8) arg0), u8 *, 0);
}

typedef char RecoveredGlobal_80399928_lbl_804F5900_size[sizeof(RecoveredGlobal_80399928_lbl_804F5900) == 0x100 ? 1 : -1];
u32 TAdEndText__sub_80399928(s32 arg0) {
    if (arg0 == -1) {
        return -1U;
    }
    return M2C_FIELD(((u8 *)(&lbl_804F5900.value) + (u8) arg0), u8 *, 0);
}

s32 TAdEndText__sub_8039994C(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804F5800.value) + arg0), u8 *, 0) & 0x40;
}

}
