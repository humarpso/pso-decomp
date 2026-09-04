#include "types.h"

extern "C" {

int TMainCursor__sub_8013DF08(void);
int TObjPlayer__sub_8013DEF8(void);
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

int TObjPlayer__sub_8013DEF8(void) { return 0; }
int TMainCursor__sub_8013DF08(void) { return 0; }

int check_visible__11TMainCursorFPv(void* p) { return find_action_slot_for_target__11TMainCursorFiiii(p); }
u8 get_enabled__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x1); }
u8 get_type__11TMainCursorFPv(void* p) { return *(u8*)((char*)p + 0x0); }

}
