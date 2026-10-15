#include "types.h"
#include "pso/misc/TWindowActionPalette.h"

extern "C" {

s32 destroy__13TForceOperateFls(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFv(void* p);
u8 get_enabled__11TMainCursorFv(void* p);
u8 get_type__11TMainCursorFv(void* p);
s32 get_state__11TMainCursorFv(void* p);
void set_field_0__13TForceOperateFs(void* p, s16 v);
u16 TMainCursor__sub_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFllll(void*);

void TWindowActionPalette::set_slot(u8 v) { *(u8*)((char*)this + 0x1) = v; }
void TWindowActionPalette::set_mode(u8 v) { *(u8*)((char*)this + 0x0) = v; }

}
