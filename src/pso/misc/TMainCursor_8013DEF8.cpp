#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 is_channel_active__11TMainCursorFPv(u8 *arg0);
void TObjPlayer__sub_8013DEF8(u8 *arg0);
}

extern "C" {

int check_visible__11TMainCursorFPv(void* p);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
u16 TMainCursor__sub_8013E03C(void* p);
int __dl__FPv();
s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int find_action_slot_for_target__11TMainCursorFiiii(void*);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);

void TObjPlayer__sub_8013DEF8(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg0, s16 *, 2) | 1);
}

u8 is_channel_active__11TMainCursorFPv(u8 *arg0) {
    return (u8) ((M2C_FIELD(arg0, s16 *, 2) & 1) ^ 1);
}

int check_visible__11TMainCursorFPv(void* p) { return find_action_slot_for_target__11TMainCursorFiiii(p); }
u8 get_enabled__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x1); }
u8 get_type__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x0); }

}
