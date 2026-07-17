#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
int test_keyboard_card_flag4(void* p);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void TWindowMainMenu__sub_80264A64(void) {  }
void TWindowMainMenu__vt7(void) {  }
int test_keyboard_card_flag4(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 4); }

}
