#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_800790F0_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_800790F0_lbl_804F5800 lbl_804F5800;
s32 TAdEndText__sub_800790F0(u8 arg0);
}

extern "C" {

void TObjPlayer__sub_80079108(void);
void TObjPlayer__sub_8007910C(void);
void TObjPlayer__sub_80079110(void);
void TObjPlayer__sub_80079114(void);
void TObjPlayer__sub_80079118(void);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079120(void);
void TObjPlayer__sub_80079124(void);

typedef char RecoveredGlobal_800790F0_lbl_804F5800_size[sizeof(RecoveredGlobal_800790F0_lbl_804F5800) == 0x100 ? 1 : -1];
s32 TAdEndText__sub_800790F0(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804F5800.value) + arg0), u8 *, 0) & 0xC0;
}

void TObjPlayer__sub_80079108(void) {  }
void TObjPlayer__sub_8007910C(void) {  }
void TObjPlayer__sub_80079110(void) {  }
void TObjPlayer__sub_80079114(void) {  }
void TObjPlayer__sub_80079118(void) {  }
void TObjPlayer__sub_8007911C(void) {  }
void TObjPlayer__sub_80079120(void) {  }
void TObjPlayer__sub_80079124(void) {  }
void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    *(M2CCopy_C *)((s32) arg0 + 0x14) = *(const M2CCopy_C *)((s32) arg1 + 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
}

}
