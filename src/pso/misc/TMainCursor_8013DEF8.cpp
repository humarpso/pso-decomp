#include "types.h"
#include "pso/misc/TMainCursor.h"

extern "C" {
void TObjPlayer__sub_8013DEF8(u8 *arg0);
}

extern "C" {

u16 TMainCursor__sub_8013E03C(void* p);
int __dl__FPv();
s32 destroy__13TForceOperateFls(s32 arg0, s16 arg1);
int find_action_slot_for_target__11TMainCursorFllll(void*);
s32 get_state__11TMainCursorFv(void* p);
void set_field_0__13TForceOperateFs(void* p, s16 v);
void set_mode__20TWindowActionPaletteFUc(void* p, u8 v);
void set_slot__20TWindowActionPaletteFUc(void* p, u8 v);

void TObjPlayer__sub_8013DEF8(u8 *arg0) {
    *(s16 *)((s8 *)arg0 + 2) = (s16) (*(s16 *)((s8 *)arg0 + 2) | 1);
}

u8 TMainCursor::is_channel_active() {
    u8 *arg0 = (u8 *)this;
    return (u8) ((*(s16 *)((s8 *)arg0 + 2) & 1) ^ 1);
}

int TMainCursor::check_visible() { return find_action_slot_for_target__11TMainCursorFllll(this); }
u8 TMainCursor::get_enabled() { return *(u8*)((char*)this + 0x1); }
u8 TMainCursor::get_type() { return *(u8*)((char*)this + 0x0); }

}
