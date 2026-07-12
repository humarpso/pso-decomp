#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
int fn_80264A6C(void* p);
s32 TWindowSubStatusDisp__sub_80077760(s32);
s8 TLobby__sub_8013AD64();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void TWindowMainMenu__sub_80264A64(void) {  }
void TWindowMainMenu__vt7(void) {  }
int fn_80264A6C(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 4); }

}
