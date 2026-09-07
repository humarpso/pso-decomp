#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028EC24_lbl_8051C07C {
    s8 value;
    u8 remaining[0x17];
};

struct RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

extern "C" {
extern RecoveredGlobal_8028EC24_lbl_8051C07C lbl_8051C07C;
void TObjCMMainMenu__sub_8028EC24(void);
extern RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8 TObjCMMainMenu__data_804DB9C8;
s32 TObjCMMainMenu__sub_8028EBCC(u8 *arg0);
}

extern "C" {

void TObjCMMainMenu__sub_8028EC18(void);
void TObjCMMainMenu__sub_8028EC34(void);
u8 is_state_3__14TObjCMMainMenuFv(void);
u8 is_state_4__14TObjCMMainMenuFv(void);

extern s32 TObjCMMainMenu__data_805D659C;

typedef char RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_8028EBCC_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];
s32 TObjCMMainMenu__sub_8028EBCC(u8 *arg0) {
    return M2C_FIELD(((u8 *)(&TObjCMMainMenu__data_804DB9C8.value) + (M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x24) + (M2C_FIELD(arg0, s32 *, 0x2C) * 4)), s32 *, 0) * 0x10)), s32 *, 0);
}

u8 is_state_4__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 4);
}

extern s32 TObjCMMainMenu__data_805D659C;

u8 is_state_3__14TObjCMMainMenuFv(void) {
    return (u8) (TObjCMMainMenu__data_805D659C == 3);
}

    extern int lbl_805D652C;
void TObjCMMainMenu__sub_8028EC18(void) { lbl_805D652C = 1; }

    extern int lbl_805D652C;

typedef char RecoveredGlobal_8028EC24_lbl_8051C07C_size[sizeof(RecoveredGlobal_8028EC24_lbl_8051C07C) == 0x18 ? 1 : -1];
void TObjCMMainMenu__sub_8028EC24(void) {
    lbl_8051C07C.value = 0;
}

void TObjCMMainMenu__sub_8028EC34(void) { lbl_805D652C = 0; }

}
