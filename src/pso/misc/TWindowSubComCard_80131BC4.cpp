#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 realloc_buffer__17TWindowSubComCardFPv(void *arg0);
int is_active__16TKeyBoardControlFPv(void*);
int is_key_active__16TKeyBoardControlFPv(void*);
int get_field_6c__19TWindowKeyBoardSoftFPv(void*);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
s32 alloc_buffer__11TOBoss4RockFPv();
s32 TWindowKeyBoardSoft__sub_8025C974(s32, s32);
s32 TWindowKeyBoardSoft__sub_8025CA70(s32);
int is_keyboard_active__17TWindowSubComCardFPv(void* p);
int update_keyboard__17TWindowSubComCardFPv(void* p);

s32 realloc_buffer__17TWindowSubComCardFPv(void *arg0) {
    s32 temp_r3;

    TWindowKeyBoardSoft__sub_8025CA70(M2C_FIELD(arg0, s32 *, 0x20));
    temp_r3 = alloc_buffer__11TOBoss4RockFPv();
    TWindowKeyBoardSoft__sub_8025C974(M2C_FIELD(arg0, s32 *, 0x20), temp_r3);
    return temp_r3;
}

}
