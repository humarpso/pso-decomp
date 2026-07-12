#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 alloc_buffer__11TOBoss4RockFPv();
s32 fn_8025C974(s32, s32);
s32 fn_8025CA70(s32);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);
int TKeyBoardControl__sub_80131FA0(void*);
int TKeyBoardControl__sub_80131FAC(void*);
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);

int render__16TKeyBoardControlFv(void) { return 0; }

}
